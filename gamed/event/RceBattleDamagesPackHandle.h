#ifndef _RCEBATTLEDAMAGESPACKHANDLE_H_
#define _RCEBATTLEDAMAGESPACKHANDLE_H_
#pragma once
//该文件及.cpp文件为使用工具创建，可在文件中修改，工具如果发现该文件，将不再重新创建。
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

