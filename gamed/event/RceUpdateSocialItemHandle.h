#ifndef _RCEUPDATESOCIALITEMHANDLE_H_
#define _RCEUPDATESOCIALITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateSocialItemHandle : public CBaseEvent
{
public:
	RceUpdateSocialItemHandle();
	~RceUpdateSocialItemHandle();
	RegistEvent(RceUpdateSocialItemHandle,C2S_RceUpdateSocialItem)
	void SendRet2User(User* pUser,int nRet,RseUpdateSocialItem& rseUpdateSocialItem);
	vector<string> split( string str, string pattern);

private:
	void handle(Event* e);
};
#endif

