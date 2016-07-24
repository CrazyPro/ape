#include "../CountryEventHandler.h"
#include "../CountryDataHandler.h"
#include "DealArenaEvent.h"
#include "../CountryRgnDataHandler.h"
#include "../../event/event.pb.h"
#include "../../common/json/json.h"
#include "../../common/string-util.h"
#include "../../common/const_def.h"
#include "../../event/EventDefine.h"

#include <math.h>
#include "../../event/EventQueue.h"
#include "../../common/SysLog.h"
#include "../CountryConfigMgr.h"
#include "../logic/CountryInfoCfg.h"
#include "../CountryDefine.h"
#include "../logic/HeroArenaActive.h"

extern int G_CountrySrvD_ID; 

//const int STAR_STAT_TIME = 60*1000;

DealArenaEvent::DealArenaEvent()
:CBaseEvent()
{
	//debug_idx = -1;
}
DealArenaEvent::~DealArenaEvent()
{

}

void DealArenaEvent::registHandler()
{
	eh_->getEventHandler()->registHandler(EVENT_GF_FIGHT_REQUEST_ARENA, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(EVENT_GF_FIGHT_REQUEST_WORLDARENA, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(EVENT_GF_FIGHT_REQUEST_HEROARENA, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceArenaRankInfo, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceArenaOpt, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceWorldArenaRankInfo, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceWorldArenaOpt, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceHeroArenaRankInfo, ((ProcessRoutine) DealArenaEvent::handle_));
	eh_->getEventHandler()->registHandler(C2S_RceHeroArenaOpt, ((ProcessRoutine) DealArenaEvent::handle_));
}

void DealArenaEvent::handle(Event* e)
{	
	GCG_CountryNeed* pNeedArgs = e->mutable_countryneed();
	int nGameID = pNeedArgs->gamesrvid();
	int nRegion = pNeedArgs->region();

	CountryDataHandler* pDH= eh_->getDataHandler();
	if(!pDH->IsRightRegion(nRegion))
	{
		return;//��������
	}
	
	CountryRgnDatHandler* pRDH = pDH->GetRegionDatHandler(nRegion);
	if(pRDH==NULL)
	{
		return;
	}

	switch(e->cmd())
	{
	case EVENT_GF_FIGHT_REQUEST_ARENA:
		{
			HandleArenaFight(e,pRDH,nGameID);
		}
		break;
	case C2S_RceArenaRankInfo:
		{
			HandleArenaRank(e,pRDH,nGameID);
		}
		break;
	case C2S_RceArenaOpt:
		{
			HandleArenaOpt(e,pRDH,nGameID);
		}
		break;
	case C2S_RceWorldArenaRankInfo:
		{
			HandleWorldArenaRank(e,pRDH,nGameID);
		}
		break;
	case C2S_RceWorldArenaOpt:
		{
			HandleWorldArenaOpt(e,pRDH,nGameID);
		}
		break;
	case EVENT_GF_FIGHT_REQUEST_WORLDARENA:
		{
			HandleWorldArenaFight(e,pRDH,nGameID);
		}
		break;
	case C2S_RceHeroArenaRankInfo:
		{
			HandleHeroArenaRank(e,pRDH,nGameID);
		}
		break;
	case C2S_RceHeroArenaOpt:
		{
			HandleHeroArenaOpt(e,pRDH,nGameID);
		}
		break;
	case EVENT_GF_FIGHT_REQUEST_HEROARENA:
		{
			HandleHeroArenaFight(e,pRDH,nGameID);
		}
		break;
	default:
		break;
	}
}

void DealArenaEvent::HandleArenaFight(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}

	//������������λ�õ�

	RseArenaOpt* pOpt = e->mutable_se_rsearenaopt();
	Arena_FightBackData* pArenaFight = e->mutable_arenafightbackdata();
	
	int nRelsult = pOpt->result();
	if(nRelsult ==  ARENA_OPT_REL_ATKSELFWIN || nRelsult == ARENA_OPT_REL_ATKBYENEMYWIN)
	{
		//����λ��
		int nCountryId = pOpt->countryidself();
		if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == false)
		{
			nRelsult = ARENA_OPT_REL_ERRNOCOUNTRYID;
		}
		else
		{
			CCountry* pCountry = pRDH->GetCountry(nCountryId);
			if(pCountry == NULL)
			{
				nRelsult = ARENA_OPT_REL_ERRNOCOUNTRYID;
			}
			else
			{
				if(pArenaFight->nposself() > pArenaFight->nposenemy())		//ֻ�����ɵʹ��
				{
					if(pCountry->ExChangePos(pRDH,pArenaFight->uidself(),pArenaFight->nposself(),pArenaFight->uidenemy(),pArenaFight->nposenemy()) == false)
					{
						nRelsult = ARENA_OPT_REL_ATKSETPOSERR;
					}
					else
					{
						pRDH->markUserLstDirty(pArenaFight->uidself());
						if(pArenaFight->uidenemy() >= 1000000000)
						{
							pRDH->markUserLstDirty(pArenaFight->uidenemy());
						}
						SYS_LOG(0,LT_ARENA_COUNTRY_RANKEXCHANGE,pRDH->GetRegion(),0,(int64)pArenaFight->uidself()<<pArenaFight->nposenemy()<<(int64)pArenaFight->uidenemy()<<pArenaFight->nposself());
					}				
				}
			}			
		}
	}

	pOpt->set_result(nRelsult);

	int64 uidEnemy = pArenaFight->uidenemy();

	if(nRelsult != ARENA_OPT_REL_ATKSELFWIN &&
		nRelsult != ARENA_OPT_REL_ATKSELFFAIL &&
		nRelsult != ARENA_OPT_REL_ATKBYENEMYWIN &&
		nRelsult != ARENA_OPT_REL_ATKBYENEMYFAIL)
	{
		//ʧ�ܣ�������ݰ���Ϣ
		pArenaFight->Clear();
	}

	//���͸��Լ��͵���
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);

	//���ͽ�����Է�������
	if(uidEnemy >= 1000000000)
	{
		e->set_uid(uidEnemy);
		pArenaFight->clear_lastfightrecord();

		e->set_state(Status_Country_To_Game);
		eh_->sendEventToGamed(e,pOpt->fightgameid());
	}
}

void DealArenaEvent::HandleArenaRank(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}
	//У�龺������������
	pRDH->CheckClearCountryArenaData();

	//��ȡ���а������

	RceArenaRankInfo* pOpt = e->mutable_ce_rcearenarankinfo();
	RseArenaRankInfo* pRankInfo = e->mutable_se_rsearenarankinfo();

	int nOptType = pOpt->type();

	pRankInfo->set_type(nOptType);

	//У����ҵľ��������ݣ����ι�����Ϣ
	//�ܿ����������������Ǽ��������
	int nCountryId = pOpt->ncountry();
	if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == false)
	{
		return;
	}

	CCountry* pCountry = pRDH->GetCountry(nCountryId);
	if(pCountry == NULL)
	{
		return;					
	}

	int nRankIndex = pOpt->nindex();
	nRankIndex = pCountry->CheckPlayerRankIndex(pRDH,nRankIndex,e->uid());
	pOpt->set_nindex(nRankIndex);

	pRankInfo->set_ntotalnum(pRDH->GetArenaPlayerNum());

	switch(nOptType)
	{
	case E_FILL_ARENA_TYPE_ASKRANK:
		{
			//��ȡ���а�����
			for(int i=C_Start;i<C_UserCoutryEnd;i++)
			{
				CCountry* pCountrySec = pRDH->GetCountry(i);
				if(pCountrySec)
				{
					if(pCountrySec->GetRankInfo(pRankInfo) == true)
					{
						pRDH->markCountryDirty(pCountrySec);
					}
				}
			}
		}
		break;
	case E_FILL_ARENA_TYPE_ASKATK:
		{
			//��ȡ��ս���������
			if(pCountry->GetRankFightInfo(nRankIndex,pRankInfo) == true)
			{
				pRDH->markCountryDirty(pCountry);
			}
		}
		break;
	}

	//����
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);

}

void DealArenaEvent::HandleArenaOpt(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}


	RceArenaOpt* pOpt = e->mutable_ce_rcearenaopt();
	RseArenaOpt* pOptBack = e->mutable_se_rsearenaopt();

	pOptBack->set_indexself(-1);

	int nOptType = pOpt->type();

	switch(nOptType)
	{
	case E_ARENA_OPT_ADDARENA:
		{
			int nCountryId = pOpt->countryidself();
			if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == true)
			{
				CCountry* pCountry = pRDH->GetCountry(nCountryId);
				if(pCountry)
				{
					if(pCountry->UpdateRank() == true)
					{
						pRDH->markCountryDirty(pCountry);
					}

					DB_C_User* pUser = pRDH->GetDBCityUser(e->uid());
					if(pUser && pUser->countryid() == nCountryId)
					{
						pOptBack->set_indexself(pCountry->AddNewPlayer(pUser));	
						pRDH->markUserLstDirty(pUser->userid());
					}
				}
			}
		}
		break;
	case E_ARENA_OPT_UPDATASCORE:
		{
			int nArenaIndex = pOpt->narenaindex();
			int nArenaScore = pOpt->narenascore();
			int nArenaScoreAdd = pOpt->narenascoreadd();
			int nCountryId = pOpt->countryidself();

			if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == true)
			{
				CCountry* pCountry = pRDH->GetCountry(nCountryId);
				if(pCountry)
				{
					if(pCountry->UpdateScoreGiftIndex(e->uid(),nArenaIndex,nArenaScore,nArenaScoreAdd) == true)
					{
						pRDH->markCountryDirty(pCountry);
					}
				}
			}
		}
		break;
	case E_ARENA_OPT_GAINSCORE:
		{
			int nCountryId = pOpt->countryidself();

			if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == true)
			{
				CCountry* pCountry = pRDH->GetCountry(nCountryId);
				if(pCountry)
				{
					pOpt->set_ngainscoregift(pCountry->GainScoreGiftIndex(e->uid()));
				}
			}
		}
		break; 
	}
	//����
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);

}


void DealArenaEvent::HandleWorldArenaRank(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}
	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}

    //���羺�������ݸ���
	pRDH->UpdateWorldArenaData();

	//��ȡ���羺�������а������
	RceWorldArenaRankInfo* pOpt = e->mutable_ce_rceworldarenarankinfo();
	RseWorldArenaRankInfo* pRankInfo = e->mutable_se_rseworldarenarankinfo();

	int nOptType = pOpt->type();
	pRankInfo->set_type(nOptType);

	int nRankIndex = pEarth->CheckPlayerWorldRankIndex(pRDH,e->uid());
	pOpt->set_nindex(nRankIndex);
	switch(nOptType)
	{
	case E_WORLD_ARENARANKINFO_ASKRANK:
		{
			//��ȡ�������а�����
            pEarth->GetWorldRankInfo(pRDH,pRankInfo);
		}
		break;
	case E_WORLD_ARENARANKINFO_ASKATK:
		{
			//��ȡ��ս���������
			pEarth->GetWorldRankFightInfo(pRDH,nRankIndex,pRankInfo);
		}
		break;
	case E_WORLD_ARENARANKINFO_ALLRANK:
		{
			//��ȡÿ�����а�
			int nActiveId = pOpt->nactiveid();
            pEarth->GetWorldALLRankInfo(pRDH,pRankInfo,nActiveId);
		}
		break;
	case E_WORLD_ARENARANKINFO_LASTRANK:
		{
			//��ȡ�������а�
			pEarth->GetWorldLastRankInfo(pRDH,pRankInfo);
		}
		break;
	}

	//����
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);

}

void DealArenaEvent::HandleWorldArenaOpt(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}

	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}
	//���Ҿ��������ݸ���
	pRDH->CheckClearCountryArenaData();

	RceWorldArenaOpt* pOpt = e->mutable_ce_rceworldarenaopt();
	RseWorldArenaOpt* pOptBack = e->mutable_se_rseworldarenaopt();

	pOptBack->set_indexself(-1);

	int nOptType = pOpt->type();
	int nRel = E_WORLD_ARENA_OPT_REL_OK;
	switch(nOptType)
	{
	case E_WORLD_ARENA_OPT_ADDARENA:
		{
			DB_C_User* pUser = pRDH->GetDBCityUser(e->uid());
			if(pUser)
			{
				nRel = pEarth->CheckCanAddWorldArena(pUser);
				if(nRel == E_WORLD_ARENA_OPT_REL_OK)
				{
					pOptBack->set_indexself(pEarth->AddWorldNewPlayer(pUser));
					pRDH->markUserLstDirty(pUser->userid());
				}
			}
		}
		break;
	}
	//����
	pOptBack->set_result(nRel);
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);
}


void DealArenaEvent::HandleWorldArenaFight(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}
	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}
	//������������λ�õ�

	RseWorldArenaOpt* pOpt = e->mutable_se_rseworldarenaopt();
	Arena_FightBackData* pArenaFight = e->mutable_arenafightbackdata();

	int nRelsult = pOpt->result();
	//���λ��
	if(nRelsult == E_WORLD_ARENA_OPT_REL_ATKSELFWIN ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKSELFFAIL ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYFAIL)
	{
		if(false==pEarth->CheckWorldArenaPos(pRDH,pArenaFight->uidself(),pArenaFight->nposself(),pArenaFight->uidenemy(),pArenaFight->nposenemy()))
		{
			nRelsult = E_WORLD_ARENA_OPT_REL_ATKSETPOSERR;
		}
		else
		{
			//ս��ʤ��
			if(nRelsult ==  E_WORLD_ARENA_OPT_REL_ATKSELFWIN || nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN)
			{
				//����λ��
				int nCountryId = pOpt->countryidself();
				if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == false)
				{
					nRelsult = E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYID;
				}
				else
				{
					CCountry* pCountry = pRDH->GetCountry(nCountryId);
					if(pCountry == NULL)
					{
						nRelsult = E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYID;
					}
					else
					{
						if(pArenaFight->nposself()>=0&&pArenaFight->nposenemy()>=0&&pArenaFight->nposself() > pArenaFight->nposenemy())		//ֻ�����ɵʹ��
						{
							if(pEarth->ChangeWorldArenaPos(pRDH,pArenaFight->uidself(),pArenaFight->nposself(),pArenaFight->uidenemy(),pArenaFight->nposenemy()) == false)
							{
								nRelsult = E_WORLD_ARENA_OPT_REL_ATKSETPOSERR;
							}
							else
							{
								pRDH->markUserLstDirty(pArenaFight->uidself());
								if(pArenaFight->uidenemy() >= 1000000000)
								{
									pRDH->markUserLstDirty(pArenaFight->uidenemy());
								}
								SYS_LOG(0,LT_ARENA_WORLD_RANKEXCHANGE,pRDH->GetRegion(),0,(int64)pArenaFight->uidself()<<pArenaFight->nposenemy()<<(int64)pArenaFight->uidenemy()<<pArenaFight->nposself());
							}				
						}
					}			
				}
			}
		}
	}
	pOpt->set_result(nRelsult);
	int64 uidEnemy = pArenaFight->uidenemy();
	if(nRelsult != E_WORLD_ARENA_OPT_REL_ATKSELFWIN &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKSELFFAIL &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKBYENEMYFAIL)
	{
		//������ݰ���Ϣ
		pArenaFight->Clear();
	}
	//���͸��Լ��͵���
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);
	//���ͽ�����Է�������
	if(uidEnemy >= 1000000000)
	{
		e->set_uid(uidEnemy);
		pArenaFight->clear_lastfightrecord();

		e->set_state(Status_Country_To_Game);
		eh_->sendEventToGamed(e,pOpt->fightgameid());
	}
}


void DealArenaEvent::HandleHeroArenaRank(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}
	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}

	//Ӣ�۾��������ݸ���
	pRDH->UpdateHeroArenaData();

	//��ȡ���羺�������а������
	RceHeroArenaRankInfo* pOpt = e->mutable_ce_rceheroarenarankinfo();
	RseHeroArenaRankInfo* pRankInfo = e->mutable_se_rseheroarenarankinfo();

	int nOptType = pOpt->type();
	pRankInfo->set_type(nOptType);

	int nRankIndex = pEarth->CheckPlayerHeroRankIndex(pRDH,e->uid());
	pOpt->set_nindex(nRankIndex);
	bool bLastday = HeroArenaActive::Instance().IsInLastDays();
	/*if(nRankIndex == -1 && bLastday)
	{
		pRankInfo->set_type(E_HERO_ARENARANKINFO_ASKATK);
		pEarth->GetLastdayHeroRankFightInfo(pRankInfo);
		e->set_state(Status_Country_To_Game);
		eh_->sendEventToGamed(e,nGameID);
		return;
	}*/
	switch(nOptType)
	{
	case E_HERO_ARENARANKINFO_ASKRANK:
		{
			//��ȡ�������а�����
			pEarth->GetHeroRankInfo(pRDH,pRankInfo);
		}
		break;
	case E_HERO_ARENARANKINFO_ASKATK:
		{
			//��ȡ��ս���������
			//pEarth->GetHeroRankFightInfo(pRDH,nRankIndex,pRankInfo);
			if (nRankIndex == -1 && bLastday)
			{
				pEarth->GetLastdayHeroRankFightInfo(pRankInfo);
			} 
			else
			{
				pEarth->GetHeroRankFightInfo(pRDH,nRankIndex,pRankInfo);
			}
		}
		break;
	}

	//����
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);

}

void DealArenaEvent::HandleHeroArenaOpt(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}

	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}

	RceHeroArenaOpt* pOpt = e->mutable_ce_rceheroarenaopt();
	RseHeroArenaOpt* pOptBack = e->mutable_se_rseheroarenaopt();

	pOptBack->set_indexself(-1);

	int nOptType = pOpt->type();
	int nRel = E_WORLD_ARENA_OPT_REL_OK;
	switch(nOptType)
	{
	case E_HERO_ARENA_OPT_ADDARENA:
		{
			DB_C_User* pUser = pRDH->GetDBCityUser(e->uid());
			if(pUser)
			{
				pOptBack->set_indexself(pEarth->AddHeroNewPlayer(pUser));
				pRDH->markUserLstDirty(pUser->userid());
			}
		}
		break;
	}
	//����
	pOptBack->set_result(nRel);
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);
}


void DealArenaEvent::HandleHeroArenaFight(Event* e,CountryRgnDatHandler* pRDH,int nGameID)
{
	if(e == NULL || e->state() != Status_Game_To_Country || pRDH == NULL)
	{
		return;
	}
	CCountry* pEarth = pRDH->GetEarthCountry();
	if(pEarth == NULL)
	{
		return;					
	}
	//������������λ�õ�

	RseHeroArenaOpt* pOpt = e->mutable_se_rseheroarenaopt();
	Arena_FightBackData* pArenaFight = e->mutable_arenafightbackdata();

	int nRelsult = pOpt->result();
	//���λ��
	if(nRelsult == E_WORLD_ARENA_OPT_REL_ATKSELFWIN ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKSELFFAIL ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN ||
		nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYFAIL)
	{
		if(false==pEarth->CheckHeroArenaPos(pRDH,pArenaFight->uidself(),pArenaFight->nposself(),pArenaFight->uidenemy(),pArenaFight->nposenemy()))
		{
			nRelsult = E_WORLD_ARENA_OPT_REL_ATKSETPOSERR;
		}
		else
		{
			//ս��ʤ��
			if(nRelsult ==  E_WORLD_ARENA_OPT_REL_ATKSELFWIN || nRelsult == E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN)
			{
				//����λ��
				int nCountryId = pOpt->countryidself();
				if(CountryInfoCfg::Instance().IsUserCountry(nCountryId) == false)
				{
					nRelsult = E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYID;
				}
				else
				{
					CCountry* pCountry = pRDH->GetCountry(nCountryId);
					if(pCountry == NULL)
					{
						nRelsult = E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYID;
					}
					else
					{
						if(pArenaFight->nposself()>=0&&pArenaFight->nposenemy()>=0&&pArenaFight->nposself() > pArenaFight->nposenemy())		//ֻ�����ɵʹ��
						{
							if(pEarth->ChangeHeroArenaPos(pRDH,pArenaFight->uidself(),pArenaFight->nposself(),pArenaFight->uidenemy(),pArenaFight->nposenemy()) == false)
							{
								nRelsult = E_WORLD_ARENA_OPT_REL_ATKSETPOSERR;
							}
							else
							{
								pRDH->markUserLstDirty(pArenaFight->uidself());
								if(pArenaFight->uidenemy() >= 1000000000)
								{
									pRDH->markUserLstDirty(pArenaFight->uidenemy());
								}
								SYS_LOG(0,LT_ARENA_HERO_RANKEXCHANGE,pRDH->GetRegion(),0,(int64)pArenaFight->uidself()<<pArenaFight->nposenemy()<<(int64)pArenaFight->uidenemy()<<pArenaFight->nposself());
							}				
						}
					}			
				}
			}
		}
	}
	pOpt->set_result(nRelsult);
	int64 uidEnemy = pArenaFight->uidenemy();
	if(nRelsult != E_WORLD_ARENA_OPT_REL_ATKSELFWIN &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKSELFFAIL &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN &&
		nRelsult != E_WORLD_ARENA_OPT_REL_ATKBYENEMYFAIL)
	{
		//������ݰ���Ϣ
		pArenaFight->Clear();
	}
	//���͸��Լ��͵���
	e->set_state(Status_Country_To_Game);
	eh_->sendEventToGamed(e,nGameID);
	//���ͽ�����Է�������
	if(uidEnemy >= 1000000000)
	{
		e->set_uid(uidEnemy);
		pArenaFight->clear_lastfightrecord();

		e->set_state(Status_Country_To_Game);
		eh_->sendEventToGamed(e,pOpt->fightgameid());
	}
}