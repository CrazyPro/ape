#ifndef _RCELOGINHANDLE_H_
#define _RCELOGINHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceLoginHandle : public CBaseEvent
{
public:
	RceLoginHandle();
	~RceLoginHandle();
	RegistEvent(RceLoginHandle,C2S_RceLogin)

private:
	void handle(Event* e);
};
#endif

