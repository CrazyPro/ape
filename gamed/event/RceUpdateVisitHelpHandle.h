#ifndef _RCEUPDATEVISITHELPHANDLE_H_
#define _RCEUPDATEVISITHELPHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateVisitHelpHandle : public CBaseEvent
{
public:
	RceUpdateVisitHelpHandle();
	~RceUpdateVisitHelpHandle();
	RegistEvent(RceUpdateVisitHelpHandle,C2S_RceUpdateVisitHelp)

private:
	void handle(Event* e);
};
#endif

