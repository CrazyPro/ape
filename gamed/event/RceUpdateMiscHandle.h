#ifndef _RCEUPDATEMISCHANDLE_H_
#define _RCEUPDATEMISCHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateMiscHandle : public CBaseEvent
{
public:
	RceUpdateMiscHandle();
	~RceUpdateMiscHandle();
	RegistEvent(RceUpdateMiscHandle,C2S_RceUpdateMisc)

private:
	void handle(Event* e);
};
#endif

