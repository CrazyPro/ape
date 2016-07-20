#pragma once
#include <log4cxx/logger.h>
#include <vector>
#include <map>
#include <list>
#include "../logic/User.h"
#include "../common/statistics.h"
#include "../common/counter.h"
#include <pthread.h>
#include "../event/DataHandler.h"

using namespace std;
#ifndef WIN32
#include <ext/hash_map>
using namespace __gnu_cxx;
namespace __gnu_cxx
{

	template<>
	struct hash<long long>
	{

		size_t
			operator()(long long __x) const
		{
			return __x;
		}
	} ;

	template<>
	struct hash<std::string>
	{

		size_t
			operator()(std::string __s) const
		{
			return __stl_hash_string(__s.c_str());
		}
	} ;
}
#else
#include <hash_map>
using namespace stdext;
#endif

class CLiteCountry
{
public:
	CLiteCountry(int nRegion,int nCountryID)
		:m_nRegion(nRegion)
		,m_nCountryID(nCountryID)
	{
		m_nAtkTargetCity= 0;
		m_nDefTargetCity= 0;
	
		m_nUserCnt		= 0;
		m_nLastDayRank	= 0;	
		m_nCurRank		= 0;
		m_ltUserRankGetTime	= 0;
		m_nBoom			= 0;
		m_nLastDayBoom	= 0;
		m_nGuildCnt		= 0;
		m_nPresidentUid = 0;
		m_strPresidentName = "";
		m_strPresidentGuildName = "";
		m_mapUserRank.clear();
		m_lstCityID.clear();
		m_nHpAdd = 0;
		m_nAtkAdd = 0;
	}
	~CLiteCountry()
	{
		m_lstCityID.clear();
		m_mapUserRank.clear();

		
	}
	int GetUserLastDayRank(int64 uid)
	{
//#ifdef WIN32
//		return 1;//��ʱ���룬�������
//#endif
		map<int64,int>::iterator iter;
		iter = m_mapUserRank.find(uid);
		if(iter == m_mapUserRank.end())
		{
			return -1;
		}
		return iter->second;
	}
	void ClearUserRank()
	{
		if(m_ltUserRankGetTime<=0)
			return;
		m_ltUserRankGetTime = 0;
		m_mapUserRank.clear();
	}
	bool NeedGetCountryUserRank(time_t ltNow)
	{
		if(m_ltUserRankGetTime<=0)
		{
			return true;
		}
		time_t ltLast = m_ltUserRankGetTime;
		tm dayNow = *localtime(&ltNow);
		tm dayLast = *localtime(&ltLast);
		if(dayNow.tm_hour>=0 && dayNow.tm_hour<5)
		{
			return false;
		}
		if(dayNow.tm_yday!=dayLast.tm_yday || dayNow.tm_year!=dayLast.tm_year)
			return true;
		return false;
	}

	int m_nRegion;
	int m_nCountryID;
	int m_nUserCnt;
	int m_nCurRank;		//��ǰ���а�
	int m_nBoom;		//���ٶ�
	int m_nGuildCnt;	//��������
	vector<int> m_lstCityID;	//�����б�

	int m_nLastDayRank;		//ǰһ���������
	int m_nLastDayBoom;		//ǰһ�췱�ٶ�

	int m_nAtkTargetCity;	//����Ŀ�����
	int m_nDefTargetCity;	//����Ŀ�����

	time_t m_ltUserRankGetTime;		//������а���ʱ��
	map<int64,int> m_mapUserRank;	//�������
	int64 m_nPresidentUid ; //Ԫ��
	string m_strPresidentName ; //Ԫ������
	string m_strPresidentGuildName ; //Ԫ������������

	int m_nHpAdd;
	int m_nAtkAdd;
};

class GameDataHandler;
class GameRgnDataHandler
{
public:
	GameRgnDataHandler(GameDataHandler* pDH,int nRegion);
	~GameRgnDataHandler();
	
	void Init();

	CLiteCountry* GetLiteCountryInfo(int nCountry,bool bCreateIfNotExit = false);
	void SetCountryUser(int nCountry,int nCnt);
	int  GetCountryUser(int nCountry);
	void AddCountryUser(int nCountry,int nCnt);		
	int  GetMinUserCountry();	//������������Ĺ���
	int  GetMaxUserCountry();	//�����������Ĺ���
	int  GetCountryLastDayRank(int nCountry);//���ǰһ���������	
	int  GetCountryBoom(int nCountry);	//��ù��ҷ��ٶ�
	void ResetCountryRank();
	// ���а����
	void SetFaouseHallRank(int64 uid, int nRank );
	int GetFaouseHallRank(int64 uid);
	void SetRankUpdateTime( time_t tTime ){ m_tRankFamoseHallTimer = tTime; }
	bool IsRankGetTimeByID(int nActivityId);

private:
	int m_nRegion;
	GameDataHandler* m_pGameDataHandler;

	//�����������
	map<int,CLiteCountry*>		m_mapLiteCountry;
	//�����û������а�֮��ɽ����а������չ����map���������񵥲�������
	map<int64,int>				m_mapFamouseGiftMap;
	time_t						m_tRankFamoseHallTimer; // ���°�ʱ��

};
