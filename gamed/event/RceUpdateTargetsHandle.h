#ifndef _RCEUPDATETARGETSHANDLE_H_
#define _RCEUPDATETARGETSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateTargetsHandle : public CBaseEvent
{
public:
	RceUpdateTargetsHandle();
	~RceUpdateTargetsHandle();
	RegistEvent(RceUpdateTargetsHandle,C2S_RceUpdateTargets)

private:
	void handle(Event* e);
};
#endif

