#ifndef _RCEDEPLOYUNITSHANDLE_H_
#define _RCEDEPLOYUNITSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceDeployUnitsHandle : public CBaseEvent
{
public:
	RceDeployUnitsHandle();
	~RceDeployUnitsHandle();
	RegistEvent(RceDeployUnitsHandle,C2S_RceDeployUnits)

private:
	void handle(Event* e);
};
#endif

