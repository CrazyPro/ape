#ifndef _RCEQUERYSTARINFOHANDLE_H_
#define _RCEQUERYSTARINFOHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryStarInfoHandle : public CBaseEvent
{
public:
	RceQueryStarInfoHandle();
	~RceQueryStarInfoHandle();
	RegistEvent(RceQueryStarInfoHandle,C2S_RceQueryStarInfo)

private:
	void handle(Event* e);
};
#endif

