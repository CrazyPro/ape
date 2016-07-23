#ifndef _RCEUPDATEMISCHANDLE_H_
#define _RCEUPDATEMISCHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateMiscHandle : public CBaseEvent
{
public:
	RceUpdateMiscHandle();
	~RceUpdateMiscHandle();
	RegistEvent(RceUpdateMiscHandle,C2S_RceUpdateMisc)

	enum{
		RseUpdateMiscRet_Success = 0,
		RseUpdateMiscRet_CantFindPlanet = 1,
		RseUpdateMiscRet_DroidCntError = 2,
	};
private:
	void handle(Event* e);
	void SendRet2User(User* pUser,int nRet,RseUpdateMisc& rseUpdateItem);
};
#endif

