#ifndef _RCEITEMMINEEXPLODEDHANDLE_H_
#define _RCEITEMMINEEXPLODEDHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceItemMineExplodedHandle : public CBaseEvent
{
public:
	RceItemMineExplodedHandle();
	~RceItemMineExplodedHandle();
	RegistEvent(RceItemMineExplodedHandle,C2S_RceItemMineExploded)

private:
	void handle(Event* e);
};
#endif

