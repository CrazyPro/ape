#ifndef _RCEUPDATEGAMEUNITSHANDLE_H_
#define _RCEUPDATEGAMEUNITSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateGameUnitsHandle : public CBaseEvent
{
public:
	RceUpdateGameUnitsHandle();
	~RceUpdateGameUnitsHandle();
	RegistEvent(RceUpdateGameUnitsHandle,C2S_RceUpdateGameUnits)

private:
	void handle(Event* e);
};
#endif

