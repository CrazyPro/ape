#ifndef _RCEUPDATEMISSIONSHANDLE_H_
#define _RCEUPDATEMISSIONSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateMissionsHandle : public CBaseEvent
{
public:
	RceUpdateMissionsHandle();
	~RceUpdateMissionsHandle();
	RegistEvent(RceUpdateMissionsHandle,C2S_RceUpdateMissions)

private:
	void handle(Event* e);
};
#endif

