#include "event/AutoEventHead.h"
#include "GameNetHandler.h"
#include "GameEventHandler.h"
//���ļ�Ϊʹ�ù����Զ����ɣ��벻Ҫ���ļ����޸ģ�����Ҫ�޸ģ�����sskylin��ϵ��


void GameEventHandler::initAutoEventProcessors()
{
	RceBattleDamagesPackHandle::createInstance(this);
	RceCustomizedActivityHandle::createInstance(this);
	RceFinishedHandle::createInstance(this);
	RceHeartbeatHandle::createInstance(this);
	RceItemMineExplodedHandle::createInstance(this);
	RceLoginHandle::createInstance(this);
	RceNpcAttackStartHandle::createInstance(this);
	RceObtainAskForHelpHandle::createInstance(this);
	RceObtainAttackerListHandle::createInstance(this);
	RceObtainBattleReplayHandle::createInstance(this);
	RceObtainCustomizerHandle::createInstance(this);
	RceObtainHangarsHelpHandle::createInstance(this);
	RceObtainMessagesListHandle::createInstance(this);
	RceObtainNeighborsListHandle::createInstance(this);
	RceObtainNpcListHandle::createInstance(this);
	RceObtainPayUrlParameHandle::createInstance(this);
	RceObtainRandomTargetsHandle::createInstance(this);
	RceObtainSocialItemsHandle::createInstance(this);
	RceObtainSocialUserInfoHandle::createInstance(this);
	RceObtainUniverseHandle::createInstance(this);
	RceObtainVisitHelpsHandle::createInstance(this);
	RceOnlineRewardHandle::createInstance(this);
	RceQueryCheckAndLockAccountIfPossibleHandle::createInstance(this);
	RceQueryGalaxyWindowHandle::createInstance(this);
	RceQueryPvEHandle::createInstance(this);
	RceQueryReceiveWishItemHandle::createInstance(this);
	RceQueryRefuseReceiveWishItemHandle::createInstance(this);
	RceQuerySendWishItemHandle::createInstance(this);
	RceQueryStarInfoHandle::createInstance(this);
	RceQueryStarsBookmarksHandle::createInstance(this);
	RceQueryVisitHelpsGiftUnitsOnBunkerHandle::createInstance(this);
	RceUpdateAlliancesHandle::createInstance(this);
	RceUpdateGameUnitsHandle::createInstance(this);
	RceUpdateItemHandle::createInstance(this);
	RceUpdateMiscHandle::createInstance(this);
	RceUpdateMissionsHandle::createInstance(this);
	RceUpdateProfileHandle::createInstance(this);
	RceUpdateShipsHandle::createInstance(this);
	RceUpdateSocialItemHandle::createInstance(this);
	RceUpdateStarsBookmarksHandle::createInstance(this);
	RceUpdateTargetsHandle::createInstance(this);
	RceUpdateVisitHelpHandle::createInstance(this);
}
