#ifndef _RCEUPDATESHIPSHANDLE_H_
#define _RCEUPDATESHIPSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateShipsHandle : public CBaseEvent
{
public:
	RceUpdateShipsHandle();
	~RceUpdateShipsHandle();
	RegistEvent(RceUpdateShipsHandle,C2S_RceUpdateShips)

private:
	void handle(Event* e);
};
#endif

