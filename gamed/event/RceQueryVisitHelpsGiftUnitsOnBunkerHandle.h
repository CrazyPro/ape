#ifndef _RCEQUERYVISITHELPSGIFTUNITSONBUNKERHANDLE_H_
#define _RCEQUERYVISITHELPSGIFTUNITSONBUNKERHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryVisitHelpsGiftUnitsOnBunkerHandle : public CBaseEvent
{
public:
	RceQueryVisitHelpsGiftUnitsOnBunkerHandle();
	~RceQueryVisitHelpsGiftUnitsOnBunkerHandle();
	RegistEvent(RceQueryVisitHelpsGiftUnitsOnBunkerHandle,C2S_RceQueryVisitHelpsGiftUnitsOnBunker)

private:
	void handle(Event* e);
};
#endif

