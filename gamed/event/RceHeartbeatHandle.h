#ifndef _RCEHEARTBEATHANDLE_H_
#define _RCEHEARTBEATHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceHeartbeatHandle : public CBaseEvent
{
public:
	RceHeartbeatHandle();
	~RceHeartbeatHandle();
	RegistEvent(RceHeartbeatHandle,C2S_RceHeartbeat)

private:
	void handle(Event* e);
};
#endif

