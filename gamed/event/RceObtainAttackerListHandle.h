#ifndef _RCEOBTAINATTACKERLISTHANDLE_H_
#define _RCEOBTAINATTACKERLISTHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainAttackerListHandle : public CBaseEvent
{
public:
	RceObtainAttackerListHandle();
	~RceObtainAttackerListHandle();
	RegistEvent(RceObtainAttackerListHandle,C2S_RceObtainAttackerList)

private:
	void handle(Event* e);
};
#endif

