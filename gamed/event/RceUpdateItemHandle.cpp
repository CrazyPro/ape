#include "../GameNetHandler.h"
#include "../GameDataHandler.h"
#include "../../event/event.pb.h"
#include "../../common/json/json.h"
#include "../../common/string-util.h"
#include "../../logic/User.h"
#include "../../logic/Player.h"
#include "RceUpdateItemHandle.h"
#include "../../logic/SkuIdTbl.h"
#include "../../logic/ResourceSilos.h"

RceUpdateItemHandle::RceUpdateItemHandle()
:CBaseEvent()
{

}
RceUpdateItemHandle::~RceUpdateItemHandle()
{

}

void RceUpdateItemHandle::handle(Event* e)
{
	int64 uid = e->uid();
	GameDataHandler* pUserManager = eh_->getDataHandler();
	if(!pUserManager)
	{
		return;
	}
	User *pUser = pUserManager->getUser(uid);
	if ( !pUser)
	{
		return;
	}

	Player* pPlayer = pUser->GetPlayer();
	if ( !pPlayer || !pPlayer->CanUse())
	{
		return ;
	}

	RceUpdateItem* req = e->mutable_ce_rceupdateitem();
	if( !req )
	{
		return;
	}

	RseUpdateItem rse;
	rse.set_ret(RseUpdateItemRet_Success);
	
	int nPlanetId = req->planetid();
	DB_Planet *pPlanet = pPlayer->GetPlanet(nPlanetId);
	if(!pPlanet){
		SendRet2User(pUser,RseUpdateItemRet_CantFindPlanet,rse);
		return;	
	}

	string strAction = req->action();
	MsgBuildingItem* pMsgBuildingItem = NULL;
	if(req->item_size() > 0)
	{
		pMsgBuildingItem = req->mutable_item(0);
		rse.set_sid(pMsgBuildingItem->sid());
	}
	
	if(req->sid()!=0)
		rse.set_sid(req->sid());
	MsgTransaction* pmt = req->mutable_transaction();
	if(pmt)
	{
		for(int i = 0;i<pmt->socialitems_size();i++)
		{
			MsgSocialItems* MSI = pmt->mutable_socialitems(i);
			DB_SocialItem* pDBSI = pPlayer->GetSocialItem(MSI->sku());
			pDBSI->set_amount(pDBSI->amount() - MSI->amount());
			if(pDBSI->amount() == 0)
				pPlayer->RemoveSocialItem(MSI->sku());
		}
	}
	if ("newItem" == strAction) 
	{
		if(pmt){
			if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
				!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
				!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
				!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
				!pPlayer->CostRes(RC_Score, pmt->score()) /*||
				!pPlayer->CheckDroidInUse(pPlanet, pmt->droids())*/)
			{
				SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
				return;	
			}
		}
		
		
		int sku = SkuIDTblInst::instance().GetSku(pMsgBuildingItem->sku());
		int maxNum = ResourceSilosTblInst::instance().GetMaxNum(sku,pPlanet->hqlevel());//最大能造几个
		int count = 0;
		for(int i = 0;i<pPlanet->items_size();i++)
		{
			DB_Item *pItem = pPlanet->mutable_items(i);
			if(pMsgBuildingItem->sku() == pItem->sku())
				count++;
		}
		if(count < maxNum)
		{
			DB_Item *pDBItem = pPlayer->CreateBuilding(nPlanetId, pMsgBuildingItem);
			if(!pDBItem)
			{
				SendRet2User(pUser,RseUpdateItemRet_CreateFailure,rse);
				return;
			}
			rse.set_id(pDBItem->id());
			eh_->getDataHandler()->markUserDirty(pUser);
			SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		}
		else
		{
			SendRet2User(pUser,RseUpdateItemRet_CreateFailure,rse);
			return ;
		}	
	}
	else if ("destroy"== strAction) 
	{
		if(pmt){
			if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
				!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
				!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
				!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
				!pPlayer->CostRes(RC_Score, pmt->score()) )
			{
				SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
				return;	
			}
		}

		if(!pPlayer->DestroyBuilding(nPlanetId, req->id(), req->sid())){
			SendRet2User(pUser,RseUpdateItemRet_DestroyFailure,rse);
			return;
		}

		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
	else if ("rotate"== strAction)
	{
		if(!pPlayer->RotateBuilding(nPlanetId, req->id(), req->sid(),req->x(),req->y(),req->flip())){
			SendRet2User(pUser,RseUpdateItemRet_RotateFailure,rse);
			return;
		}
		rse.set_id(req->id());
		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
	else if ("move"== strAction) 
	{
		if(!pPlayer->MoveBuilding(nPlanetId, req->id(), req->sid(),req->x(),req->y())){
			SendRet2User(pUser,RseUpdateItemRet_MoveFailure,rse);
			return;
		}
		rse.set_id(req->id());
		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	} 
	else if ("newState"== strAction)
	{
		if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
			!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
			!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
			!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
			!pPlayer->CostRes(RC_Score, pmt->score()))
		{
			SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
			return;
		}
		int incomeToRestore = req->incometorestore();
		int newState = req->newstate();
		int oldState = req->oldstate();

		if(pPlayer->updateNewState(nPlanetId,newState,oldState,req->id(),req->sid(),req->time(),req->incometorestore()) ==	false)
		{
			SendRet2User(pUser,RseUpdateItemRet_UpdateNewStateFailure,rse);
			return ;
		}
		eh_->getDataHandler()->markUserDirty(pUser);
		rse.set_id(req->id());
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	} 
	else if ("repairingStart"== strAction)
	{
		if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
			!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
			!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
			!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
			!pPlayer->CostRes(RC_Score, pmt->score()))
		{
			SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
			return;	
		}
		if(!pPlayer->repairingStart(nPlanetId, req->sid(), req->time(), req->id()))
		{
			SendRet2User(pUser,RseUpdateItemRet_RepairingStartFailure,rse);
			return ;
		}
		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	} 
	else if ("repairingCompleted"== strAction) 
	{
		if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
			!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
			!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
			!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
			!pPlayer->CostRes(RC_Score, pmt->score()))
		{
			SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
			return;	
		}
		if(!pPlayer->repairingCompleted(nPlanetId, req->sid(), req->id()))
		{
			SendRet2User(pUser,RseUpdateItemRet_RepairingCompletedFailure,rse);
			return ;
		}
		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
	else if ("upgradePremium"== strAction) 
	{
		if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
			!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
			!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
			!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
			!pPlayer->CostRes(RC_Score, pmt->score()))
		{
			SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
			return;	
		}
		
		if(!pPlayer->upgradePremium(nPlanetId, req->id(), req->sid(),req->time(), req->incometorestore())){
			SendRet2User(pUser,RseUpdateItemRet_CancelBuildFailure,rse);
			return;
		}

		eh_->getDataHandler()->markUserDirty(pUser);
		rse.set_id(req->id());
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
	else if ("cancelBuild"== strAction) 
	{
		if(!pPlayer->CostRes(RC_Coin, pmt->coins()))
		{
			SendRet2User(pUser,RseUpdateItemRet_CancelBuildFailure,rse);
			return;
		}

		if(!pPlayer->cancelBuild(nPlanetId, req->id(), req->sid())){
			SendRet2User(pUser,RseUpdateItemRet_CancelBuildFailure,rse);
			return;
		}

		eh_->getDataHandler()->markUserDirty(pUser);
		rse.set_id(req->id());
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
	else if ("cancelUpgrade"== strAction) 
	{
		if(!pPlayer->CostRes(RC_Coin, pmt->coins()))
		{
			SendRet2User(pUser,RseUpdateItemRet_CancelUpgradeFailure,rse);
			return;
		}
		if(!pPlayer->cancelUpgrade(nPlanetId, req->id(), req->sid(), req->time())){
			SendRet2User(pUser,RseUpdateItemRet_CancelUpgradeFailure,rse);
			return;
		}
		rse.set_id(req->id());
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
	} 
	else if ("instantRepairAll"== strAction)
	{
		if (!pPlayer->CostRes(RC_Cash, pmt->cash()) ||
			!pPlayer->CostRes(RC_Coin, pmt->coins()) ||
			!pPlayer->CostRes(RC_Mineral, pmt->minerals()) ||
			!pPlayer->CostRes(RC_Exp, pmt->exp()) ||
			!pPlayer->CostRes(RC_Score, pmt->score()))
		{
			SendRet2User(pUser,RseUpdateItemRet_ResNotEnough,rse);
			return;	
		}
		for(int i = 0; i < req->item_size();i++)
		{
			MsgBuildingItem* item = req->mutable_item(i);
			if(!item)
				break;
			pPlayer->repairingCompleted(nPlanetId,item->sid(),item->id());
		}
		eh_->getDataHandler()->markUserDirty(pUser);
		SendRet2User(pUser,RseUpdateItemRet_Success,rse);
		return;
	}
}

void RceUpdateItemHandle::SendRet2User(User* pUser,int nRet,RseUpdateItem& rseUpdateItem)
{
	rseUpdateItem.set_ret(nRet);
	string text;
	rseUpdateItem.SerializeToString(&text);
	eh_->sendDataToUser(pUser->fd(), S2C_RseUpdateItem,text);
}