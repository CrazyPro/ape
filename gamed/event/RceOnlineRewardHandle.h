#ifndef _RCEONLINEREWARDHANDLE_H_
#define _RCEONLINEREWARDHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceOnlineRewardHandle : public CBaseEvent
{
public:
	RceOnlineRewardHandle();
	~RceOnlineRewardHandle();
	RegistEvent(RceOnlineRewardHandle,C2S_RceOnlineReward)

private:
	void handle(Event* e);
};
#endif

