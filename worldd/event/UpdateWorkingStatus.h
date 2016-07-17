#ifndef _UPDATEWORKINGSTATUS_H_
#define _UPDATEWORKINGSTATUS_H_
#pragma once

#include "BaseEvent.h"

/*

�Զ���EventHandler:
1���̳���CBaseEvent
2��ʹ��BIND_1_EVENT/BIND_2_EVENT��ע���¼�
3��initialEventProcessors()�д���ʵ��

*/

class UpdateWorkingStatus : CBaseEvent 
{
public:
    UpdateWorkingStatus(){}
	~UpdateWorkingStatus() {}

    BIND_1_EVENT(UpdateWorkingStatus, EVENT_UPDATE_WORKING_STATUS)

	static void addEvent(EventQueue* eq, int state, int gid);

private:
	void handle(Event* e);
	void handle_GW_Disconn(Event* e);
	void handle_GW_Conn(Event* e);
	void handle_GW_Sync(Event* e);
};

#endif
