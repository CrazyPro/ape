#ifndef _RCEQUERYSENDWISHITEMHANDLE_H_
#define _RCEQUERYSENDWISHITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQuerySendWishItemHandle : public CBaseEvent
{
public:
	RceQuerySendWishItemHandle();
	~RceQuerySendWishItemHandle();
	RegistEvent(RceQuerySendWishItemHandle,C2S_RceQuerySendWishItem)

private:
	void handle(Event* e);
};
#endif

