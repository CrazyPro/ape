#ifndef _RCEUPDATEITEMHANDLE_H_
#define _RCEUPDATEITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateItemHandle : public CBaseEvent
{
public:
	RceUpdateItemHandle();
	~RceUpdateItemHandle();
	RegistEvent(RceUpdateItemHandle,C2S_RceUpdateItem)

private:
	void handle(Event* e);
};
#endif

