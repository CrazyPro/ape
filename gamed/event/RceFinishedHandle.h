#ifndef _RCEFINISHEDHANDLE_H_
#define _RCEFINISHEDHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceFinishedHandle : public CBaseEvent
{
public:
	RceFinishedHandle();
	~RceFinishedHandle();
	RegistEvent(RceFinishedHandle,C2S_RceFinished)

private:
	void handle(Event* e);
	void handle_selfload(Event* e);
	void handle_romateload(Event* e);
	void handle_romatereturn(Event* e);

};
#endif

