#ifndef _RCEOBTAINBATTLEREPLAYHANDLE_H_
#define _RCEOBTAINBATTLEREPLAYHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainBattleReplayHandle : public CBaseEvent
{
public:
	RceObtainBattleReplayHandle();
	~RceObtainBattleReplayHandle();
	RegistEvent(RceObtainBattleReplayHandle,C2S_RceObtainBattleReplay)

private:
	void handle(Event* e);
};
#endif

