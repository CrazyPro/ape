#ifndef _MESSAGEDEF_H_
#define _MESSAGEDEF_H_
#pragma once
//���ļ�Ϊʹ�ù����Զ����ɣ��벻Ҫ���ļ����޸ģ�����Ҫ�޸ģ�����sskylin��ϵ��
enum S2C_EVENT
{
	S2C_EVENT_BASE = 511,
	S2C_RseBroadcast,		//^s^RseBroadcast#
	S2C_RseAuthState,		//^s^RseAuthState#
};
enum C2S_EVENT
{
	C2S_EVENT_BASE = 1023,
	C2S_EVENT_MAX,
};
#endif

