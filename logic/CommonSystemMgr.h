/********************************************************************
	created:	2015/12/29
	created:	29:12:2015   15:40
	filename: 	\Server\logic\CommonSystemMgr.h
	file path:	\Server\logic
	file base:	CommonSystemMgr
	file ext:	h
	author:		likun
	
	purpose:	ϣ�����е�worldͨ�����ݶ��ܹ��ڸù������еõ�����
*********************************************************************/

#ifndef __COMMON_SYSTEM_MGR_H__
#define __COMMON_SYSTEM_MGR_H__

#include "event.pb.h"
#include "dbinterface.pb.h"
#include <log4cxx/logger.h>
#include "../common/Timestamp.h"
#include "../common/Singleton.h"
#include "../common/db_util.h"
#include "../common/ServerConfig.h"
#include "../worldd/worldd.h"

//
//�ù��������ݱ����world id
#define COMMON_WORLD_ID  (4)

class CommonSystemMgr
{
public:
	CommonSystemMgr();
	~CommonSystemMgr();

	void Load();
	void Tick();
	void SaveAll();
	void MarkDirty();

// 	void JoinTuanGouRequest(Event *e);
// 	void JoinTuanGouInformation(Event *e);
// 	void JoinTuanGouNumber(Event *e);
// 	void ResetTuanGouData(Event *e);
protected:
	void ConnectDB();
	void ReleaseDB();

private:
	log4cxx::LoggerPtr m_logger;

	bool		m_bDirty;
	TCRDB*		m_pLocalDB;
	Timestamp	m_LastSave;
/*	DB_TuanGouWorldData m_dbTuanGouData;*/
};

typedef Singleton<CommonSystemMgr> CommonSystemMgrInst;

#endif

