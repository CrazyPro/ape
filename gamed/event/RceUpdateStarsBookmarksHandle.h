#ifndef _RCEUPDATESTARSBOOKMARKSHANDLE_H_
#define _RCEUPDATESTARSBOOKMARKSHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateStarsBookmarksHandle : public CBaseEvent
{
public:
	RceUpdateStarsBookmarksHandle();
	~RceUpdateStarsBookmarksHandle();
	RegistEvent(RceUpdateStarsBookmarksHandle,C2S_RceUpdateStarsBookmarks)

private:
	void handle(Event* e);
};
#endif

