#ifndef _RCEOBTAINUNIVERSEHANDLE_H_
#define _RCEOBTAINUNIVERSEHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainUniverseHandle : public CBaseEvent
{
public:
	RceObtainUniverseHandle();
	~RceObtainUniverseHandle();
	RegistEvent(RceObtainUniverseHandle,C2S_RceObtainUniverse)

private:
	void handle(Event* e);
};
#endif

