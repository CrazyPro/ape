#ifndef _RCEOBTAINVISITHELPSHANDLE_H_
#define _RCEOBTAINVISITHELPSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainVisitHelpsHandle : public CBaseEvent
{
public:
	RceObtainVisitHelpsHandle();
	~RceObtainVisitHelpsHandle();
	RegistEvent(RceObtainVisitHelpsHandle,C2S_RceObtainVisitHelps)

private:
	void handle(Event* e);
};
#endif

