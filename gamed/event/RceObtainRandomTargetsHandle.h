#ifndef _RCEOBTAINRANDOMTARGETSHANDLE_H_
#define _RCEOBTAINRANDOMTARGETSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainRandomTargetsHandle : public CBaseEvent
{
public:
	RceObtainRandomTargetsHandle();
	~RceObtainRandomTargetsHandle();
	RegistEvent(RceObtainRandomTargetsHandle,C2S_RceObtainRandomTargets)

private:
	void handle(Event* e);
};
#endif

