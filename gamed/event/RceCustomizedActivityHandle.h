#ifndef _RCECUSTOMIZEDACTIVITYHANDLE_H_
#define _RCECUSTOMIZEDACTIVITYHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceCustomizedActivityHandle : public CBaseEvent
{
public:
	RceCustomizedActivityHandle();
	~RceCustomizedActivityHandle();
	RegistEvent(RceCustomizedActivityHandle,C2S_RceCustomizedActivity)

private:
	void handle(Event* e);
};
#endif

