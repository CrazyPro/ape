#ifndef _RCENPCATTACKSTARTHANDLE_H_
#define _RCENPCATTACKSTARTHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceNpcAttackStartHandle : public CBaseEvent
{
public:
	RceNpcAttackStartHandle();
	~RceNpcAttackStartHandle();
	RegistEvent(RceNpcAttackStartHandle,C2S_RceNpcAttackStart)

private:
	void handle(Event* e);
};
#endif

