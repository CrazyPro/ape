#ifndef _RCEOBTAINASKFORHELPHANDLE_H_
#define _RCEOBTAINASKFORHELPHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainAskForHelpHandle : public CBaseEvent
{
public:
	RceObtainAskForHelpHandle();
	~RceObtainAskForHelpHandle();
	RegistEvent(RceObtainAskForHelpHandle,C2S_RceObtainAskForHelp)

private:
	void handle(Event* e);
};
#endif

