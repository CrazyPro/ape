#ifndef _RCEQUERYGALAXYWINDOWHANDLE_H_
#define _RCEQUERYGALAXYWINDOWHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryGalaxyWindowHandle : public CBaseEvent
{
public:
	RceQueryGalaxyWindowHandle();
	~RceQueryGalaxyWindowHandle();
	RegistEvent(RceQueryGalaxyWindowHandle,C2S_RceQueryGalaxyWindow)

private:
	void handle(Event* e);
	void handle_c2country(Event *e);
	void handle_country2s(Event *e);
};
#endif

