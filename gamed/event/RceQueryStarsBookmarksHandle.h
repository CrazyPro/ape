#ifndef _RCEQUERYSTARSBOOKMARKSHANDLE_H_
#define _RCEQUERYSTARSBOOKMARKSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceQueryStarsBookmarksHandle : public CBaseEvent
{
public:
	RceQueryStarsBookmarksHandle();
	~RceQueryStarsBookmarksHandle();
	RegistEvent(RceQueryStarsBookmarksHandle,C2S_RceQueryStarsBookmarks)

private:
	void handle(Event* e);
};
#endif

