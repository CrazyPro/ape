#ifndef _RCEOBTAINNPCLISTHANDLE_H_
#define _RCEOBTAINNPCLISTHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainNpcListHandle : public CBaseEvent
{
public:
	RceObtainNpcListHandle();
	~RceObtainNpcListHandle();
	RegistEvent(RceObtainNpcListHandle,C2S_RceObtainNpcList)

private:
	void handle(Event* e);
};
#endif

