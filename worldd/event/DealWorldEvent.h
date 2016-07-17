#ifndef _DEAL_WORLD_EVENT_H_
#define _DEAL_WORLD_EVENT_H_

#include "BaseEvent.h"
#include "../../event/EventDefine.h"
#include "../WorldEventHandler.h"

/*

�Զ���EventHandler:
1���̳���CBaseEvent
2��ʹ��BIND_1_EVENT/BIND_2_EVENT��ע���¼�
3��initialEventProcessors()�д���ʵ��

*/

class DealWorldEvent : public CBaseEvent
{
public:
	DealWorldEvent();
	~DealWorldEvent();

	InstanceCreator(DealWorldEvent)

private:
	void regist();
	void handle(Event* e);
	void processEventForward(Event* e);
// 	void processEnterCenterCampBattle(Event* e);
// 	void processCenterCampBattleData(Event* e);
// 	void processCenterCampBattleMove(Event* e);
// 	void processCenterCampBattleResult(Event* e);
// 	void processClearCenterCampBattleCD(Event* e);
// 	void processCenterCampBattleRankList(Event* e);
// 	void processCenterCampBattleCampRank(Event* e);
// 	void processCenterCampBattleAward(Event* e);
// 	void processCenterCampBattleBuy(Event* e);
// 	void processReload(Event* e);	
//     void processLuckyGoddnessData(Event* e);
// 	void processSalute(Event* e);
// 	void processSaluteData(Event* e);
 	void handleWorldGM(Event* e);
} ;

#endif
