#ifndef _RCEITEMDAMAGEDHANDLE_H_
#define _RCEITEMDAMAGEDHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceItemDamagedHandle : public CBaseEvent
{
public:
	RceItemDamagedHandle();
	~RceItemDamagedHandle();
	RegistEvent(RceItemDamagedHandle,C2S_RceItemDamaged)

private:
	void handle(Event* e);
};
#endif

