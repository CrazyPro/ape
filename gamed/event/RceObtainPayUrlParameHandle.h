#ifndef _RCEOBTAINPAYURLPARAMEHANDLE_H_
#define _RCEOBTAINPAYURLPARAMEHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainPayUrlParameHandle : public CBaseEvent
{
public:
	RceObtainPayUrlParameHandle();
	~RceObtainPayUrlParameHandle();
	RegistEvent(RceObtainPayUrlParameHandle,C2S_RceObtainPayUrlParame)

private:
	void handle(Event* e);
};
#endif

