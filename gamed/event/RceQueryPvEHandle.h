#ifndef _RCEQUERYPVEHANDLE_H_
#define _RCEQUERYPVEHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryPvEHandle : public CBaseEvent
{
public:
	RceQueryPvEHandle();
	~RceQueryPvEHandle();
	RegistEvent(RceQueryPvEHandle,C2S_RceQueryPvE)

	enum{
		QUERY_PVE_LITE = 1,
		QUERY_PVE_NPC = 2,
	};

	enum{
		QUERY_PVE_ERR_CANT_FIND_PASS = 1,
		QUERY_PVE_ERR_CANT_FINDNPC = 2,
	};
private:
	void handle(Event* e);
};
#endif

