#ifndef _RCEQUERYREFUSERECEIVEWISHITEMHANDLE_H_
#define _RCEQUERYREFUSERECEIVEWISHITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryRefuseReceiveWishItemHandle : public CBaseEvent
{
public:
	RceQueryRefuseReceiveWishItemHandle();
	~RceQueryRefuseReceiveWishItemHandle();
	RegistEvent(RceQueryRefuseReceiveWishItemHandle,C2S_RceQueryRefuseReceiveWishItem)

private:
	void handle(Event* e);
};
#endif

