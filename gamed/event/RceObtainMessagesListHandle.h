#ifndef _RCEOBTAINMESSAGESLISTHANDLE_H_
#define _RCEOBTAINMESSAGESLISTHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainMessagesListHandle : public CBaseEvent
{
public:
	RceObtainMessagesListHandle();
	~RceObtainMessagesListHandle();
	RegistEvent(RceObtainMessagesListHandle,C2S_RceObtainMessagesList)

private:
	void handle(Event* e);
};
#endif

