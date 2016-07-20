#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
#include "../../event/EventDefine.h"
#include "../WorldEventHandler.h"

class DealWorldEvent : public CBaseEvent
{
public:
    DealWorldEvent();
    ~DealWorldEvent();
    RegistWorldEvent(DealWorldEvent)

private:
    void registHandler();
    void handle(Event* e);

protected:
    void processEventForward(Event* e);
    void processEventForwardByUid(Event* e);
    void processEventForwardByPlatId(Event* e);
} ;
