#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class DealRseBroadcast : public CBaseEvent
{
public:
	DealRseBroadcast();
	~DealRseBroadcast();
	RegistEvent(DealRseBroadcast,S2C_RseBroadcast)

private:
	void handle(Event* e);
};
