#ifndef _RCEUPDATEMISSIONSHANDLE_H_
#define _RCEUPDATEMISSIONSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateMissionsHandle : public CBaseEvent
{
public:
	RceUpdateMissionsHandle();
	~RceUpdateMissionsHandle();
	RegistEvent(RceUpdateMissionsHandle,C2S_RceUpdateMissions)
	void SendRet2User(User* pUser,int nRet,RseUpdateMissions& rseUpdateMissions);
	string progressToString(string progress, int index, int amount);
	string getStringBySize(int size);

private:
	void handle(Event* e);
};
#endif

