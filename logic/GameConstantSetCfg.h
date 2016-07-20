#pragma once
#include <map>
#include <string>

#include "../common/const_def.h"
#include "GameConstantSetLogic.h"

using namespace std;

#define __GAME_CONSTANTSET_NUM__ 4
#define __GAME_CONSTANTSET_NUMN__ 6

////////////////////////////////////////////////////////////////////////////////////////////

enum E_GAMECONSTANTSET_DEF
{
	E_GAMECONSTANTSET_DEF_NONE = 0,					//��ʼ��
	E_GAMECONSTANTSET_DEF_FIGHTVALUE_FILTER,		//ս��������
	E_GAMECONSTANTSET_DEF_WAIGUAKICKNUM,			//��ұ�������
	E_GAMECONSTANTSET_DEF_YUANDAN,					//Ԫ�������
	E_GAMECONSTANTSET_DEF_ADDCREDITYEAR,			//��ĩ��ֵ�
	E_GAMECONSTANTSET_DEF_PACKETKICK,				//��Ϣ������
	E_GAMECONSTANTSET_DEF_INVITEGIFTSAVE,			//����������ﱣ������
	E_GAMECONSTANTSET_DEF_SHAREGIFT,				//������Ϸ����
	E_GAMECONSTANTSET_DEF_CALLBACKFRD_CHUNJIE,		//�����ٻغ���
	E_GAMECONSTANTSET_DEF_LUCKY_NUM_COST,			//�����������ġ�����
	E_GAMECONSTANTSET_DEF_ADMIRALSCORE_FILTER =10,		        //�������ֹ���
	E_GAMECONSTANTSET_DEF_ALLUSEADMIRALSCORE_FILTER =11,		//��ս���������ֹ���
	E_GAMECONSTANTSET_DEF_LUCKY_DRAW_1 =12,		//���˱���ʱ��ε�һ����
	E_GAMECONSTANTSET_DEF_LUCKY_DRAW_2 =13,		//���˱���ʱ��εڶ�����
	E_GAMECONSTANTSET_DEF_STRATEGICPATA,			//��������
	E_GAMECONSTANTSET_DEF_STRATEGICGENERAL,		//ս�Ա�Ӫ�������
	E_GAMECONSTANTSET_DEF_LUCKY_NUM =16,		//�������ֻ
	E_GAMECONSTANTSET_DEF_PRIVILEGE =17,		//����ħ��Ȩ��
	E_GAMECONSTANTSET_DEF_EXPLORE =18,		//����̽��
	E_GAMECONSTANTSET_DEF_HIGH_VIP =19,		//�������꽱��
	E_GAMECONSTANTSET_DEF_51_ACT =20,		//51
	E_GAMECONSTANTSET_DEF_DAILY_COST =21,		//ÿ�ճ�ֵ
	E_GAMECONSTANTSET_DEF_ARENACFG = 22,		//�������������
	E_GAMECONSTANTSET_DEF_PVERANK_FILTER =23,        //PVE���а����
	E_GAMECONSTANTSET_DEF_REPAIRBASE =24,        //�Զ��޸�����
	E_GAMECONSTANTSET_DEF_RANK_TIME =25,        //����֮�����а�
	E_GAMECONSTANTSET_DEF_HOLIDAY_INVITE =26,        //������ѻ
	E_GAMECONSTANTSET_DEF_WORLDARENACFG = 27,		//���羺�����������
	E_GAMECONSTANTSET_DEF_FANGCHENMI = 29,		//����������
	E_GAMECONSTANTSET_DEF_WORLDGRAINDAY = 31,		//������ʳ�ջ
	E_GAMECONSTANTSET_DEF_YELLOWACTIVE = 32,		//�»���
	E_GAMECONSTANTSET_DEF_OFFICER = 33,		//�»���
	E_GAMECONSTANTSET_DEF_LEVELBUY = 34,    //�ȼ����
	E_GAMECONSTANTSET_DEF_ZHAOMU = 35,		//ս����ļ
	E_GAMECONSTANTSET_DEF_EQUIP = 36,		//װ���
	E_GAMECONSTANTSET_DEF_REGIONARENACFG = 37,		//�����������������
	E_GAMECONSTANTSET_DEF_NPCDEFIENCE = 38, //���ػ����

	E_GAMECONSTANTSET_DEF_PVE_BATTLE = 39,	//PVEս���������
	E_GAMECONSTANTSET_DEF_HEROCOMBAT_FILTER =40,		        //�������ֹ���
	E_GAMECONSTANTSET_DEF_ALLUSEHEROCOMBAT_FILTER =41,		//��ս���������ֹ���

    E_GAMECONSTANTSET_DEF_MONTHCARD = 42,                   //�쾯�¿�
	E_GAMECONSTANTSET_DEF_HEROARENACFG = 43,		//Ӣ�۾������������
    E_GAMECONSTANTSET_DEF_EXPLOREASRENAL = 44,      //̽�������
    E_GAMECONSTANTSET_DEF_ADMIRALVISITFULL = 45,    //������ļ����
    E_GAMECONSTANTSET_DEF_ALLPEOPLELOTTERY = 46,    //ȫ��齱
    E_GAMECONSTANTSET_DEF_EXTRAWPCPOSITION = 47,    //��������λ��
    E_GAMECONSTANTSET_DEF_COSTCREDITGIFT = 48,      //������ ������
    E_GAMECONSTANTSET_DEF_DAILYRECHARGELOTTERY = 49,//ÿ�ճ�ֵ�齱
	E_GAMECONSTANTSET_DEF_EXTRAEMBLEMPOSITION = 50,    //����Ļռ�λ��
	E_GAMECONSTANTSET_DEF_SECARMSDEALER = 51,//���ؾ�����,��ֵ�ú���
	E_GAMECONSTANTSET_DEF_REBATE = 52,		 //С��ֵ,���ۿۻ
	E_GAMECONSTANTSET_DEF_DOUBLEELEVENOFFICER_1 = 53,//˫ʮһ���ս�����ٻ
	E_GAMECONSTANTSET_DEF_DOUBLEELEVENOFFICER_2 = 54,
	E_GAMECONSTANTSET_DEF_DOUBLEELEVENOFFICER_3 = 55,
	E_GAMECONSTANTSET_DEF_HAPPY_CARD			= 56,	//�����ֻ
	E_GAMECONSTANTSET_DEF_GET_ADMIRAL			= 57,   //�񽫳鲻ͣ�
    E_GAMECONSTANTSET_DEF_CHECK_ADULT           = 58,   //һ���з�����
	E_GAMECONSTANTSET_DEF_WEAPON_SEARCH			= 59,	//̽��ȡ��
	E_GAMECONSTANTSET_ADMIRAL_BUFF				= 60,	//����buff
	
	E_GAMECONSTANTSET_DEF_NEW_RECALL				= 61,	//Ӣ�ۻع鱦��
	E_GAMECONSTANTSET_OPEN_BOX					= 62,   //�������
    E_GAMECONSTANTSET_DEF_ZHAOCAIJINBAO         = 63,   //�вƽ����
};

/////////////////////////////////////////////////////////////////////////////////////////////

struct ConstantSetUnit
{
	string	m_strArgs[__GAME_CONSTANTSET_NUM__];
	int		m_nArgs[__GAME_CONSTANTSET_NUMN__];
	GameConstantSetLogic*	m_pLogic;
};

///////////////////////////////////////////////////////////////////////////////////////////
class GameConstantSetCfg
{
	enum
	{
		E_GAMECONSTANTSET_LOAD_ID = 0,
		E_GAMECONSTANTSET_LOAD_DESC,
		E_GAMECONSTANTSET_LOAD_INUSE,
		E_GAMECONSTANTSET_LOAD_STRARG,
		E_GAMECONSTANTSET_LOAD_INTARG = E_GAMECONSTANTSET_LOAD_STRARG + __GAME_CONSTANTSET_NUM__*2,
	};
public:
	GameConstantSetCfg(void);
	~GameConstantSetCfg(void);

	static GameConstantSetCfg& Instance()
	{
		static GameConstantSetCfg inst;
		return inst;
	}

	bool			LoadTbl();
	void			ClearTbl();

	ConstantSetUnit* GetGameConstantSet(int nID);
	//��ȡ�ս�����ٶ�Ӧ����Ϣ�Ķ�Ӧ�����Ľ���
	int GetDoubleElevenOfficerReward(int nShopID, int nDay);

private:
	static const char*		szGameConstantSet;
	map<int,ConstantSetUnit*> m_mapGameConstantSet;
};

