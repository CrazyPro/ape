#ifndef _RCEOBTAINSOCIALUSERINFOHANDLE_H_
#define _RCEOBTAINSOCIALUSERINFOHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainSocialUserInfoHandle : public CBaseEvent
{
public:
	RceObtainSocialUserInfoHandle();
	~RceObtainSocialUserInfoHandle();
	RegistEvent(RceObtainSocialUserInfoHandle,C2S_RceObtainSocialUserInfo)

private:
	void handle(Event* e);
};
#endif

