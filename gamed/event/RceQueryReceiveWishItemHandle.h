#ifndef _RCEQUERYRECEIVEWISHITEMHANDLE_H_
#define _RCEQUERYRECEIVEWISHITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryReceiveWishItemHandle : public CBaseEvent
{
public:
	RceQueryReceiveWishItemHandle();
	~RceQueryReceiveWishItemHandle();
	RegistEvent(RceQueryReceiveWishItemHandle,C2S_RceQueryReceiveWishItem)

private:
	void handle(Event* e);
};
#endif

