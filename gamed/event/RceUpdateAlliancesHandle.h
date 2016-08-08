#ifndef _RCEUPDATEALLIANCESHANDLE_H_
#define _RCEUPDATEALLIANCESHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateAlliancesHandle : public CBaseEvent
{
public:
	RceUpdateAlliancesHandle();
	~RceUpdateAlliancesHandle();
	RegistEvent(RceUpdateAlliancesHandle,C2S_RceUpdateAlliances)

private:
	void handle(Event* e);
	void handle_c2country(Event *e);
	void handle_country2s(Event *e);
};
#endif

