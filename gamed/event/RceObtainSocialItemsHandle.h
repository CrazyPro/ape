#ifndef _RCEOBTAINSOCIALITEMSHANDLE_H_
#define _RCEOBTAINSOCIALITEMSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainSocialItemsHandle : public CBaseEvent
{
public:
	RceObtainSocialItemsHandle();
	~RceObtainSocialItemsHandle();
	RegistEvent(RceObtainSocialItemsHandle,C2S_RceObtainSocialItems)

private:
	void handle(Event* e);
};
#endif

