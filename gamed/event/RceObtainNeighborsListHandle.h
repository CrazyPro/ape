#ifndef _RCEOBTAINNEIGHBORSLISTHANDLE_H_
#define _RCEOBTAINNEIGHBORSLISTHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainNeighborsListHandle : public CBaseEvent
{
public:
	RceObtainNeighborsListHandle();
	~RceObtainNeighborsListHandle();
	RegistEvent(RceObtainNeighborsListHandle,C2S_RceObtainNeighborsList)

private:
	void handle(Event* e);
};
#endif

