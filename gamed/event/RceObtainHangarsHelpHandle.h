#ifndef _RCEOBTAINHANGARSHELPHANDLE_H_
#define _RCEOBTAINHANGARSHELPHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainHangarsHelpHandle : public CBaseEvent
{
public:
	RceObtainHangarsHelpHandle();
	~RceObtainHangarsHelpHandle();
	RegistEvent(RceObtainHangarsHelpHandle,C2S_RceObtainHangarsHelp)

private:
	void handle(Event* e);
};
#endif

