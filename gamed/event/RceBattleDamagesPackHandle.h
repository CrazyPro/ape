#ifndef _RCEBATTLEDAMAGESPACKHANDLE_H_
#define _RCEBATTLEDAMAGESPACKHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceBattleDamagesPackHandle : public CBaseEvent
{
public:
	RceBattleDamagesPackHandle();
	~RceBattleDamagesPackHandle();
	RegistEvent(RceBattleDamagesPackHandle,C2S_RceBattleDamagesPack)

private:
	void handle(Event* e);
	void handle_selfload(Event* e);
	void handle_romateload(Event* e);
	void handle_romatereturn(Event* e);
};
#endif

