#ifndef _RCEUPDATEPROFILEHANDLE_H_
#define _RCEUPDATEPROFILEHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateProfileHandle : public CBaseEvent
{
public:
	RceUpdateProfileHandle();
	~RceUpdateProfileHandle();
	RegistEvent(RceUpdateProfileHandle,C2S_RceUpdateProfile)
	void SendRet2User(User* pUser,int nRet,RseUpdateProfile& rseUpdateProfile);
enum
{
	RseUpdateProfileRet_Success = 0,

};
private:
	void handle(Event* e);
};
#endif

