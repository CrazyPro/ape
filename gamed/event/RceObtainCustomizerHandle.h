#ifndef _RCEOBTAINCUSTOMIZERHANDLE_H_
#define _RCEOBTAINCUSTOMIZERHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceObtainCustomizerHandle : public CBaseEvent
{
public:
	RceObtainCustomizerHandle();
	~RceObtainCustomizerHandle();
	RegistEvent(RceObtainCustomizerHandle,C2S_RceObtainCustomizer)

private:
	void handle(Event* e);
};
#endif

