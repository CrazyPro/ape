#pragma once

#include <log4cxx/logger.h>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <algorithm>

#include <pthread.h>
#include "../event/DataHandler.h"
#include "../common/const_def.h"
#include "../common/string-util.h"
#include "../common/distribution.h"
#include "../event/RseArenaRankInfo.pb.h"
#include "../event/RseWorldArenaRankInfo.pb.h"
#include "../event/RseOfficerOpen.pb.h"
#include "../event/RseHeroArenaRankInfo.pb.h"
#include "../event/RseWPCBaseOpen.pb.h"
#include "../event/RseGvgOpt.pb.h"
//#include "../event/RightInfo.pb.h"
#include "../logic/GVEInfoCfg.h"
#include "../logic/CountryInfoCfg.h"
#include "../logic/GvgCfg.h"
#include "../event/WarGameSiteInfo.pb.h"
#include "../event/RseWarGameOpt.pb.h"
#include "../event/RseCountryChat.pb.h"
#include "../event/RseGuildRedEnvelopeOpt.pb.h"
#include "../event/RseCityBuffInfo.pb.h"
#include "../event/RseArmRace.pb.h"
#include "../common/Rand.h"
#include "../logic/OneYuanPurchaseCfg.h"
#include "../logic/GameActivityTimeCfg.h"

class RightInfo;
class CityRightInfo;

#include "countryDB.pb.h"
using namespace std;
#ifndef WIN32
#include <ext/hash_map>
using namespace __gnu_cxx;
namespace __gnu_cxx
{

	template<>
	struct hash<long long>
	{

		size_t
			operator()(long long __x) const
		{
			return __x;
		}
	} ;

	template<>
	struct hash<std::string>
	{

		size_t
			operator()(std::string __s) const
		{
			return __stl_hash_string(__s.c_str());
		}
	} ;
}
#else
#include <hash_map>
using namespace stdext;
#endif

static bool compareGveRank(DB_C_User* pUser1, DB_C_User* pUser2)
{
	if ( pUser1 == NULL || pUser2 == NULL )
	{
		return true;
	}
	if(pUser1->gvepoint() > pUser2->gvepoint())
		return true;
	else
		return false;
}

class CCity
{
public:
	CCity()
	{	
		m_bUserCaptial = false;
		m_nCaptureUserCnt = 0;
		
		m_bNPCCity	= false;
		m_mapHasUser.clear();
		for(int i=0;i<CITY_USER_GROUP;i++)
		{
			m_lstUser[i].clear();
		}
		m_bChampionIn = false;
	}
	~CCity()
	{
		m_dbCity.Clear();
		m_mapHasUser.clear();
		m_lstNPC.clear();
		
		for(int i=0;i<CITY_USER_GROUP;i++)
		{
			m_lstUser[i].clear();
		}
	}
	int GetCityID(){return m_dbCity.cityid();}
	int GetRegion(){return m_dbCity.region();}
	int GetCountry(){return m_dbCity.countryid();}
	int GetKey(){return (m_dbCity.region()*MAX_CITY_ID+m_dbCity.cityid());}
	bool IsUserCaptial(){return m_bUserCaptial;}
	bool IsNPCCity(){return !m_bNPCCity;}
	void ClearOfficerRightBuff()
	{
		m_dbCity.clear_officerrightuselst();
	}
	bool ClearOfficerRightByUid(int64 uid)
	{
		if(uid<=0)
		{
			return false;
		}
		bool bUpdate = false;
		for(int i=0;i<m_dbCity.officerrightuselst_size();i++)
		{
			DB_C_OfficerRightUse* pDBCRightUse = m_dbCity.mutable_officerrightuselst(i);
			if(pDBCRightUse)
			{
				if(pDBCRightUse->uid()==uid)
				{
					pDBCRightUse->Clear();
					bUpdate = true;
				}
			}
		}
		return bUpdate;
	}
	bool HasOfficerRightBuff()
	{
		time_t now = time(NULL);
		for(int i=0;i<m_dbCity.officerrightuselst_size();i++)
		{
			DB_C_OfficerRightUse* pDBCRightUse = m_dbCity.mutable_officerrightuselst(i);
			if(pDBCRightUse)
			{
				if(pDBCRightUse->endtime()>=(int)now)
				{
					return true;
				}
			}
		}
		return false;
	}
	bool UpdateOfficerRightBuff()
	{
		time_t now = time(NULL);
		bool bUpdate = false;
		for(int i=0;i<m_dbCity.officerrightuselst_size();i++)
		{
			DB_C_OfficerRightUse* pDBCRightUse = m_dbCity.mutable_officerrightuselst(i);
			if(pDBCRightUse)
			{
				if(pDBCRightUse->endtime()<(int)now)
				{
					bUpdate = true;
					pDBCRightUse->Clear();
				}
			}
		}
		return bUpdate;
	}
	void UserEnterCity(DB_C_User* pDBCUser,bool bChampion = false)
	{
		if(pDBCUser==NULL)
			return;
		if(m_bUserCaptial)
		{
			pDBCUser->set_cityid(m_dbCity.cityid());
			m_nCaptureUserCnt++;
			return;
		}
		int64 nUserID = pDBCUser->userid();
		pDBCUser->set_cityid(m_dbCity.cityid());

		if(m_mapHasUser.find(pDBCUser->userid()) != m_mapHasUser.end())
		{//�˴���Ϊ���ִ���
			int nIdx = nUserID%CITY_USER_GROUP;
			bool bFind = false;
			for(int i=0;i<(int)m_lstUser[nIdx].size();i++)
			{
				if(m_lstUser[nIdx][i]->userid() == nUserID)
				{
					bFind = true;
					break;
				}
			}
			if(!bFind)
			{
				m_mapHasUser[nUserID] = 1;
				m_lstUser[nUserID%CITY_USER_GROUP].push_back(pDBCUser);
			}

		}
		else
		{
			m_mapHasUser[nUserID] = 1;
			m_lstUser[nUserID%CITY_USER_GROUP].push_back(pDBCUser);
		}
		
		if ( bChampion )
		{
			m_bChampionIn = true;
		}
	}
	void UserLeaveCity(DB_C_User* pDBCUser,bool bChampion = false)
	{
		if(pDBCUser==NULL)
			return;
		if(m_bUserCaptial)
		{
			m_nCaptureUserCnt--;
			if(m_nCaptureUserCnt<0)
			{
				m_nCaptureUserCnt = 0;
			}
			return;
		}
		int64 nUserID = pDBCUser->userid();
		
		hash_map<int64,int>::iterator iter;
		iter = m_mapHasUser.find(nUserID);
		if(iter == m_mapHasUser.end())
		{//�˴���Ϊ�����˴���
			vector<DB_C_User*>::iterator it1;
			int nIdx = nUserID%CITY_USER_GROUP;
			for(it1 = m_lstUser[nIdx].begin();it1!=m_lstUser[nIdx].end();it1++)
			{
				DB_C_User* pTmpUser = *it1;
				if(pTmpUser==NULL)
				{
					continue;
				}
				if(pTmpUser->userid()==nUserID)
				{
					m_lstUser[nIdx].erase(it1);
					break;
				}
			}
		}
		else
		{
			m_mapHasUser.erase(iter);
			int nIdx = nUserID%CITY_USER_GROUP;
			vector<DB_C_User*>::iterator it1;
			for(it1 = m_lstUser[nIdx].begin();it1!=m_lstUser[nIdx].end(); )
			{
				DB_C_User* pTmpUser = *it1;
				if(pTmpUser==NULL)
				{
					it1 = m_lstUser[nIdx].erase(it1);
					continue;
				}
				if(pTmpUser->userid()==nUserID)
				{
					it1 = m_lstUser[nIdx].erase(it1);
					continue;
				}
				it1++;
			}
		}
		if ( bChampion )
		{
			m_bChampionIn = false;
		}
	}
	DB_C_City* GetDBCity(){return &m_dbCity;}
	void ResetUserLst()
	{
		if(m_bUserCaptial)
			return;
		vector<DB_C_User*>::iterator iter;
		m_mapHasUser.clear();
		for(int i=0;i<CITY_USER_GROUP;i++)
		{
			for(iter = m_lstUser[i].begin();iter!=m_lstUser[i].end();)
			{
				DB_C_User* pDBCUser = *iter;
				if(pDBCUser==NULL)
				{
					iter = m_lstUser[i].erase(iter);
					continue;
				}
				if(pDBCUser->cityid()!=m_dbCity.cityid())
				{
					iter = m_lstUser[i].erase(iter);
					continue;
				}
				m_mapHasUser[pDBCUser->userid()] = 1;
				iter++;
			}
		}
	}
	//void ResetEmptyUser()
	//{
	//	if(m_bUserCaptial)
	//		return;
	//	m_nClearCnt=0;
	//	m_nUserCnt = 0;
	//	int nIdx = 0;
	//	m_mapUserIdx.clear();
	//	vector<int64>::iterator iter;
	//	for(iter = m_lstUser.begin();iter!=m_lstUser.end();)
	//	{
	//		int64 nUserID = *iter;
	//		if(nUserID<=0)
	//		{	
	//			iter = m_lstUser.erase(iter);
	//			continue;
	//		}
	//		m_mapUserIdx[nUserID] = nIdx;
	//		nIdx++;
	//		iter++;
	//	}
	//}
	bool CheckEmptyCity()
	{
		if(m_bUserCaptial)
			return false;
		if(m_bNPCCity)
		{//���¼���һ��
			return m_lstNPC.size()==0;
		}
		//ResetEmptyUser();
		//return (m_nClearCnt==0);
		return (GetUserCnt()==0);
	}
	//void CacuClearUser()
	//{
	//	m_nClearCnt++;
	//	m_nUserCnt--;
	//	if(m_nClearCnt>200)
	//	{		
	//		ResetEmptyUser();
	//	}
	//}
	int GetUserCnt()
	{
		if(m_bUserCaptial)
		{
			return m_nCaptureUserCnt;
		}
		else if(m_bNPCCity)
		{
			return m_lstNPC.size();
		}
		int nCnt = 0;
		for(int i=0;i<CITY_USER_GROUP;i++)
		{
			nCnt += m_lstUser[i].size();
		}
		return nCnt;
	}

	int m_nCaptureUserCnt;		//�׶��������
	bool m_bUserCaptial;		//�Ƿ�����ҵ��׶�
	bool m_bNPCCity;			//�Ƿ���NPC�ĳ���

	DB_C_City			m_dbCity;
	vector<DB_C_User*>	m_lstUser[CITY_USER_GROUP];	//����������б�
	hash_map<int64,int> m_mapHasUser;				//�Ƿ��и����

	vector<DB_C_NPC*>	m_lstNPC;	//NPC�б�

	int m_nLastBattleTime; //���һ��ս��ʱ��

	bool m_bChampionIn;

//	hash_map<int64,int> m_mapUserIdx;	//����ڳ��е��±�
//	list<int>			m_lstEmptyIdx;	//�����±�	
};

struct DB_Arena_Node
{
	DB_Arena_Rank_NPC*	pNpc;
	DB_C_User*			pUser;

	DB_Arena_Node()
	{
		pNpc = NULL;
		pUser = NULL;
	}

	DB_Arena_Node& operator=(const DB_Arena_Node& rNode)
	{
		pNpc = rNode.pNpc;
		pUser = rNode.pUser;
		return *this;
	}
};

class CountryRgnDatHandler;
class CCountry
{
public:
	CCountry(int nCountryID,int nRegionID)
		:m_nCountryID(nCountryID)
		,m_nRegion(nRegionID)
	{
		m_lstCity.clear();
		m_pCapital = NULL;
		m_dbCountry.set_region(nRegionID);
		m_dbCountry.set_countryid(nCountryID);
		m_nBoom = 0;
	}

	~CCountry()
	{
		Clear();
	}

	void Clear()
	{
		m_lstCity.clear();
		m_pCapital = NULL;
		m_rvecPlayArena.clear();
		m_rmapNpcArena.clear();
		m_rvecPlayHeroArena.clear();
		m_rmapNpcHeroArena.clear();
	}

	int GetCountryID(){return m_nCountryID;}
	void AddCity(CCity* pCity);
	void EraseCity(int nCityID);
	CCity* GetCapital(){return m_pCapital;}

	void CheckBoom();

	int GetCountryUserCnt()
	{
		return m_dbCountry.usercnt();
	}
	void UserChgCity(DB_C_User* pDBCUser,CCity* pFromCity,CCity* pToCity)
	{
		if(pDBCUser==NULL||pFromCity==NULL||pToCity==NULL)
			return ;
		pFromCity->UserLeaveCity(pDBCUser);
		pToCity->UserEnterCity(pDBCUser);
	}

	DB_C_CountryLeagueBattle* GetDBCountryLeagueBattle(){return m_dbCountry.mutable_lastleaguebattle();}
	DB_C_CityBuffData* GetCityBuffData(){return m_dbCountry.mutable_citybuffdata();}

	bool	 ExChangePos(DB_C_User* pCUser,int64 nuidFight);
	bool	 ExChangePos(CountryRgnDatHandler* pRDH,int64 uidSelf,int posSelf,int64 uidFight,int posFight);
	bool	 GetRankInfo(RseArenaRankInfo* pArenaRankInfo);
	bool	 GetRankFightInfo(int nPos,RseArenaRankInfo* pArenaRankInfo);
	int		 AddNewPlayer(DB_C_User* pCUser);
	int		 AddNewNpc(int64 nUid);
	void	 InitRankNpc();
	bool	 UpdateRank();
	bool	 UpdateRankNpc();
	int64	 GetRankUidByIndex(int nIndex);
	int		 CheckPlayerRankIndex(CountryRgnDatHandler* pRDH,int nIndex,int64 nUid);
	int		 GetArenaPlayerNum();
	DB_Arena_Rank_NPC* GetArenaNpc(int nId,int nPos);
	void	 CleraArenaData();

	void	 ChgArenaNpc(int nPos,int64 nuid);
	void	 UpdateArenaListPos(int nPos,int64 nuidO,int64 nuidN);
	void	 UpdateArenaList(CountryRgnDatHandler* pRDH);
	
	int GetKey(){return (m_nRegion*MAX_CITY_ID + m_nCountryID);}
	DB_C_Country* GetDBCountry(){return &m_dbCountry;}

	int		GainScoreGiftIndex(int64 uid);
	bool	UpdateScoreGiftIndex(int64 uid,int nArenaID,int nArenaScore,int nScoreAdd);
	bool	UpdateUserScoreList(DB_Arena_Score_List* plist,int64 uid,int nScore);
	void	ClearScoreGiftIndex(int64 uid);
public:
	//�������
	void	 ClearWorldArenaData();
	bool	 GetWorldRankInfo(CountryRgnDatHandler* pRDH,RseWorldArenaRankInfo* pArenaRankInfo);                //��ȡ��������
	bool	 GetWorldRankFightInfo(CountryRgnDatHandler* pRDH,int nPos,RseWorldArenaRankInfo* pArenaRankInfo);  //��ȡ�ɹ�������б�
	bool	 GetWorldALLRankInfo(CountryRgnDatHandler* pRDH,RseWorldArenaRankInfo* pArenaRankInfo,int activeId);             //��ȡÿ������
	bool	 GetWorldLastRankInfo(CountryRgnDatHandler* pRDH,RseWorldArenaRankInfo* pArenaRankInfo);            //��ȡ��������
	int		 AddWorldNewPlayer(DB_C_User* pCUser);
	int		 CheckCanAddWorldArena(DB_C_User* pCUser);
	int		 AddWorldNewNpc(int64 nUid);
	void	 InitWorldRankNpc();           //��ʼ��NPC����
	bool	 UpdateWorldRankEveryDay();            //ÿ�����
	bool	 UpdateWorldRankNpc();         //����NPC��������
	bool	 SaveWorldArenaRankLast();         //�����������а�
	int		 CheckPlayerWorldRankIndex(CountryRgnDatHandler* pRDH,int64 nUid);
	void	 UpdateWorldArenaList(CountryRgnDatHandler* pRDH);
	void	 UpdateWorldArenaPos(int nPos,int64 nuidO,int64 nuidN);                                             
	bool	 ChangeWorldArenaPos(CountryRgnDatHandler* pRDH,int64 uidSelf,int posSelf,int64 uidFight,int posFight); //�����仯
	bool	 CheckWorldArenaPos(CountryRgnDatHandler* pRDH,int64 uidSelf,int posSelf,int64 uidFight,int posFight);
public:
	//Ӣ�۾��������
	void	 ClearHeroArenaData();
	bool	 GetHeroRankInfo(CountryRgnDatHandler* pRDH,RseHeroArenaRankInfo* pArenaRankInfo);                //��ȡ��������
	bool	 GetHeroRankFightInfo(CountryRgnDatHandler* pRDH,int nPos,RseHeroArenaRankInfo* pArenaRankInfo);  //��ȡ�ɹ�������б�
	bool	 GetLastdayHeroRankFightInfo(RseHeroArenaRankInfo* pArenaRankInfo);//���һ��
	int		 AddHeroNewPlayer(DB_C_User* pCUser);
	int		 AddHeroNewNpc(int64 nUid);
	void	 InitHeroRankNpc();           //��ʼ��NPC����
	bool	 UpdateHeroRankEveryDay();            //ÿ�����
	bool	 UpdateHeroRankNpc();         //����NPC��������
	int		 CheckPlayerHeroRankIndex(CountryRgnDatHandler* pRDH,int64 nUid);
	void	 UpdateHeroArenaList(CountryRgnDatHandler* pRDH);
	void	 UpdateHeroArenaPos(int nPos,int64 nuidO,int64 nuidN);                                             
	bool	 ChangeHeroArenaPos(CountryRgnDatHandler* pRDH,int64 uidSelf,int posSelf,int64 uidFight,int posFight); //�����仯
	bool	 CheckHeroArenaPos(CountryRgnDatHandler* pRDH,int64 uidSelf,int posSelf,int64 uidFight,int posFight);
	int64	 GetHeroRankUidByIndex(int nIndex);
	DB_Arena_Rank_NPC* GetHeroArenaNpc(int nId,int nPos);
	int		 GetHeroArenaPlayerNum();
public:
	//���ҹ�Ա��� 
	
	E_Officer_Type GetOfficerType(int nPosition);
	int64       GetOfficerPositionUser(int nPosition);
	bool        SetUserOfficerPosition(DB_C_User* pDBCUser,E_Officer_Position ePosition);
	bool        DelUserOfficerPosition(DB_C_User* pDBCUser,E_Officer_Position ePosition);
	bool        HasUserOfficerPosition(DB_C_User* pDBCUser,E_Officer_Position ePosition);
	E_Officer_Position GetUserHighestPosition(DB_C_User* pDBCUser);
	bool        ChangeOfficerPosition(DB_C_User* pDBCUser,DB_C_User* pDBCTarUser,E_Officer_Type nType);
	bool        UpdateUserOfficerPerDay();
	void		SetOfficerRightUsed(E_Officer_Position ePosition);
	bool        IsOfficerRightUsed(E_Officer_Position ePosition);
private:
	bool	 ExChangePos(DB_C_User* pCUser,DB_C_User* pCFUser);
	bool	 ExChangePos(DB_C_User* pCUser,DB_Arena_Rank_NPC* pNpc);
public:
	void	AddChatMsg(int64 uid , int country , string name , string msg , int type);
	void	GetChatMsg(RseCountryChatMsg*);
	int		AddNpcActiveRecord(int nLv);
public:

	DB_C_Country m_dbCountry;

	int m_nRegion;
	int m_nCountryID;
	vector<CCity*> m_lstCity;
	CCity* m_pCapital;	//�׶�ָ�룬Ҳ��m_lstCity�б���
	vector<int64>	m_rvecPlayArena;	//����б�
	map<int,vector<DB_Arena_Rank_NPC*> > m_rmapNpcArena;	//NPC�б�
	vector<int64>	m_rvecPlayHeroArena;	//Ӣ�۾���������б�
	map<int,vector<DB_Arena_Rank_NPC*> > m_rmapNpcHeroArena;	//Ӣ�۾�����NPC�б�
	int m_nBoom;
};
class CGuild
{
public:
	CGuild(int nRegion,int nOldRegion,DB_C_Guild* pDBGuild)
		:m_nRegion(nRegion)
		,m_nOldRegion(nOldRegion)
		,m_pDBGuild(pDBGuild)
	{
		m_nCountryGuildRank	= 0;
		m_nAllGuildRank		= 0;	
		m_nCheckLogTM		= 0;
		m_nCountryGuildPKRank	= 0;		
		m_nAllGuildPKRank		= 0;
		m_ltLastGveRank		= 0;
		m_ltLastGveMsg = 0;
		m_nPoint = 0;
		m_nNpcCnt = 0;
		m_ltLastLeagueCount = 0;
	}
	~CGuild()
	{

	}
	DB_C_Guild* GetDBGuild(){return m_pDBGuild;}
	int	GetGuildID(){return m_pDBGuild->guildid();}
	int GetCountry(){return m_pDBGuild->countryid();}
	int GetGuildLV(){return m_pDBGuild->guildlv();}
	int GetGuildPKScore(){return m_pDBGuild->mutable_btlinfo()->totalscore();}
	int GetCheckLogTM(){return m_nCheckLogTM;}
	void SetGuildName(const char* szName){m_strGuildName=szName;}
	string GetGuildName(){return m_strGuildName;}
	int GetChgLeaderTM(){return m_pDBGuild->chgleadertm();}
	DB_C_User* GetMember(int64 nUserID)
	{
		map<int64,DB_C_User*>::iterator iter;
		iter = m_mapGuildUser.find(nUserID);
		if(iter == m_mapGuildUser.end())
			return NULL;
		return iter->second;
	}
	string GetLeaderName()
	{//��ö�Ӧƽ̨�Ļ᳤����
		return m_pDBGuild->leadername();
	}
	int64 GetLeaderID()
	{
		return m_pDBGuild->leaderid();
	}
	int GetPositionCnt(GuildPositionType emPos)
	{
		int nCnt = 0;
		map<int64,DB_C_User*>::iterator iter;
		for(iter = m_mapGuildUser.begin();iter!=m_mapGuildUser.end();iter++)
		{
			DB_C_User* pDBCUser = iter->second;
			if(pDBCUser->position()==emPos)
			{
				nCnt++;
			}
		}
		return nCnt;
	}
	int GetUserCnt(){return m_mapGuildUser.size();}
	void AddUser(DB_C_User* pUser){ m_mapGuildUser[(int64)pUser->userid()] = pUser;}
	void SetPKGuildID(int nTurns,int nGuildID);
	int GetPKGuildID(int nTurns);
	bool IsUserSignUpBtl(int64 nUserID);	//����Ƿ����˹���ս
	bool IsUserInGvgBtl(int64 nUserID);
	bool HasPKToday();	//�ù����Ƿ�μ��˹���ս
	void EraseUser(int64 nUserID)
	{
		map<int64,DB_C_User*>::iterator iter;
		iter = m_mapGuildUser.find(nUserID);
		if(iter !=m_mapGuildUser.end())
		{
			m_mapGuildUser.erase(iter);
		}
	}
	
	void EraseApplyUser(int64 nUserID)
	{
		if(m_pDBGuild==NULL)
			return;
		for(int i=0;i<m_pDBGuild->applyuserid_size();i++)
		{
			if(m_pDBGuild->applyuserid(i) == nUserID)
			{
				m_pDBGuild->set_applyuserid(i,0);
			}
		}
	}
	bool IsInApplyLst(int64 nUserID)
	{
		if(m_pDBGuild==NULL)
			return false;
		for(int i=0;i<m_pDBGuild->applyuserid_size();i++)
		{
			if(m_pDBGuild->applyuserid(i) == nUserID)
			{
				return true;
			}
		}
		return false;
	}
	bool CheckNewDayAndClear()
	{
		if(m_pDBGuild==NULL)
			return false;

		CheckGve();

		time_t ltNow = time(NULL);
		time_t lasttime = m_pDBGuild->lastchgtime();
		if(lasttime<=0)
		{
			m_pDBGuild->set_lastchgtime(ltNow);
			return false;
		}
		struct tm nowtime = *localtime(&ltNow);
		struct tm lastlogintime = *localtime(&lasttime);
		if (lastlogintime.tm_yday != nowtime.tm_yday)
		{//��һ��
			m_pDBGuild->set_dayentercnt(0);
			m_pDBGuild->set_daykickusercnt(0);
			m_pDBGuild->set_lastchgtime((int)ltNow);
			return true;
		}
		return false;
	}
	DB_GVE_City* GetDBGve()
	{
		if ( m_pDBGuild != NULL)
		{
			return m_pDBGuild->mutable_gvemsg();
		}
		return NULL;
	}
	void CheckGve()
	{
		if(m_pDBGuild==NULL)
			return;

		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return;
		}
		
		GveBaseTbl* pTbl = GVEInfoCfg::Instance().GetGveBaseTbl();

		if ( pTbl == NULL )
		{
			return;
		}

		if ( pDB_Gve->spnpc_size() == 0 )
		{
			ResetSpNpc();
		}

		if ( pTbl->m_nID != pDB_Gve->flag() )
		{
			pDB_Gve->clear_npc();
			pDB_Gve->clear_spnpc();
			pDB_Gve->clear_bufflist();
			pDB_Gve->clear_playerlist();
			pDB_Gve->clear_lastrefreshtime();

			SaveLastRank(pDB_Gve->flag());

			pDB_Gve->set_flag(pTbl->m_nID);
			pDB_Gve->mutable_nowmsg()->set_gvestep(GVE_START_STEP);
			ResetNpc();
			ResetSpNpc();
			return;
		}

		if ( pTbl->CanSave(time(NULL)) )
		{
			SaveLastRank(pTbl->m_nID);
		}
		ResetRank();
	}

	void SaveLastRank(int nFlag)
	{
		if(m_pDBGuild==NULL)
			return;

		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return;
		}

		DB_GVE_Msg* pDBLastMsg = pDB_Gve->mutable_lastmsg();

		if ( pDBLastMsg->flag() == nFlag )
		{
			return;
		}

		pDB_Gve->clear_lastlist();

		for ( int i = 0; i < pDB_Gve->nowlist_size(); i++ )
		{
			DB_GVE_List* pLastList = pDB_Gve->add_lastlist();
			const DB_GVE_List nowList = pDB_Gve->nowlist(i);

			if ( pLastList == NULL )
			{
				continue;
			}

			pLastList->CopyFrom(nowList);
		}

		pDB_Gve->clear_nowlist();
		m_lstRank.clear();

		pDB_Gve->clear_lastmsg();
		
		pDBLastMsg->CopyFrom(pDB_Gve->nowmsg());
		pDBLastMsg->set_flag(nFlag);
		pDB_Gve->clear_nowmsg();
		pDB_Gve->mutable_nowmsg()->set_gvestep(GVE_START_STEP);
		m_nPoint = 0;

		//������ü�¼
		DB_GVE_Msg* pDBHighestMsg = pDB_Gve->mutable_highestmsg();
		if ( pDBLastMsg->gvestep() > pDBHighestMsg->gvestep() )
		{
			pDBHighestMsg->set_gvestep(pDBLastMsg->gvestep());
		}

		if ( pDBLastMsg->point() > pDBHighestMsg->point() )
		{
			pDBHighestMsg->set_point(pDBLastMsg->point());
		}

		if ( pDBLastMsg->playercnt() > pDBHighestMsg->playercnt() )
		{
			pDBHighestMsg->set_playercnt(pDBLastMsg->playercnt());
		}
	}

	void ResetNpc()
	{
		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return;
		}

		pDB_Gve->clear_npc();
		int nInitMorale = CountryInfoCfg::Instance().GetCountryBaseTbl()->m_nInitMorale;
		const GveCityTbl* pCityTbl = GVEInfoCfg::Instance().GetGveCityTbl(pDB_Gve->nowmsg().gvestep());
		if(pCityTbl==NULL)
			return;

		int nIdx = 0;
		map<int,int>::const_iterator itNPC;
		for(itNPC = pCityTbl->m_mapNPCArmy.begin();itNPC!=pCityTbl->m_mapNPCArmy.end();itNPC++)
		{
			int nNPCID = itNPC->first;
			int nCnt   = itNPC->second;
			const GveNPCTbl* pCountryNpc = GVEInfoCfg::Instance().GetNpcTbl(nNPCID);
			for(int k=0;k<nCnt&&k<COUNTRY_NPC_RATE;k++)
			{
				DB_C_NPC* pNPC = pDB_Gve->add_npc();
				pNPC->set_npcid(nNPCID*COUNTRY_NPC_RATE+nIdx);
				pNPC->set_morale(nInitMorale);

				nIdx++;
			}
		}
		m_nNpcCnt = nIdx;
	}

	void ResetSpNpc()
	{
		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return;
		}

		pDB_Gve->clear_spnpc();
		int nInitMorale = CountryInfoCfg::Instance().GetCountryBaseTbl()->m_nInitMorale;
		const GveCityTbl* pCityTbl = GVEInfoCfg::Instance().GetGveCityTbl(GVE_SP_STEP);
		if(pCityTbl==NULL)
			return;

		int nIdx = 0;
		map<int,int>::const_iterator itNPC;
		for(itNPC = pCityTbl->m_mapNPCArmy.begin();itNPC!=pCityTbl->m_mapNPCArmy.end();itNPC++)
		{
			int nNPCID = itNPC->first;
			int nCnt   = itNPC->second;
			const GveNPCTbl* pCountryNpc = GVEInfoCfg::Instance().GetNpcTbl(nNPCID);
			for(int k=0;k<nCnt&&k<COUNTRY_NPC_RATE;k++)
			{
				DB_C_NPC* pNPC = pDB_Gve->add_spnpc();
				pNPC->set_npcid(nNPCID*COUNTRY_NPC_RATE+nIdx+GVE_SP_NPC_ADD);
				pNPC->set_morale(nInitMorale);

				nIdx++;
			}
		}
	}

	void ResetRank()
	{
		if ( GetGuildLV() < 2 )
		{
			return;
		}

		static int nTenMin = 1200;
		time_t tNow = time(NULL);

		if(tNow - m_ltLastGveRank > nTenMin)
		{

			DB_GVE_City* pDB_Gve = GetDBGve();
			if ( pDB_Gve == NULL )
			{
				return;
			}

			GveBaseTbl* pTbl = GVEInfoCfg::Instance().GetGveBaseTbl();
			if ( pTbl == NULL )
			{
				return;
			}

			int nAllPoint = 0;
			m_lstRank.clear();
			map<int64,DB_C_User*>::iterator iter;
			for ( iter = m_mapGuildUser.begin(); iter != m_mapGuildUser.end(); iter++ )
			{
				m_lstRank.push_back(iter->second);
			}
			
			sort(m_lstRank.begin(),m_lstRank.end(),compareGveRank);

			if ( m_lstRank.size() == 0 )
			{
				return;
			}

			if ( pTbl->CanSave(tNow) )
			{
				//�Ѿ����㣬ֹͣ���а����
			}

			else
			{
				pDB_Gve->clear_nowlist();
				for ( int i = 0; i < m_lstRank.size(); i++ )
				{
					DB_C_User* pUser = m_lstRank[i];
					if ( pUser == NULL )
					{
						continue;
					}

					bool bFind = false;
					for ( int j = 0; j < pDB_Gve->playerlist_size(); j++ )
					{
						if ( pDB_Gve->playerlist(j) == pUser->userid() )
						{
							bFind = true;
							break;
						}
					}
					if ( !bFind )
					{
						//δ�μӱ��λ
						continue;
					}

					DB_GVE_List* pDBList = pDB_Gve->add_nowlist();
					if ( pDBList == NULL )
					{
						continue;
					}

					pDBList->set_uid( toString(pUser->userid()) );
					pDBList->set_name( pUser->name() );
					pDBList->set_gvepoint( pUser->gvepoint() );
					pDBList->set_level( pUser->level() );
					pDBList->set_officerposition( pUser->position() );
					pDBList->set_viptype( pUser->viptype() );
					pDBList->set_viplevel( pUser->viplevel() );
					if ( pUser->gvepoint() > 0 )
					{
						nAllPoint += pUser->gvepoint();
					}
				}
				pDB_Gve->mutable_nowmsg()->set_point(nAllPoint);
			}

			m_ltLastGveRank = tNow;
		}
	}

	int GetRank(DB_C_User* pUser)
	{
		if ( pUser == NULL )
		{
			return -1;
		}

		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return -1;
		}

		bool bFind = false;
		for ( int j = 0; j < pDB_Gve->playerlist_size(); j++ )
		{
			if ( pDB_Gve->playerlist(j) == pUser->userid() )
			{
				bFind = true;
				break;
			}
		}
		if ( !bFind )
		{
			//δ�μӱ��λ
			return -1;
		}

		for ( int i = 0; i < m_lstRank.size(); i++ )
		{
			if ( pUser == m_lstRank[i])
			{
				return i+1;
			}
		}
		return -1;
	}

	int GetLastRank(DB_C_User* pUser)
	{
		DB_GVE_City* pDB_Gve = GetDBGve();
		if ( pDB_Gve == NULL )
		{
			return -1;
		}
		for ( int i = 0; i < pDB_Gve->lastlist_size(); i++ )
		{
			DB_GVE_List* pDBList = pDB_Gve->mutable_lastlist(i);
			if ( pDBList == NULL )
			{
				continue;
			}
			int64 nUid = 0;

			safe_atoll(pDBList->uid(),nUid);
			if ( pUser->userid() == nUid )
			{
				return i+1;
			}
		}
		return -1;
	}

	int GetNpcCnt()
	{
		DB_GVE_City* pDBCity = GetDBGve();

		if ( pDBCity == NULL )
		{
			return 0;
		}
		if ( m_nNpcCnt <= 0 )
		{
			int nCnt = 0;
			for(int i=0;i<(int)pDBCity->npc_size()&&nCnt<SEND_CITY_USER_CNT;i++)
			{
				DB_C_NPC* pUser = pDBCity->mutable_npc(i);
				if(pUser->npcid()<=0)
					continue;

				nCnt++;
			}
			m_nNpcCnt = nCnt;
		}
		return m_nNpcCnt;
	}

	int GetSpNpcCnt()
	{
		DB_GVE_City* pDBCity = GetDBGve();

		if ( pDBCity == NULL )
		{
			return 0;
		}
		return pDBCity->spnpc_size();
	}

	DB_C_GVG_Msg* GetDBGvgMsg()
	{
		if ( m_pDBGuild == NULL )
		{
			return NULL;
		}

		return m_pDBGuild->mutable_gvgmsg();
	}

	void FillGvgGuildData( RseGvgOpt* pRseOpt )
	{
		if ( pRseOpt == NULL )
		{
			return;
		}
		
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return;
		}

		pRseOpt->set_controlcityid( pDBGvgMsg->controlcity() );

		for ( int i = 0; i < pDBGvgMsg->signcity_size(); i++ )
		{
			pRseOpt->add_signcityid( pDBGvgMsg->signcity(i) );
		}

		GuildData* pData = pRseOpt->mutable_guilddata();
		if ( pData != NULL  )
		{
			pData->set_guildid( GetGuildID() );
			pData->set_guildname( GetGuildName() );
			pData->set_guildlv( GetGuildLV() );
			pData->set_guilduesrcnt( GetUserCnt() );

			DB_C_GVG_Msg* pDBGvgGuild = GetDBGvgMsg();
			if ( pDBGvgGuild != NULL )
			{
				pData->set_contribute(pDBGvgGuild->contribute());
			}
		}
	}


	bool CanGvgSign()
	{
		int nCnt = 0;
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return false;
		}

		if ( pDBGvgMsg->controlcity() != 0 )
		{
			nCnt++;
		}

		nCnt += pDBGvgMsg->signcity_size();

		if ( nCnt >= MAX_SIGN_CNT )
		{
			return false;
		}
		return true;
	}

	void GvgSign( int nCityID )
	{
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return;
		}

		pDBGvgMsg->add_signcity( nCityID );
	}

	void EnterCity( int64 uid, int nCityID, int nSession )
	{
		if ( uid <= 0 || nCityID <= 0 || nSession <= 0 )
		{
			return;
		}
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return;
		}

		DB_C_GvgBtlCityMsg* pEnterCityMsg = GetGvgBtlCity( nCityID, nSession );
		if ( pEnterCityMsg == NULL )
		{
			return;
		}

		bool bFind = false;
		for ( int j = 0; j < pEnterCityMsg->userway1_size(); j++ )
		{
			if ( pEnterCityMsg->userway1(j) == uid )
			{
				//�Ѿ��ڶ�����
				bFind = true;
				break;
			}
		}
		if ( !bFind )
		{
			bool bAdd = false;
			for ( int j = 0; j < pEnterCityMsg->userway1_size(); j++ )
			{
				if ( pEnterCityMsg->userway1(j) == 0 )
				{
					pEnterCityMsg->set_userway1(j,uid);
					bAdd = true;
					break;
				}
			}
			if ( !bAdd )
			{
				pEnterCityMsg->add_userway1(uid);
			}
		}


		for ( int i = 0; i < pDBGvgMsg->userway_size(); i++ )
		{
			DB_C_GvgBtlCityMsg* pCityMsg = pDBGvgMsg->mutable_userway(i);
			if ( pCityMsg == NULL )
			{
				continue;
			}

			if ( pCityMsg->session() != nSession )
			{
				continue;
			}

			if ( pCityMsg->cityid() == nCityID )
			{
				
			}

			else
			{
				LeaveCity( uid, pCityMsg->cityid(), nSession );
			}
		}
	}

	void LeaveCity( int64 uid, int nCityID, int nSession )
	{
		if ( uid <= 0 || nCityID <= 0 || nSession <= 0 )
		{
			return;
		}

		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return;
		}

		DB_C_GvgBtlCityMsg* pLeaveCityMsg = GetGvgBtlCity( nCityID, nSession );
		if ( pLeaveCityMsg == NULL )
		{
			return;
		}

		int nNum = -1;
		for ( int j = 0; j < pLeaveCityMsg->userway1_size(); j++ )
		{
			if ( pLeaveCityMsg->userway1(j) == uid )
			{
				nNum = j;
				break;
			}
		}

		if ( nNum < 0 )
		{
			return;
		}

		for ( int j = nNum; j < pLeaveCityMsg->userway1_size() - 1; j++)
		{
			pLeaveCityMsg->set_userway1( j, pLeaveCityMsg->userway1(j+1) );
		}
		pLeaveCityMsg->set_userway1( pLeaveCityMsg->userway1_size() - 1, 0 );
	}

	DB_C_GvgBtlCityMsg* GetGvgBtlCity( int nID, int nSession )
	{
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return NULL;
		}

		if ( nID <= 0 || nSession <= 0 )
		{
			return NULL;
		}

		for ( int i = 0; i < pDBGvgMsg->userway_size(); i++ )
		{
			DB_C_GvgBtlCityMsg* pCityMsg = pDBGvgMsg->mutable_userway(i);
			if ( pCityMsg == NULL )
			{
				continue;
			}

			if ( pCityMsg->cityid() == nID && pCityMsg->session() == nSession )
			{
				return pCityMsg;
			}
		}

		//û���ҵ�

		bool bCanGet = false;
		if ( nID == pDBGvgMsg->controlcity() )
		{
			bCanGet = true;
		}

		for ( int i = 0; i < pDBGvgMsg->signcity_size(); i++ )
		{
			if ( nID == pDBGvgMsg->signcity(i) )
			{
				bCanGet = true;
			}
		}

		if ( bCanGet )
		{
			DB_C_GvgBtlCityMsg* pCityMsg = pDBGvgMsg->add_userway();
			pCityMsg->set_cityid( nID );
			pCityMsg->set_session( nSession );
			return pCityMsg;
		}
		return NULL;
	}

	DB_C_GvgBtlAddProp* GetDBGvgAddProp( int64 uid, int nSession )
	{
		DB_C_GVG_Msg* pDBGvgMsg = GetDBGvgMsg();
		if ( pDBGvgMsg == NULL )
		{
			return NULL;
		}

		if ( uid <= 0 || nSession == 0 )
		{
			return NULL;
		}

		for ( int i = 0; i < pDBGvgMsg->addprop_size(); i++ )
		{
			DB_C_GvgBtlAddProp* pDBAddProp = pDBGvgMsg->mutable_addprop(i);
			if ( pDBAddProp == NULL )
			{
				continue;
			}

			if ( pDBAddProp->userid() == uid && pDBAddProp->session() == nSession )
			{
				return pDBAddProp;
			}
		}

		return NULL;
	}

	void FillGvgPlayerData( RseGvgOpt* pRseOpt, int nCityID, int nSession )
	{
		GvgFightTeam* pFightTeam = pRseOpt->add_gvgfightteam();
		pFightTeam->set_guildid( GetGuildID() );

		DB_C_GvgBtlCityMsg* pBtlCityMsg = GetGvgBtlCity( nCityID, nSession );
		if ( pBtlCityMsg == NULL )
		{
			return;
		}

		for ( int i = 0; i < pBtlCityMsg->userway1_size(); i++ )
		{
			if ( pBtlCityMsg->userway1(i) == 0 )
			{
				continue;
			}
			DB_C_GvgBtlAddProp* pAddProp = GetDBGvgAddProp( pBtlCityMsg->userway1(i), nSession );
			if ( pAddProp == NULL )
			{
				continue;
			}
			
			pFightTeam->add_username( pAddProp->name() );
			pFightTeam->add_userpic( pAddProp->pic() );
			pFightTeam->add_atkadd( pAddProp->addatkpct() );
			pFightTeam->add_hpadd( pAddProp->addbloodpct() );
			pFightTeam->add_streak( pAddProp->maxwintime() );
			string sUid = toString(pAddProp->userid());
			pFightTeam->add_userid( sUid );
			pFightTeam->add_isoffline(pAddProp->isoffline());
			
		}
	}


	int GetGvgPlayerCnt( DB_C_GvgBtlCityMsg* pCityMsg )
	{
		if ( pCityMsg == NULL )
		{
			return 0;
		}
		for ( int i = 0; i < pCityMsg->userway1_size(); i++ )
		{
			if ( pCityMsg->userway1(i) <= 0 )
			{
				return i;
			}
		}

		return pCityMsg->userway1_size();
	}

	bool GetGvgCity( int nID ); 
	void LeaveGvgCity( int nID ); 
	void CheckGvg( int nFlag = 0 );

	void CheckLeaguePoint( int nFlag = 0 );
	bool AddLeaguePoint( int nPoint );

    inline DB_C_GuildRedEnvelope *GetDBGuildRedEnvelope()
    {
        return m_pDBGuild->mutable_redenvelopeinfo();
    }
    int GetTotalRedEnvelopePoint()
    {
        DB_C_GuildRedEnvelope *pRedEnvelope = GetDBGuildRedEnvelope();
        if (pRedEnvelope == NULL)
        {
            return 0;
        }
        pRedEnvelope->ntotal();
    }

	int			m_nRegion;						//���������ID
	int			m_nOldRegion;					//����ǰ����ID
	int			m_nCountryGuildRank;			//������������
	int			m_nAllGuildRank;				//���й�������

	int			m_nCountryGuildPKRank;			//��������ս����
	int			m_nAllGuildPKRank;				//���й���ս����

	int			m_nCheckLogTM;
	string		m_strGuildName;					//��������

	DB_C_Guild*	m_pDBGuild;					//�������ݿ�ָ��	
	map<int64,DB_C_User*> m_mapGuildUser;		//��Ա�б�

	vector<DB_C_User*>  m_lstRank;

	time_t				m_ltLastGveRank;
	time_t				m_ltLastGveMsg;
	int			m_nPoint;
	int			m_nFlag;
	int			m_nNpcCnt;

	time_t				m_ltLastLeagueCount;
	time_t				m_ltLastSaveTime;
};

class CResourceData
{
public:
	CResourceData(int nRegionID)
		:m_nRegion(nRegionID)
	{
		Clear();
	}

	~CResourceData()
	{
		Clear();
	}

	void Clear()
	{
		m_pDBResourceData = NULL;
	}

	void SetDBResourceData( DB_C_ResourceData* pDBResourceData){ m_pDBResourceData = pDBResourceData; }
	DB_C_ResourceData* GetDBResourceData(){ return m_pDBResourceData; }

	DB_C_Resource* GetDBResource( int nID )
	{
		for ( int i = 0; i < m_pDBResourceData->resourselist_size(); i++ )
		{
			DB_C_Resource* pDBResource = m_pDBResourceData->mutable_resourselist(i);
			if ( pDBResource == NULL )
			{
				continue;
			}
			if ( pDBResource->id() == nID )
			{
				return pDBResource;
			}
		}
		return NULL;
	}

	int m_nRegion;
	DB_C_ResourceData* m_pDBResourceData;
};

class CResource
{
public:
	CResource( int nID )
	{
		Clear();
		m_nID = nID;
	}

	~CResource()
	{
		Clear();
	}

	void Clear()
	{
		m_nID = 0;
		m_sUid.clear();
		m_nEndTime = 0;
	}

	int GetEndTime(){ return m_nEndTime; }
	bool HasEnd(int nTime){ return nTime > m_nEndTime; }
	bool IsGetByUser( string sUid, int nTime )
	{
		if ( m_sUid.compare(sUid) != 0 )
		{
			return false;
		}

		if ( nTime > m_nEndTime )
		{
			return false;
		}
		return true;
	}

	bool IsEmpty( int nTime )
	{
		if ( nTime > m_nEndTime )
		{
			return true;
		}

		if ( m_sUid.size() == 0 )
		{
			return true;
		}

		return false;
	}

	void PlayerChange( string sUid, string sName, int nTime )
	{
		if ( m_pDBResource == NULL )
		{
			return;
		}
		PlayerLeave();

		m_sUid = sUid;
		m_sName = sName;
		m_nEndTime = nTime;

		SaveMsg();
	}

	void PlayerLeave()
	{
		if ( m_pDBResource == NULL )
		{
			return;
		}
		m_sUid.clear();
		m_sName.clear();
		m_nEndTime = 0;

		m_pDBResource->clear_admiralid();
		m_pDBResource->clear_admiraltrainlv();
		m_pDBResource->clear_pow();
		SaveMsg();
	}

	void SaveMsg()
	{
		if ( m_pDBResource == NULL )
		{
			return;
		}
		m_pDBResource->set_uid(m_sUid);
		m_pDBResource->set_name(m_sName);
		m_pDBResource->set_endtime(m_nEndTime);
	}

	DB_C_Resource* m_pDBResource;
	int m_nID;
	string m_sUid;
	string m_sName;
	int m_nEndTime;
};

//������ϰ
class CWarGameAdmiral
{
public:
    CWarGameAdmiral(int nAdmID = 0, int nAdmLv = 0, int nAdmTraiLv = 0)
    {
        m_nAdmID = nAdmID;
        m_nAdmLv = nAdmLv;
        m_nAdmTrainLv = nAdmTraiLv;
    }
    ~CWarGameAdmiral()
    {
        //
    }
    int m_nAdmID;
    int m_nAdmLv;
    int m_nAdmTrainLv;
};

class CWarGameSite
{
public:
    CWarGameSite(DB_C_WarGameSite *pDBSite);
    ~CWarGameSite();

    bool ChangeOccupant(string strUid, string strName, int nCountryID, int nStartTime, int nEndTime, int nPower, const vector<CWarGameAdmiral>& vecAdmiral);

    bool IsOccupy();

    bool IsOccupyByUser(string strUid);

    bool GetOccupantInfo(string &strUid, string &strName, int &nCountryID);

    bool OccupantLeave();

    void FillSiteInfo(WarGameSiteInfo *pSiteInfo, int &tNow);

    bool IsSiteOnProtect();

    bool IsSiteOnTruce();

    //��ȡ��Ϣ
    int GetSiteLv();
    int GetSiteID();
    int GetStartTime();
    int GetEndTime();
    string GetUid();
    int GetDelayNum();
    string GetName();
    int GetTruceStartTime();
    int GetTruceEndTime();
    bool OccupantDelay();

    void UpdateUid(string strUID);
    void UpdateStartTime(int nStarTime);
    void UpdateEndTime(int nEndTime);
    void UpdateName(string strName);
    void UpdateCountry(int nCountryID);
    void UpdatePower(int nPower);
    void UpdateAdmiralInfo(const vector<CWarGameAdmiral>& vecAdmiral);

    void AddTruceTime();

private:
    DB_C_WarGameSite * m_pDBSiteInfo;
};

class CWarGameData
{
public:
    CWarGameData();
    ~CWarGameData();

    CWarGameSite *GetWarGameSiteByID(int nID);

    CWarGameSite *GetWarGameSiteByUid(string strUid);

    DB_C_WarGameData * GetDBWarGameData();

    bool          InitByDBData(DB_C_WarGameData *pWarGameData, bool &bNeedBrushDB);

    void          FillAllWarGameSiteInfo(RseWarGameOpt *pRse);

private:

    DB_C_WarGameData                * m_pDBWarGameData;
    map<int, CWarGameSite *>        m_mapSiteList;
};

class CGvgCity
{
public:
	CGvgCity()
	{	
		Clear();
	}
	~CGvgCity()
	{
		Clear();
	}

	void Clear()
	{
		m_nCountryID = 0;
		m_strGuildName.clear();
		m_lstSignGuild.clear();
		m_mapGuildContribute.clear();
		m_nLastRoundtime = 0;
	}

	void SetDBGvgCityData( DB_C_GvgCity* pDBGvgCity ){ m_pDBGvgCity = pDBGvgCity; }
	DB_C_GvgCity* GetDBGvgCity(){ return m_pDBGvgCity; }
	int GetKey()
	{
		if ( m_pDBGvgCity == NULL )
		{
			return 0; 
		}
		return (m_pDBGvgCity->region()*MAX_CITY_ID+m_pDBGvgCity->cityid());
	}

	void SetGvgCityPoint( int nPoint )
	{
		if ( m_pDBGvgCity == NULL )
		{
			return;
		}

		if ( nPoint < 0 )
		{
			return;
		}

		m_pDBGvgCity->set_citypoint( nPoint );
	}

	void AddGvgCityPoint( int nPoint )
	{
		if ( m_pDBGvgCity == NULL )
		{
			return;
		}

		m_pDBGvgCity->set_citypoint( m_pDBGvgCity->citypoint() + nPoint );

		if ( m_pDBGvgCity->citypoint() < 0 )
		{
			m_pDBGvgCity->set_citypoint( 0 );
		}
	}

	void SetGvgCityGuildMsg( CGuild* pGuild )
	{
		if ( pGuild == NULL )
		{
			return;
		}
		m_strGuildName = pGuild->GetGuildName();
		m_nCountryID = pGuild->GetCountry();
	}

	void ClearGuildMsg()
	{
		m_strGuildName.clear();
		m_nCountryID = 0;
	}

	void ClearCity()
	{
		m_pDBGvgCity->set_guildid( 0 );
		m_strGuildName.clear();
		m_nCountryID = 0;
	}

	void GetFightGuild( int nSession, int& nGuild1, int& nGuild2 )
	{
		if ( m_pDBGvgCity == NULL )
		{
			return;
		}
		if ( nSession <= 0 || nSession > MAX_FIGHT_TIME )
		{
			return;
		}

		for ( int i = 0; i < m_pDBGvgCity->gvgbtl_size(); i++ )
		{
			DB_C_GvgBtlRet* pDBRet = m_pDBGvgCity->mutable_gvgbtl(i);
			if ( pDBRet->session() == nSession )
			{
				nGuild1 = pDBRet->guildid1();
				nGuild2 = pDBRet->guildid2();
				return;
			}
		}
	}

	bool CanPushFight( int nTime ){ return nTime - m_nLastRoundtime >= MIN_GVG_FIGHT_TIME; }

	DB_C_GvgBtlRet* GetDBRet( int nSession )
	{
		if ( m_pDBGvgCity == NULL )
		{
			return NULL;
		}

		for ( int i = 0; i < m_pDBGvgCity->gvgbtl_size(); i++ )
		{
			DB_C_GvgBtlRet* pDBRet = m_pDBGvgCity->mutable_gvgbtl(i);
			if ( pDBRet->session() == nSession )
			{
				return pDBRet;
			}
		}
		return NULL;
	}

	void SortGvg();

	int		m_nCityID;
	DB_C_GvgCity* m_pDBGvgCity;
	vector<CGuild*> m_lstSignGuild;
	string	m_strGuildName;
	int		m_nCountryID;
	map<int,int> m_mapGuildContribute;
	int		m_nLastRoundtime;


	list<int64>  m_lstAtkUser;
	list<int64>  m_lstDefUser;
};

class LeagueMsg;
class CCountryLeague
{
public:
	CCountryLeague( int nID, DB_C_CountryLeagueMsg* pDBCountryLeague )
	{
		Clear();
		m_nID = nID;
		m_pDBCountryLeague = pDBCountryLeague;
	}

	~CCountryLeague()
	{
		Clear();
	}

	void Clear()
	{
		m_nID = 0;
	}

	void ClearAllMsg()
	{
		m_pDBCountryLeague->set_leagueid(m_nID);
		m_pDBCountryLeague->clear_guildlist();
		m_pDBCountryLeague->clear_guildlastlist();
		m_pDBCountryLeague->clear_playerranklastlist();

		for ( int i = 0; i < m_pDBCountryLeague->playerranklist_size(); i++ )
		{
			DB_C_LeaguePlayerUnit* pDBUnit = m_pDBCountryLeague->add_playerranklastlist();
			if ( pDBUnit != NULL )
			{
				pDBUnit->CopyFrom( m_pDBCountryLeague->playerranklist(i) );
			}
		}
		m_pDBCountryLeague->clear_playerranklist();
		
		m_pDBCountryLeague->clear_lastcountryid();
		for ( int i = 0; i < m_pDBCountryLeague->countryid_size(); i++ )
		{	
			m_pDBCountryLeague->add_lastcountryid(m_pDBCountryLeague->countryid(i));
		}
		m_pDBCountryLeague->clear_countryid();
		m_pDBCountryLeague->clear_boomrecord();
		m_lstGuildRank.clear();
		m_lstUserRank.clear();
	}

	void CheckLeagueMsg();
	void SortPlayer( CountryRgnDatHandler* pRDH );
	void SortGuild();
	int GetPlayerRank( DB_C_User* pUser );
	int GetGuildRank( CGuild* pGuild );
	void FillRankList( LeagueMsg* pLeagueMsg, LeagueRewardType rankType, int nCnt = 0 );
	void FillLastRankList( LeagueMsg* pLeagueMsg, LeagueRewardType rankType, int nCnt = 0 );
	::google::protobuf::RepeatedField< ::google::protobuf::int32 >* GetLeagueCountry();

	int m_nID;
	DB_C_CountryLeagueMsg* m_pDBCountryLeague;
	vector<CGuild*>		m_lstGuildRank;
	vector<DB_C_User*>	m_lstUserRank;
};

class CountryEventHandler;
class CGuildRedEnvelope
{
public:
    CGuildRedEnvelope();

    ~CGuildRedEnvelope();

    void SetCountryRgnData(CountryRgnDatHandler *pRgn);

    void Clear();

    inline int GetFlag(){return m_nActFlag;}

    void SetFlag(int nFlag){m_nActFlag = nFlag;}

    void AddUser(DB_C_User* pUser);

    void AddGuildRedEnvelopeInfo(CGuild *pGuild);

    DB_C_User * GetUserInfo(int64 lUid);

    CGuild * GetGuildInfo(int nGuildID);

    void RemoveGuild(CGuild *pGuild);

    void SortGuildRank();

    void SortUserRank();

    void SortSendUserRank();

    void SnappeRedEnvelope(RseGuildRedEnvelopeOpt *pRse, int64 lUid, int nGuildID, int nRedEnvelopeID, CountryEventHandler *pEH);

    int AddRedEnvelope(int64 lUid, int nType, int nTotalCredit, int nCopiesNum, RseGuildRedEnvelopeOpt *pRse);

    void AddRedEnvelopeRecord(int nID, int nGuildID, string strName, string strGuild, int tTime, int nAdjType);

    //���ع�����
    void FillGuildRedEnvelopeInfo(RseGuildRedEnvelopeOpt *pRse, int64 lUid);

    //ָ���������Ϣ
    void FillRedEnveLopeInfo(RseGuildRedEnvelopeOpt *pRse, int64 lUid, int nGuildID, int nRedEnvelopeID);

    //��պ����Ϣ
    void ClearAllRedEnveLopreInfo(CountryEventHandler* eh_, bool bClear = false);

    void FillRankInfo(RseGuildRedEnvelopeOpt *pRse);

    int m_nActFlag;

    CountryRgnDatHandler *m_pRgnData;
    std::list<RedEnvelopeRankInfo>        m_lstRedGuildRank;
    std::list<RedEnvelopeRankInfo>        m_lstRedUserRank;
    std::list<RedEnvelopeRankInfo>        m_lstRedSendUserRank;

    multimap<int, RedEnvelopeReport>   m_lstRegionBriefInfo;

    map<int64, DB_C_User*> m_mapAllUser;
    map<int, CGuild*> m_mapAllGuild;
};

class LeftRewardKey
{
private:
	vector<int>		vecLeft;  //�տ�ʼû�г齱���룬ÿ��������ʱ��һ��ֵ���Ժ��ȡ��ʱ�����0-nFlag�г�ȡ
	int				nMaxFlag;//��ǣ�ÿ�γ�ȡ��ʱ�򶼰ѳ�ȡ������ֵ��vecLeft[nMaxFlag]����
public:
	int				nFlag;		//��Ʒ���ı��
public:
	LeftRewardKey()
	{
		vecLeft.clear();
		nMaxFlag = 0;
		nFlag = 0;
	}
	void Init(vector<int> vec)
	{
		if(vec.size()<=0)
			return ;

		vecLeft.clear();
		for(int i=0; i<vec.size(); i++)
		{
			vecLeft.push_back(vec[i]);
		}

		nMaxFlag = vecLeft.size()-1;
	}
	int GetRandkey()
	{
		int nRandKeyIndex = RandGen::GetRand(0,nMaxFlag);
		int nRandKey = vecLeft[nRandKeyIndex];
		//�����ȡ��ֵ��ɾ�������Ǻ�����ֵΪnMaxFlag��ֵ����λ�ã�Ȼ��nMaxFlag-1��
		swap(vecLeft[nRandKeyIndex],vecLeft[nMaxFlag]);
		nMaxFlag--;

		return nRandKey;
	}

	bool isEmpty(){return nMaxFlag==0;}
};

class GCG_GuildOpt;
class GCG_CountryOpt;
class RseGuildOpt;
class CityBloodBattle;
class RseCountryUserLst;
class GuildData;
class CountryDataHandler;
class CountryEventHandler;
class GuildBtlRetTotal;
class RseBossOpt;
class DB_C_BossBtlRankUnit;
class BossBattlePlayerUnit;
class GCG_BossBtlLite;
class GCG_BossBtlLiteUnit;

class CountryRgnDatHandler 
{//���ҷ���������Ϣ
	static const int WAY_CITY_CNT = 100;	//����Ѱ·�ĳ�������

public:
	CountryRgnDatHandler(CountryDataHandler* pDH,int nRegion);
	~CountryRgnDatHandler();
public:
	void InitCountry();			//��ʼ��������Ϣ
	bool LoadAllCountryInfo(int nCombineRegionFlag);	//�������й�����Ϣ,����ֵΪ�Ƿ���кϷ�����
	void LoadAllCityInfo(bool bCombineRegionOpt = false);	
	void LoadAllUserInfo(bool bCombineRegionOpt = false);
	void LoadAllGuildInfo(bool bCombineRegionOpt = false);
	void LoadAllResourceInfo(bool bCombineRegionOpt = false);
	void LoadAllGvgCity(bool bCombineRegionOpt = false);
    void LoadAllWarGameInfo(bool bCombineRegionOpt = false);
	void LoadBossBtlMsg(bool bCombineRegionOpt = false);

	void Clear();
	int GetRegion(){return m_nRegion;}

	void markUserLstDirty(int64 nUserID);
	void markUserLstDirty(DB_C_UserList* pDBUserLst);
	void markGuildLstDirty(CGuild* pGuild);
	void markCityDirty(CCity* pCity);
	void markCountryDirty(CCountry* pCountry);
	void markResourceInfoDirty();
	void markGvgCityDirty(CGvgCity* pCity);
    void markWarGameDataDirty();
	void markBossBtlInfoDirty();

	//�Ϸ����
	void DealCombineRegion_Country();

public:
	CCountry*	GetCountry(int nCountryID);
	CCity*		GetCity(int nCityID);
	CCountry*	GetEarthCountry(){return &m_earthCountry;}	//���ڱ������й��ҵĹ�������
	
	int			GetCityKey(int nCityID){return (m_nRegion*MAX_CITY_ID + nCityID);}
	int			GetUserKey(int64 nUserID){return (m_nRegion*MAX_CITY_ID + (nUserID)%MAX_COUNTRYUSER_IDX);}
	DB_C_User*  GetDBCityUser(int64 nUserID);
	DB_C_UserList* GetDBUserLst(int64 nUserID);
		
	bool		IsValidCountry(int nCountryID)	//�Ƿ�Ϊ��Ч����ID
	{
		return ((nCountryID>=C_Start&&nCountryID<C_UserCoutryEnd)||(nCountryID>=C_NPCStart&&nCountryID<C_NPCEnd));
	}
	int			GetCountryLastDayRank(int nCountryID);	//��ù���ǰһ������
	void		ResetDayCountryRank();	//��һ�쿪ʼ�����¼������а�
public:
	//�������
	void		CheckGuild();
	int			GetGuildKey(int nGuildID,int nOldRegion){return (nOldRegion*MAX_CITY_ID + nGuildID%MAX_COUNTRYGUILD_IDX);}
	CGuild*		GetGuild(int nGuildID);
	DB_C_GuildList* GetDBGuildLst(int nGuildID,int nOldRegion);
	CGuild*		AllocEmptyGuild(int nCountryID);	//�����¹���
	bool		CanGuildNameUse(string strName){return (m_mapGuildName.find(strName)==m_mapGuildName.end());}
	void		AddGuildName(string strName){m_mapGuildName[strName]=1;}
	int			GetGuildCnt(int nCountryID=0);
	void		SortGuild();
	bool		CheckGuildShopRecord(CGuild* pGuild);	
	void		DismissGuild(CGuild* pGuild);		//�����ɢ
	//������־
	void		ResetGuildLog(CGuild* pGuild);
	DB_C_GuildLog* AddGuildLog(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName);
	void		AddGuildLog_Pos(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName,int nPos);
	void		AddGuildLog_Bld(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName,int nBldID,int nBldLV);
	void		AddGuildLog_Pay(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName,int nPayType,int nGScore);
	void		AddGuildLog_Storage(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName,int nItemID,int nItemCnt);
	void		AddGuildLog_BtlRankReward(CGuild* pGuild,GuildLogType emType,int nItemID,int nItemCnt,int nBldValue,int nRank,int nCountryRank);
	void		AddGuildLog_BtlRank(CGuild* pGuild,GuildLogType emType,int nRank);
	void		AddGuildLog_GvgReward(CGuild* pGuild,GuildLogType emType,int64 nUserID,string strName,int nPos);
public:
	void		CheckUserInfo(int64 nUserID,CCountry* pCountry,int nSelfCity,int& nRightCity,bool& bNeedSave);
	int			UserSelCountry(DB_C_User* pDBCUser,int nCountry,int& nUserCnt);
	void		UserLeaveCountry(DB_C_User* pDBCUser,int nCountry,int nCity);
	bool		UserEnterCity(DB_C_User* pDBCUser,int nCityID);					//��Ҽ������
	bool		UserChgCity(DB_C_User* pDBCUser,int nOldCityID,int nNewCityID);	
	bool		CityChgCountry(int64 nUserID,CCity* pCity,int nNewCountry);

	int			UserAddArena(CCountry* pCountry,DB_C_User* pCUser);
	int			UserLeaveArena(CCountry* pCountry,DB_C_User* pCUser,int nChgNpcId);
	int			GetArenaPlayerNum();
	void		CheckClearCountryArenaData();
public:
	//��Ա���
	void        ClearCountryOfficer(CCountry* pCountry,E_Officer_Type nType);
	void        UpdateOfficerPosition(DB_C_User* pDBCUser,int nIndex,int nCountryID,E_Officer_Type nType,CGuild* pGuild=NULL);
	void        SetCountryOfficerPosition(DB_C_User* pDBCUser,CCountry* pCountry,int nPosition,E_Officer_Type nType);
	void        ClearUserOfficerPosition(DB_C_User* pDBCUser,E_Officer_Type nType);
	bool        ClearUserCityOfficerRight(DB_C_User* pDBCUser,CCountry* pCountry);
	bool        AddOfficerRightUsed(CCity* pCity,RightInfo* pRightInfo);
	void        FillOfficerRightUsed(DB_C_City* pDBCity,CityRightInfo* pInfo);
	void        FillCountrOfficerInfo(CCountry* pCountry,CoutryOfficer* pCountryOfficer,E_Officer_Fill_Type fillType = E_Officer_Fill_ALL);
	void        SetCountryUserUpdateFlag(int64 uid,bool bFlag = true);
	bool        CheckCountryUserUpdateFlag(CountryEventHandler* eh_);
	int         CreateOfficerPosition(int nIndex,int nCountryID,E_Officer_Type nType);
private:
	void		ClearPlayerArenaIndex(bool bSaveLast = true);
	void		ClearCountryArenaData();

public:
	void FillUserIDLst(CCity* pCity,int nPage,GCG_CountryOpt* pRetData,bool bFillAll=false,RseCountryUserLst* pRseUserLst = NULL);	//�������б�
	void FillNPCLst(CCity* pCity,int nPage,RseCountryUserLst* pSendLst);	//�������б�
	int CheckHasWay(int64 nUserID,CCity* pOldCity,CCity* pNewCity,int& nNeedThew);
	DB_C_User* AllocDBUser(int64 nUserID);
	void AddDbUserToCountry(DB_C_User* pUser);
	void UpdateCountryArenaList(int nCountry,DB_Arena_Rank* pArenaR,vector<int64>& rVecUid);


	//Ѫս���
	
	void ClearUnuseBloodBtl();
	bool HasLaunchBloodBtl(int nCountryID);					//�ж�һ�������Ƿ����ڽ���Ѫս
	DB_C_BloodBtl* GetLastDBBloodBtl(int nCityID);			//�������������һ��Ѫս��Ϣ
	DB_C_BloodBtl* GetDBBloodBtl(CCity* pCity,bool bCreateIfNotExit=false);
	void FillBloodBtl(const DB_C_BloodBtl* pDBBtl,CityBloodBattle* pInfo,bool bFillStep);
	map<int,DB_C_BloodBtl*>& GetBloobBtlLst(){return m_mapCurBloodBtl;}
	DB_C_CityBuffData* GetCityBuffData(){return m_earthCountry.GetCityBuffData();}
	bool OnBuffCityChangeCountry(int nCityId);
	void SetBloodBtlCacuTime(int nCity);
	int GetBloodBtlCacuTime(int nCity);
	int GetBloodBtlStep(int nCity);	//�Ƿ����ڵȴ�����
	void SetBloodBtlStep(int nCity,CountryBloodBtlStepType emStep);
	//�Զ�Ѫս���
	bool HasLaunchAutoBloodBtl(){return m_bHasLaunchAutoBloodBtl;}
	void SetHasLaunchAutoBloodBtl(bool bLaunch){m_bHasLaunchAutoBloodBtl = bLaunch;}
public:
	//�������
	void CheckGuildBtlData();
    //���ù���ս����
    void ResetGuildPKScore(int nScore);

	void GuildStat(CountryEventHandler* eh_);			//����ͳ�ƣ�ÿСʱһ��
	void CheckGuildRankSort();	//����������ÿСʱ��һ��
	void FillRandGuildLst(RseGuildOpt* pRseOpt,GCG_GuildOpt* pSrvOpt,int nCountry);
	void FillGuildLst(RseGuildOpt* pRseOpt,int nCountry,int nPage);
	void FillPKGuildLst(RseGuildOpt* pRseOpt,int nCountry,int nPage);
	void FillGuildData(CGuild* pGuild,GuildData* pGData,bool bNormalRank=true);
private:
	void _FindWay(int nInitCityID,int nFromCityID,int nTarCityID,int nCountryID,map<int,int>& mapWay,map<int,int>& mapValue,int& nMinValue);
	void _UpdateArenaUserList(DB_C_User* pUser,vector<DB_Arena_Node>& rUserVec,bool& bRankErr);
	void _UpdateArenaNpcList(DB_Arena_Rank_NPC* pNpc,vector<DB_Arena_Node>& rUserVec);
public:
	//����ս���
	bool CheckNewDayGuildPK(int nYearDay,CGuild* pGuild);
	void AddPKGuild(CGuild* pGuild);
	
	void PushGuildBtlRecord(CCountry* pCountry,int nSession);	//��ӹ���ս��ʷ������¼
	DB_C_GuildBtl_Record* GetGuildBtlRecord(CCountry* pCountry,int nSession);		//��ù���ս��ʷ������¼

	void SetTurnsAddScore(int nTurns,bool bAdd);
	bool HasTurnsAddScore(int nTurns);
	void SetCurTurnsPKOver(int nTurns,bool bOver);			//��ǰ���μ����Ƿ����
	bool IsCurTurnsPKOver(int nTurns);
	void SetGuildBtlSetp(GuildBtlStepType emStep);	//����ս�׶�
	GuildBtlStepType GetGuildBtlStep();
	void		BalanceGuildBtlTurns(int nTurns,CountryEventHandler* eh);

	int			GetGuildPKTurns();
	void		SortPKGuild();
	void		MatchGuildBtlGroup(int nTurns,bool bSortByScore);
	bool		GetMatchGuild(CGuild** ppGuild1,CGuild** ppGuild2,int nTurns,int& nSize);
	DB_C_GuildBtlResult* GetDBGuildBtlResult(CGuild* pGuild,int nTurns);
	DB_C_GuildBtlReward_Turns* GetDBGuildRewardTurns(CGuild* pGuild,int nTurns);
	DB_C_GuildBtl* GetDBGuildBtl(CGuild* pGuild);
	void		CacuGuildBtlScore(CGuild* pGuild,int nTurns);	//���㹤��ս�÷�
	bool FillGuildBtlRetTotal(int64 nUserID,CGuild* pGuild,GuildBtlRetTotal* pRseTotal);
	void		AddGuildBtlReward(CGuild* pGuild,int nRank);	//���ӹ���ս���ս���
//���羺����
public:
	void		UpdateWorldArenaData();
	void        UpdateWorldArenaList(DB_WorldArena_Rank* pArenaR,vector<int64>& rVecUid);

private:
	void		ClearWorldArenaIndex(bool bSaveLast = true);
	void		ClearWorldArenaData();
	void        _UpdateWorldArenaUserList(DB_C_User* pUser,vector<DB_Arena_Node>& rUserVec,vector<DB_Arena_Node>& rErrVec);
	void        _UpdateWorldArenaErrUserList(DB_C_User* pUser,vector<DB_Arena_Node>& rUserVec);
	void        _UpdateWorldArenaNpcList(DB_Arena_Rank_NPC* pNpc,vector<DB_Arena_Node>& rUserVec);
//Ӣ�۾�����
public:
	void		UpdateHeroArenaData();
	void        UpdateHeroArenaList(DB_HeroArena_Rank* pArenaR,vector<int64>& rVecUid);

private:
	void		ClearHeroArenaIndex(bool bSaveLast = true);
	void		ClearHeroArenaData();
	void        _UpdateHeroArenaUserList(DB_C_User* pUser,vector<DB_Arena_Node>& rUserVec,vector<DB_Arena_Node>& rErrVec);
	void        _UpdateHeroArenaErrUserList(DB_C_User* pUser,vector<DB_Arena_Node>& rUserVec);
	void        _UpdateHeroArenaNpcList(DB_Arena_Rank_NPC* pNpc,vector<DB_Arena_Node>& rUserVec);
private:
	void ResetEmptyGuildIDLst();	//�ؽ��������ID�б�

public:
	//GVE
	void ResetGveGuildRank();
	void CheckGveRank();
	void CheckGuildGveMsg(CGuild* pGuild);
	int  GetRank(CGuild* pGuild);
	int  GetLastRank(CGuild* pGuild);
	int  GetHighestRank(CGuild* pGuild);
	int	 GetOverCnt(CGuild* pGuild);

	int  GetLastRankNew(CGuild* pGuild);
	int  GetHighestRankNew(CGuild* pGuild);

	void SetFirstDown( CGuild* pGuild, int nStep );
	void ResetFirstDown( int nFlag );
	void FillFirstDownMsg(RseGuildOpt* pRseOpt);

public:
	//��Դ��
	CResourceData* GetCResourceData(){ return &m_ResourceData; }
	CResource* GetCResource( int nID );
	CResource* GetRandCResource( int nType );
	CResource* GetCResourceByNum( int nNum, int nType = 1 );

public:
	CGvgCity*		GetGvgCity( int nCityID );
	void			CheckGvg();
	void			CheckAllGvgCity( int nFlag );
	void			FillGvgAllCityData( RseGvgOpt* pRseOpt );
	void			FillGvgCityData( RseGvgOpt* pRseOpt, int nCityID, GCG_GuildOpt* pOpt = NULL, int nGuildID = 0 );
	void			FillGvgBtlData( RseGvgOpt* pRseOpt, int nCityID, int nSession );
	void			CheckGvgRank( CGvgCity* pCity, GvgBtlStepType gvgStep = GvgBtlType_UnKnow);
	void			CheckFightGuild( CGvgCity* pCity, GvgBtlStepType gvgStep );
	void			FillGvgRank( RseGvgOpt* pRseOpt, CGvgCity* pCity );
	void			SortGvg();
	bool			CheckCanEnterCity( CGvgCity* pCity, CGuild* pGuild, int nSession );
	void			FillGvgPlayerData( RseGvgOpt* pRseOpt, int nCityID, int nSession );
	void			SetPlayerProp( CGuild* pGuild, int64 uid, GCG_GuildOpt* pOpt );
	DB_C_GvgBtlRet*	GetGvgFightCity( int nSession );
	DB_C_GvgBtlRet*	GetGvgFightCityByID( int nSession, int nCity );
	void			CheckFightRet( DB_C_GvgBtlRet* pDBRet );
	void			GetGvgFightUid( CGvgCity* pCity, GCG_GuildOpt* pOpt, bool bAtk );
	bool			CheckCanOffLineEnterCity( CGvgCity* pCity, CGuild* pGuild );

	DB_C_PubGvgBtlInfo* GetGvgEarthInfo();
	void GvgStat(CountryEventHandler* eh_);

public:
	//������������
	void			CheckWpcRank(CountryEventHandler* eh_);
	DB_C_WpcRank*		GetDBWpcRank();
	void			SortWpcRank();
	void			SetWpcFightPoint( string uid, int nFightPoint );
	int				GetWpcFightPoint( string uid );
	void			FillWpcRank( RseWPCBaseOpen* pRseRet );
	void			CheckWpcMsg( DB_C_User* pDBCUser );
	int				GetWpcRankRight( DB_C_User* pDBCUser );
	void			FillWpcRankChampion( RseWPCBaseOpen* pRseRet );
	void			LoadWpcRankUser(bool bCombineRegionOpt = false);
	string			GetChampoinUid();
	bool			IsChampion( int64 uid );

public:
		//���·�� ���������
		void		CheckWpcLabSearchRank();
		void		SortWpcLabSearchRank();
		void		FillWpcLabSearchRank(RseArmRace*pRse);
		int			GetSelfLabSearchRank(int64 userID);
		
public:
    //������ϰ
    CWarGameSite* GetWarGameSite(int nSiteID);
    CWarGameSite* GetWarGameSiteByUid(string strUid);
    void          FillAllWarGameSiteInfo(RseWarGameOpt *pRse);

public:
	//ͬ��ս
	DB_C_CountryLeagueMsg*	GetDBCountryLeague( int leagueID );
	CCountryLeague*	GetCountryLeague( int leagueID );
	CCountryLeague*	GetCountryLeague( DB_C_User* pDBCUser );
	CCountryLeague*	GetCountryLeague( CGuild* pGuild );
	void			LoadLeagueBattle(bool bCombineRegionOpt = false);
	void			CheckLeagueBattle(CountryEventHandler* eh_);
	void			CheckCityBuffActive(CountryEventHandler* eh_);
	void			FillCityBuffInfo(RseCityBuffInfo* rse);
	int				GetLeagueID( int nCountryID );
	void			CheckLeagueMsg( DB_C_User* pDBCUser );
	void			CheckLeagueMsg( CGuild* pGuild );
	bool			CheckSameLeague(DB_C_User* pDBCUser1,DB_C_User* pDBCUser2);
	bool			CheckSameLeague(DB_C_User* pDBCUser1,CCity* pCity);
	void			CheckNpcActiveRank();
	void			SortNpcActiveRank(time_t);

public:
	//BOSSս
	void			CheckBossBtlMsg( CountryEventHandler* eh_, int nRegion, time_t ltNow = 0 );
    void            ChangeBossInfo(int nBossID, int nRegion);
    void            ClearAllRankList(DB_C_BossBtlMsg* pDBBossMsg);
    void            ExtractLuckPlayer(DB_C_BossBtlMsg* pDBBossMsg);
    void            UpdateHighPointList(DB_C_BossBtlMsg* pDBBossMsg);
	DB_C_BossInfo*	GetDBBossInfo( int nId );
	DB_C_BossMsg*	GetDBBossMsg();
	void          FillBossBtlMsg(RseBossOpt *pRse);
	void          FillBossBtlFightMsg(RseBossOpt *pRse);
	void		  FillBossBtlRankList(RseBossOpt *pRse,int nCnt = 100,int nType = BOT_SeeRank);
	void		  FillBossBtlPlayerMsg( BossBattlePlayerUnit* pUnit, DB_C_BossBtlRankUnit* pRankUnit );
	int			  GetBossBtlRank( int64 uid, int nType = BOT_SeeRank );

	void		  CheckBossBtlDmg( DB_C_User* pDBCUser );

	void		  BossBtlPlayerUp( int nRank, DB_C_User* pUser, DB_C_BossBtlRankUnit* pDBUnit);//����
	void		  SortBossBtl();
	DB_C_BossBtlMsg* GetBossBtlMsg(){ return m_pDBBossBtlMsg; };

	void		  FillBossBtlLite( GCG_BossBtlLite* pLite );
	void		  AddBossBtlRecord( DB_C_User* pUser, int64 nDmg, int64 nLeft, bool bKill ,int nPerHp = 0);
	void		  SaveUnit( DB_C_BossBtlRankUnit* pRankUnit, DB_C_User* pUser);

	void		  CheckUpRank();

public:
    void CheckRedEnvelopeInfo(CountryEventHandler* eh_);

    CGuildRedEnvelope * GetGuildRedEnvelope(){return &m_GuildRedEnvelope;}
//һԪ���
public:
	void					GetRewardKey(int64 userid, int nFlag, vector<int>& vecNewkey);
	void					InitOneYuanPurchaseData();
	DB_C_User*				GetWinner(int nFlag, int nRewardKey);
	void					CheckClearOneYuanPurchaseData();
	//��ȡÿ�����������
	int						GetParticitionCntByFlag(int nFlag);
	string					IntTo4String(int nValue);  //ת����4λ���ַ������������0����߲���
	DB_One_Yuan*			GetOneYuanDataByFlag(DB_C_User*pUser, int nFlag);
	LeftRewardKey*			GetLeftRewardKey(int nFlag)
	{
		for(int i=0; i<m_vecLeftRewardKey.size();i++)
		{
			if(m_vecLeftRewardKey[i]->nFlag==nFlag)
				return m_vecLeftRewardKey[i];
		}

		return NULL;
	}

	DB_C_UserList* GetMainUserList(){return m_pMainUserList;}

private:
	CountryDataHandler* m_pDH;
	int					m_nRegion;
	CCountry			m_earthCountry;		//���磬�������й��ҵĹ������ݣ�����idΪ0
	map<int,CCountry*>	m_mapCountry;		//�����б�
	map<int, CCity*>	m_mapCity;			//�����б�

	map<int,DB_C_UserList*> m_mapUserLst;	//��������б����ڴ洢
	hash_map<int64,DB_C_User*> m_mapUser;	//����б�ֻ�м�������Ϣ�������ָ��Ϊ���ݿ�����ָ�룬����ɾ����������
	vector<DB_C_User*>	m_vecCountryUser[C_UserCoutryEnd];	//��������б�

	//�������
	time_t				m_ltLastRank;
	time_t				m_ltLastStat;
	list<int>			m_lstEmptyGuildID;	//���ù���ID�����������������ID
	map<int,CGuild*>	m_mapGuild;			//�����б�
	map<string,bool>	m_mapGuildName;		//�������ƣ����ڹ�����Ψһ
	vector<CGuild*>		m_lstGuild[C_UserCoutryEnd];	//��Ӧÿ�����ҵĹ����б����ڸ����չʾ,0Ϊ���й����б�
	list<CGuild*>		m_lstEmptyGuild[C_UserCoutryEnd];	//���õĹ��ᣬ���ڽ�ɢ����Ļ���
	map<int,DB_C_GuildList*> m_mapGuildLst;	//�����б����ڴ洢

	//Ѫս���
	map<int,int>		m_mapBloodBtlStep;	//Ѫս�׶�
	map<int,int>		m_mapBloodBtlCacuTime; //Ѫս����ʱ��
	map<int,DB_C_BloodBtl*>	m_mapCurBloodBtl;	//��������Ѫս��ָ��ָ�����ݿ⣬����ɾ��
	bool				m_bHasLaunchAutoBloodBtl;	//�Ƿ��Ѿ������˽��յ��Զ�Ѫս

	map<int64,bool>		m_mapUserUpdateFlag;	//�û���Ϣ�仯��־
	
public:
	//����ս���
	vector<CGuild*>		m_lstPKGuild[C_UserCoutryEnd];	//�μӹ���ս�Ĺ����б�������������ʾ

public:
	//gve
	time_t				m_ltLastAllGuildGveRank;
	vector<CGuild*>		m_lstGuildGveNow;
	vector<CGuild*>		m_lstGuildGveLast;
	vector<CGuild*>		m_lstGuildGveHighest;
	int					m_nFlag;

	vector<CGuild*>		m_lstGuildGveNowNew[C_UserCoutryEnd];
	vector<CGuild*>		m_lstGuildGveLastNew[C_UserCoutryEnd];
	vector<CGuild*>		m_lstGuildGveHighestNew[C_UserCoutryEnd];
public:
	//��Դ��
	CResourceData		m_ResourceData;
	map<int,CResource*> m_lstResource[MAX_RESOURSE_SEARCH_TYPE+1];

public: 
	//GVG
	time_t				m_ltLastGvgCheck;
	int					m_nGvgFlag;
	map<int,CGvgCity*>	m_mapGvgCity;
	time_t				m_ltGvgLastStat;
	
public:
	vector<DB_C_User*>	m_lstWpcRank;
	time_t				m_ltWpcRankCheck;
	map<string,int>		m_mapWpcFightPoint;
	map<int64,bool>		m_mapUserWPCUpdateFlag;	//����������Ϣ�仯��־
	string				m_strChampionUid;	//�ھ�ID������Ƚ�

public:
    //������ϰ
    CWarGameData		m_WarGameData;

public:
	//ͬ��ս
	map<int,CCountryLeague*>		m_mapLeagueBattle;	
	time_t				m_ltLeagueCheck;

public:
	//BOSSս
	DB_C_BossBtlMsg*	m_pDBBossBtlMsg;
	vector<DB_C_User*>	m_lstBossBtlRank;

	list<string>	m_lstUpList[BOSSBTL_UP_CNT];
	time_t				m_ltBossCheck;

	list<GCG_BossBtlLiteUnit*> m_lstBossBtlRecord;
	int					m_nBossBtlTick;

	time_t				m_ltBossLiteCheck;

public:
    CGuildRedEnvelope   m_GuildRedEnvelope;
    time_t              m_ltSortRank;
    time_t              m_ltSendRank;
    time_t              m_ltCheckOverDue;

public:
	vector<DB_C_User*>	m_vecLabSearchRank;  //�������������а�һСʱˢ��һ��
	time_t				m_ltLastUpdateLabSearchRankTime;
	bool				m_bCleanArmRaceData;
	int					m_GuildBtlReceive[GUILD_BTL_DAY_CNT];

private:
	map<int,int64>			m_OneYuanRewardKey[ONE_YUAN_PURCHASE_CNT+1]; //1,2,3,4,5,6�ֱ��Ӧ6��
	vector<LeftRewardKey*>	m_vecLeftRewardKey;
	DB_C_UserList*			m_pMainUserList;  //����m_region��ֵ��ĵ�UserList,���ϱ߱���һЩ����
};