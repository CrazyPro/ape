#ifndef _RCEUNITDAMAGEDHANDLE_H_
#define _RCEUNITDAMAGEDHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUnitDamagedHandle : public CBaseEvent
{
public:
	RceUnitDamagedHandle();
	~RceUnitDamagedHandle();
	RegistEvent(RceUnitDamagedHandle,C2S_RceUnitDamaged)

private:
	void handle(Event* e);
};
#endif

