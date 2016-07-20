#pragma once


//������س�������
const int OLD_GUILD_SIZE = 100000;
const int MAX_CITY_ID = 10000;			//������������ID,��ֵΪDB�����������޸�
#ifdef WIN32
const int MAX_COUNTRYUSER_IDX	= 5;
const int MAX_COUNTRYGUILD_IDX	= 2;
#else
const int MAX_COUNTRYUSER_IDX	= 5000;
const int MAX_COUNTRYGUILD_IDX	= 50;
#endif

const int MAX_COUNTRYBTL_5RATE_REWARD_CNT = 3;	//��ö�ǽ�������
const int MAX_COUNTRYBTL_2RATE_REWARD_CNT = 20;	//��û��˽�������
const int COUNTRY_ATK_SWEEP_RATE		  = 3;	//ɨ���ļ��㱶��

const int CITY_USER_GROUP  = 10;
const int COUNTRY_NPC_RATE = 10000;		
const int SEND_CITY_USER_CNT = 15;		//һ�η���15�����
//const int MAX_COUNTRY_BOX_CNT = 500;	//���ұ����������
const int MAX_COUNTRY_REPORT_CNT = 20;	//���Ҽ�¼��ս���������
const int GUILD_LIST_PAGE_CNT	= 11;	//�����б�ÿ�θ����չʾ������
const int GUILDBTL_LIST_PAGE_CNT= 10;	//����ս�б�ÿ�θ����չʾ������

const int MAX_GUILD_ITEMLOG_CNT	= 50;		//����ս��Ʒ������־
const int MAX_GUILD_LOG_CNT		= 30;
const int GUILD_LOG_TIME		= 2*24*3600;	//������־����ʱ��
const int GUILD_BTL_DAY_CNT = 3;
const int HISTORT_RANK_USER_CNT = 10;		//���칤��ս����������10��
enum CountryID
{
	C_Unknow = 0,
	C_AllCountry = C_Unknow,	//���й��ң����ڹ�������

	C_Start,				//��ҹ��ҿ�ʼ
	C_Italy		= C_Start,	//�����
	C_USA,
	C_England,
	C_Germany,	//�¹�
	C_Russia,	//����
	C_France,
	C_UserCoutryEnd, //��ҹ��ҽ���
	
	C_NPCStart= 21,
	C_NPC = C_NPCStart,	
	C_NPCEnd,
	C_CountryCnt,
};



enum E_ADD_COIN_TYPE
{//����ս����������ʿ���ȴ��ҵ�;��
	E_ADD_COIN_Unknow = 0,
	E_ADD_COIN_Admin,	//����Ա
	E_ADD_COIN_CostGift,	//��������
	E_ADD_COIN_Item,	//ʹ����Ʒ

	//��ս���
	E_ADD_COIN_CountryBattle = 100, //��ս
	E_ADD_CDTIME,					//ͨ��CDʱ��ָ�
	E_ADD_CreditRecover,			//ѫ�»ָ�			
	E_ADD_ITEM,						//����
	E_ADD_CostThewRevover,			//���������ָ�	
	E_ADD_COIN_CountryBattle_Def,	//��ս����
	E_ADD_COIN_BloodBtlWinRedward,		//Ѫսʤ������
	E_ADD_COIN_LaunchBloodBtlWinRedwar, //����Ѫս����ʤ���Ľ���
	E_ADD_OfficerRight,                 //���ҹ�Աʹ��Ȩ�޻ָ�
	E_ADD_OfficerPosition,              //���ҹ�Աְλ�仯
	E_ADD_MaxChange,                    //���ֵ�仯

    E_ADD_COIN_CountryBomb,             //��սը��

	//�������
	E_Add_COIN_GuildContribute = 200,//�������
	E_ADD_COIN_GuildBtlEmbrave,		//����

	//�����Ӫս
	E_ADD_COIN_Fail, //�����Ӫս�سǻָ�
	E_ADD_COIN_RegiongCountryBattle, //�����Ӫսս��
	E_ADD_COIN_RegiongCountryBattleDef, //�����Ӫսս������
	//����
};	

enum E_COST_COIN_TYPE
{//����ս����������ʿ���ȴ��ҵ�;��
	E_COST_COIN_Unknow = 0,
	E_COST_COIN_Admin,	//����Ա
	//��ս���
	E_COST_COIN_CountryBattle = 100, //��ս
	E_COST_COIN_ChgCity, //�л�����
	E_COST_COIN_SPY,		//ս��
	E_COST_BOX_CHG,			//ս���һ����ұ���
	E_COST_RECOVER_MORALE,		//�ָ�ʿ��
	E_COST_MORALE_Officer, //���ҹ�Աְλ�仯
	E_COST_MaxChange,                    //���ֵ�仯

    E_COST_COIN_CountryBomb,         //��սը��

	//�������
	E_COST_COIN_GuildStake = 200,	//����ҡ��
	E_COST_COIN_KickStake,			//�ر�ѡ��
	E_COST_COIN_Shop,				//�̳�
	E_COST_COIN_PickWelfar,			//��ȡ����

};

enum CountryBloodBtlStepType
{//Ѫս���㣬��¼���ڴ���
	CBloodBtlStep_Start = 0,
	CBloodBtlStep_PK,
	CBloodBtlStep_Balance,
	CBloodBtlStep_Over,
};

enum CountryOptType
{		//0��ѡ����� 1:�������� 2:��������ͼ 3:������� 4:ǰ������ 5:��ͨ��� 6:�߼���� 
	//7:ˢ������б� 8:�����ж��� 9:����ʿ�� 10:��ȡ���ұ��� 11:�������ұ���  12:ս���һ� 13:�鿴ս�� 14:���� 100,ս������
	COT_SelCountry = 0,
	COT_ChgCountry,
	COT_ClickMap,
	COT_ClickCity,
	COT_GotoCity,
	COT_NormalSpy,
	COT_SeniorSpy,
	COT_UpdateUser,
	COT_AddThew,
	COT_AddMorale,
	COT_PickCountryBox,
	COT_OpenCountryBox,
	COT_ZhanGongChg,
	COT_ShowReport,
	COT_Attack,				//����
	COT_BoxPageOpen,		//�򿪹��ұ���ҳ��
	COT_CountryRank,		//�������а�
	COT_ReAttack,			//����
	COT_AttackByUser,		//����ҹ���
	COP_AtkSweep,			//ɨ��
	COP_SetTargetPage,		//������Ŀ�괰��
	COP_SetTarget,			//����Ŀ�����
	COP_LaunchBloodBtl,		//����Ѫս
	COP_SeeBloodBtl,		//�鿴Ѫս��Ϣ
	COP_BloodBtlBroadCast,	//�㲥Ѫս��Ϣ
	COP_AutoBloodBtlRedward, //�Զ�Ѫս��������

	COP_DailyReward,	    //ÿ��ս������
    COT_AttackBomb,         //Ͷ��
    COT_AttackBombByUser,   //�����Ͷ����ը
	COT_LeagueBtlMsg,		//����ս��Ϣ����
	COT_LeagueBtlPlayerRank, //����ս��������
	COT_LeagueBtlGuildRank,	 //����ս��������
	COT_LeagueGetReward,	 //32:��ȡ���� 
	COT_LeagueRequestReward, //33:����������
	COT_LeagueRewardRecord, //34:��������Ϣ ��¼ͬ��ս��ȡ�����Ļ᳤

    COT_TeleportCity,       //35:��ս���ͳ��й���

	COT_AttackOver = 100,	//ս������
	COT_ReAttackOver,			//����
	COP_AtkSweepOver,		

    COT_AttackBombOver,     //Ͷ����������
    
};

enum CountryRoportType
{//����ս������
	Cntr_Report_Attack = 0, //����
	Cntr_Report_Defence,	//����
	Cntr_Report_AtkSweep,	//ɨ��
	Cntr_Report_DefSweep,	//����ɨ��

	Cntr_Report_Winning	= 6,	//��ʤ
	Cntr_Report_OverWinning,//��ֹ��ʤ
	Cntr_Report_Capture,	//ռ�����
	Cntr_Report_BloodBtl,	//Ѫս

    Cntr_Report_Bomb,       //Ͷ��
    Cntr_Report_DefBomb,    //����ը��
};

enum CountryErrorLogType
{//���Ҵ�����־����
	CntrError_UserHasCountry = 0 ,	//����Ѿ����˹���
	CntrError_UserNoCountry,			//����޹���
	CntrError_UserNoCity,			//����޳���
	CntrError_UserNotFind,			//�����
	CntrError_CityError,				//�������Բ�һ��
	CntrError_TmpChg0506,				//2013.05.06��ʱ�޸�
	CntrError_LoadUserError,			//������ҳ���
	CntrError_UserNotFind4Guild,			//�����
	CntrError_UserNotFind4ChgGuildLeader,			//�����
	CntrError_GuildIDError,					//����ID����
	CntrError_GuildCountryError,				//����ID����
	CntrError_NoLeader,					//δ�ҵ��᳤
	CntrError_LeaderError,				//�᳤���ݴ���
	CntrError_GuildLeaderError,				//�᳤���ݴ���
	CntrError_LeaderCntrError,			//�᳤���Ҵ���

};


//===============================================================
//�������
//===============================================================
enum GuildStakeType
{
	G_Stake_Low = 0,	
	G_Stake_High,	
	G_Stake_Cnt,
};
enum GuildScienceType
{
	GS_Start = 0,
	GS_DecSelfMorale = GS_Start,
	GS_AddEnemyMorale,
	GS_AddThewSpeed,
	GS_AddTankAtk,
	GS_AddTankHP,
	GS_AddFootAtk,
	GS_AddFootHP,
	GS_AddPlaneAtk,
	GS_AddPlaneHP,
	GS_AddThewMax,
	GS_Cnt,
};
enum GuildBuildingType
{//���Ὠ��
	GB_Hall = 0,	//�������
	GB_ScienceStore,//�Ƽ�����
	GB_Shop,		//�����̳�
	GB_FootCenter,	//��Ӣ��У��������
	GB_PlaneCenter,	//�������ģ��վ���
	GB_TankCenter,	//�����о�����̹�ˣ�
	GB_TimeCenter,	//ʱ���о���
	GB_RateCenter,	//ȫ����ս�����ۣ�
	GB_Cnt,
};

enum GuildContributeType
{//�����������
	GuildCost_Credit = 0,
	GuildCost_MedalAndOil,	
	GuildCost_Feats,
	GuildCost_Item,		//������Ʒ������
	GuildCost_Cnt,
};
enum GuildPositionType
{
	GP_Normal	= 0,	//��ͨ��Ա
	GP_Leader	= 1,	//�᳤
	GP_SecLeader,		//���᳤
	GP_Elder,			//����
	GP_Cream,			//��Ӣ
	GP_LastPos = GP_Cream, //��������ְλ
	GP_Cnt,
};

enum GuildPermit
{
	G_Pmt_UpPos			= 0x01,	//����ְλ
	G_Pmt_DownPos		= 0x02,	//����ְλ
	G_Pmt_AppleApp		= 0x04,	//ͬ������
	G_Pmt_KickUser		= 0x08,	//�߳���Ա
	G_Pmt_ChgBulletin	= 0x10,	//�޸Ĺ���
	G_Pmt_ChgSlogan		= 0x20, //�޸Ŀں�
	G_Pmt_SendReward	= 0x40, //����ս��Ʒ
	G_Pmt_SetLineup		= 0x80,	//����
};

enum GuildLogType
{//������־
	G_Log_Enter = 0,	//���빤��
	G_Log_Quit,			//�˳�����
	G_Log_ChgPos,		//ְλ�仯
	G_Log_Contribute,	//�������
	G_Log_PickWelfare,	//��ȡ����
	G_Log_BldUpgrade,	//��������
	G_Log_Kick,			//�߳�����
	G_Log_SendReward,	//����ս��Ʒ
	G_Log_RankReward,	//���н���
	G_Log_BtlRank,		//����ս����
	G_Log_GvgReward,	//GVG�콱
};

enum GuildOptType
{
	GOT_Open = 0,
	GOT_FindGuild,
	GOT_AllGuildLst,
	GOT_ChgShowGuild,		//��һ������
	GOT_CltCreateGuild,		//��������
	GOT_ApplyGuild,
	GOT_CancelApply,
	GOT_SetFlag,	
	GOT_ChgBulletin	= 10,	// �޸Ĺ���
	GOT_ChgSlogan,			//�޸Ŀں�
	GOT_QuitGuild,			//�˳�����
	GOT_DelateLeader,		//�����᳤
	GOT_GuildLog,			//������־
	GOT_PickWelfare,		//��ȡ����
	GOT_Contribute,			//�������
	GOT_GuildCoinLog,		//���������־

	GOT_OpenMemberPage=30,	//�򿪹����Ա����
	GOT_ChgLeader,			//ת�û᳤
	GOT_UpPos,				//����ְλ
	GOT_DownPos,			//����ְλ
	GOT_AgreeApply,			//ͬ������
	GOT_KickMember,			//�߳���Ա
	GOT_ApplyList,			//�����Ա�б�
	GOT_DisAgreeApply,		//�ܾ�����

	GOT_BldUpgrade= 40,	//�������Ὠ��
	
	GOT_KickScienceStake = 50,	//��ѡ�Ƽ�
	GOT_ScienceStakeLow,		//�Ƽ�����
	GOT_ScienceStakeHigh,		//�Ƽ�����

	GOT_OpenGuildShop = 60,			//�������̳�
	GOT_SetGuildShopPmt,				//�����̳�Ȩ��

	GOT_GBtlSinUp		= 70,	//��������ս
	GOT_GBtlSeeLineup,			//�鿴����
	GOT_GBtlSetLineup,			//����
	GOT_GBtlOpenPage,			//�򿪹���սҳ��
	GOT_GBtlCreditEmbrave,		//ѫ�¹���
	GOT_GBtlHonorEmbrave,		//��������
	GOT_GBtlSeeLastBtl,			//�ۿ��ϴ�ս��
	GOT_GBtlSeeRankReward,		//�鿴��������
	GOT_GBtlGetReward,			//��ȡ����ս����
	GOT_GBtlAllRank,			//���칤������
	GOT_GBtlGuildLst	= 80,	//��ս�����б�
	GOT_GBtlSeeReward,			//�鿴����ս����
	GOT_GBtlAllRankTotal,		//���칤����������
	GOT_GBtlSeeStorage,			//�鿴����ֿ�
	GOT_GBtlSendStorageItem,	//����ֿ⽱��
	GOT_GBtlSendItemLog,		//�ֿ������־

	GOT_SendAgreeUser = 90,
	GOT_SendKickUser,
	GOT_SendPosChg,
	GOT_SendBldUpgrade,
	//�÷�������ʹ��
	GOT_SrvCreateGuild=100,	//�жϹ���ɷ񴴽�
	GOT_SrvUpdateUserPos,		//�������ְλ
	GOT_SrvAgreeUserApply,		//ͬ����ҵ�����
	GOT_SrvKickMember,			//�߳���Ա
	GOT_ChgLeaderByDelate,		//������ɸ����᳤
	GOT_ChgLeaderByDelate2Game,	//������ɸ����᳤
	GOT_SrvSendStorageItem,		//����ս��Ʒ

	//GVE
	GOT_GVE_Open = 200,
	GOT_GVE_NpcList,
	GOT_GVE_Attack,
	GOT_GVE_AtkSweep,
	GOT_GVE_GetBox,
	GOT_GVE_UseBuff,
	GOT_GVE_NormalSyp,
	GOT_GVE_HighSyp,
	GOT_GVE_Map,
	GOT_GVE_BuyThew,
	GOT_GVE_Rank,
	GOT_GVE_GuildRank,
	GOT_GVE_GetGuildRank,
	GOT_GVE_LastRank,
	GOT_GVE_LastGuildRank,
	GOT_GVE_HistoryRank,
	GOT_GVE_GetPersonalBox,
	GOT_GVE_SpNpcList,
	GOT_GVE_GetAllGuildRank,

	GOT_GVE_AttackOver = 250,
	GOT_GVE_AtkSweepOver,
	//TASK
	GOT_TASK_APPLY = 300,//������
	GOT_TASK_FLAUSH,		//ˢ������
	GOT_TASK_AWARD,			//�콱
	GOT_TASK_DROP,			//��������
	GOT_TASK_COMPLETE,		//ѫ�����

	GOT_SET_DELATETM,		//���õ����᳤��ʱ��,������
	GOT_SET_LEADER,			//ָ�������»᳤
};

enum GuildOptRet
{
	GOR_SUCCESS = 0,
	GOR_TASK_INPROGRESS_FLUSH = 210,//���������,����ˢ��,�����콱
	GOR_TASK_CREDIT_LESS_FLUSH,//ѫ�²���,����ˢ��,���ܻ�ѫ�����
	GOR_TASK_CREDIT_LESS_COMPLETE,//ѫ�²���,�����������
	GOR_TASK_CREDIT_STATUSERR_COMPLETE,//����״̬����,��δ�ӻ��Ѿ����,�����������
	GOR_TASK_NOT_COMPLETE_AWARD,//����δ���,�����콱
	GOR_TASK_ERROR,
};
enum GuildBtlResultType
{//����ս�������
	GBR_Unknow	= 0,
	GBR_Win0Way,		//ʤ0·
	GBR_Win1Way,		//ʤ1·
	GBR_Win2Way,		//ʤ2·
	GBR_Win3Way,		//ȫʤ
	GBR_WinNoEnemy,		//�ֿ�
	GBR_Cnt,
};

enum GuildBtlOneWayResultType
{//����ս��·���
	GBOResult_Lose	= -1,
	GBOResult_Unknow = 0,
	GBOResult_Win	= 1,
	GBOResult_Draw	= 2,	//ƽ��
	GBOResult_WinNoEnemy,	//�ֿ�
};

enum GuildBtlStepType
{//����ս�׶�
	GBtlType_UnKnow = 0,
	GBtlType_SignUp,
	GBtlType_LineUp0,
	GBtlType_Btl0,
	GBtlType_LineUp1,
	GBtlType_Btl1,
	GBtlType_LineUp2,
	GBtlType_Btl2,
	GBtlType_Over,
	
};

enum GuildBtlMatchType
{//����ս���ģʽ
	GBMType_Rand = 0,	//������
	GBMType_Score,		//���ݻ������
};

enum GuildBtlToolType
{//����ս����
	GBTool_Empty = 0,
	GBTool_CostHP,	//��ŷ籩����Ѫ
	GBTool_CostAtk,		//�˱����䣬����
	GBTool_Cnt,
};

enum CountryBloodBtlType
{//����Ѫս����
	CBT_UserLaunch = 0,	//��ҷ���
	CBT_SYSLaunch,		//ϵͳ����
};

const int MAX_REGION_COUNTRY_CNT = 100; //������ս����������

enum RegionCountryOptType
{	//0:��������ͼ 		1:������� 		2:ǰ������ 		3:��ͨ��� 		4:�߼���� 					5:ˢ������б� 		6:�����ж��� 
	//7:����ʿ�� 		 	8:�鿴ս�� 	9:����
	//10:���� 				11:���ͱ�������Ϣ 	12:ɨ�� 		13:����	
	RCOT_ClickMap = 0,
	RCOT_ClickCity,
	RCOT_GotoCity,
	RCOT_NormalSpy,
	RCOT_SeniorSpy,
	RCOT_UpdateUser,
	RCOT_AddThew,
	RCOT_AddMorale,
	RCOT_ShowReport,
	RCOT_Attack,				//����
	RCOT_ReAttack,			//����
	RCOT_AttackByUser,		//����ҹ���
	RCOP_AtkSweep,			//ɨ��
	RCOP_Sign,				//����
	RCOP_AdminSign,			//����
	RCOT_Init,				//��ʼ��
	RCOT_Over,				//ս������
	RCOT_PlayerList,		//ս������
	RCOT_LastList,			//�ϴ�����
	RCOT_ZhangongRecord,	//ս����¼
	RCOT_SignCheck,			//�ж��Ƿ���ϱ�������
	RCOT_GetGift,
	RCOT_SignFree,			//����ս������ǰ5�������ѱ���
	RCOT_MapUpdate,			//����˫���������ͼ

	RCOT_AttackOver = 100,	//ս������
	RCOT_ReAttackOver,			//����
	RCOP_AtkSweepOver,		
};

enum RegionCountryID
{
	RC_Unknow = 0,
	RC_CountryStart,
	RC_Country1 = RC_CountryStart,
	RC_Country2,
	RC_CountryNPC,
	RC_CountryNum = RC_CountryNPC,
	RC_End,	
};

const int MAX_REGION_COUNTRY_RANK_NUM = 100;//������սս�������������

const int WHOLE_COUNTRY_FAIL_MOVE_CD = 15;
const int WHOLE_COUNTRY_FAIL_PROTECT_CD = 300;
const int WHOLE_COUNTRY_FAIL_MORALE = 50;

enum RegionCountryWinType
{
	RCWT_Normal = 0,
	RCWT_Boom,
	RCWT_Head,
};

const int WHOLE_COUNTRY_UPDATE_TIME = 60;

const int GVE_START_STEP = 3101;
const int GVE_SP_STEP = 4001;
const int GVE_SP_NPC_ADD = 1000;

enum GveBuffType
{
	GveBuffType_Master = 1, //�᳤��BUFF
	GveBuffType_First,	//�Ͻ��һ����BUFF
};

const int GVE_MAX_RANK = 100;

const int MAX_RESOURSE_SEARCH_TYPE = 3;
const int MAX_RESOURSE_TYPE = 6;

const int MAX_RESOURSE_ID = 10000;	
const int MAX_RESOURSE_TYPE_ID = 100000;
const int MAX_RESOURSE_SAVE_ID = 10000;

const int RESOURCE_SEARCH_CNT = 3;

const int MAX_WARGAME_SAVE_ID = 10000;
const int MAX_WARGAME_DELAY_NUM = 2;                //ÿ����ϰ����������ʱ����
const int WARGAME_ALLINFO_REFRESH_INTERVAL = 3;

enum ResourceOptType
{//1:��ҳ�� 2:̽�� 3:ռ�� 4:���� 5:����״̬ 6:ս����Ϣ
	ROT_Open = 1,
	ROT_Search,
	ROT_Attack,
	ROT_Leave,
	ROT_Update,
	ROT_Record,
	ROT_ReAtk,
	ROT_AttackOver = 100,
	ROT_AttackOverCountry,
	ROT_AttackOverCountryEnemy,
};

enum ResourceSearchType
{
	RST_Free = 1,
	RST_20,
	RST_100,
};

const int MAX_RESOURCE_RECORD = 100;
const int MAX_RESOURCE_THEWTIME = 30;

enum Guild_Task_Status
{
	E_GTS_NOTASK,
	E_GTS_PROGRESS,
	E_GTS_DONE,
};

enum Guild_Task_Type
{
	E_GTT_BROKEN = 1,
	E_GTT_REPAIR,
	E_GTT_CONTRIBUTE,
	E_GTT_UPDATESCIENCE,
	E_GTT_BATTLE,
};

enum GvgBtlStepType
{//gvg�׶�
	GvgBtlType_UnKnow = 0,
	GvgBtlType_SignUp,
	GvgBtlType_PreTime,
	GvgBtlType_LineUp0,
	GvgBtlType_Btl0,
	GvgBtlType_LineUp1,
	GvgBtlType_Btl1,
	GvgBtlType_Over,

};

enum GvgOptType
{//0:��GVGҳ�� 			1:�������						2:����ս��			3:�鿴����			4:����		5:����ս��		
 //6:��ͨ����		7:ѫ�¹���		8:������ʤ		9:�ƻ��Ƿ�		10:�޸��Ƿ�		11:��ȡ����		12:�������� 13:GVG��� 14:�뿪���� 15:�鿴����������б� 16:ս����Ϣ 17:������Ϣ 18:���߽��� 19:ȡ������ 
	Gvg_Open = 0,
	Gvg_Click,
	Gvg_Report,
	Gvg_Rank,
	Gvg_Sign,
	Gvg_Enter,
	Gvg_AddProp,
	Gvg_AddPropCredit,
	Gvg_BuyStreak,
	Gvg_BrokeCity,
	Gvg_DefCity,
	Gvg_GetReward,
	Gvg_Update,
	Gvg_GvgInterface,
	Gvg_Leave,
	Gvg_SeeCityPlayer,
	Gvg_BtlMsg,
	Gvg_ContributeData,
	Gvg_OffLineEnter,
	Gvg_OffLineLeave,

	Gvg_BrokeCityOver = 100,
	Gvg_DefCityOver,
	Gvg_RewardRecord,
};

const int GVG_UPDATE_TIME = 3600;	
const int MAX_SIGN_CNT = 2;
const int MAX_FIGHT_TIME = 2;

const int MIN_GVG_FIGHT_TIME = 120;

const int MAX_GVG_SEND_NUM = 20;

const int MAX_GVG_PLAYER_RECORD_NUM = 30;

const int MAX_WPC_RANK_NUM = 10;

const int WPC_RANK_CHAMPION = 10001;

enum WarGameOptType
{//������ϰ����
    WGOT_Open = 1,
    WGOT_Occupy,                        //ռ��
    WGOT_Loot,                          //��ռ
    WGOT_Leave,                         //����
    WGOT_ReFresh,                       //ˢ��
    WGOT_FightRecord,                   //ս����־
    WGOT_Counterattack,                 //����
    WGOT_DelaySite,                     //��ʱ
    WGOT_BuyTokens,                     //������ϰ��

    WGOT_BeAttack,                      //������

    WGOT_GetSiteList,                   //��ȡ��ϰ���б�

    WGOT_Truce,                         //��ս

    WGOT_AttackedFlag,                  //��ʾ������������

    WGOT_FightReturn = 100,                   //ս������
    WGOT_LootOver,
    WGOT_CounterAttackOver,
    WGOT_AttackOverCountryAtck,
    WGOT_AttackOverCountryEnemy,
};

enum WarGameOptResult
{
    //0:�ɹ� 1:�Ѿ�ռ����ϰ���� 2:ѫ�²��� 3:��Ч���� 4:��ϰ���ѱ�ռ�� 
    //5:���ݴ��� 6:ռ������ﵽ���� 7:��ϰ��� 8:δռ����ϰ�� 9:����δռ����ϰ�� 10:��ϰ���ڱ����� 11:��ϰ��ռ�����Ѿ�����
    //12����ѫ���� 13:�Ѿ��ﵽ������ڴ��� 14;û�м��ž�Ӫ
    //100ս���ɹ� 101ս��ʧ��
    WGOR_Success = 0,
    WGOR_HasOccupy,
    WGOR_NoEnoughCredit,
    WGOR_NullityOpt,
    WGOR_OccupyByOther,
    WGOR_WrongData,
    WGOR_OverLimit,
    WGOR_NoEnoughToken,
    WGOR_NoOccupySite,
    WGOR_EnemyNoOccpySite,
    WGOR_OccupyOnProtect,
    WGOR_OccupantChange,
    WGOR_NoEnoughFeats,
    WGOR_OverLimitDelayNum,
    WGOR_NoBarracks,
    WGOR_NoStrategicArmy,
    WGOR_NoTruceProtol,
    WGOR_NoForceBook,
    WGOR_SiteOnTruce,

    WGOR_FightWin = 100,
    WGOR_FightDefeat,
};

enum LeagueBtlCnt
{
	LEAGUEBTLCNTSTART = 1,
	LEAGUEBTLCNTEND = 2,
	LEAGUEBTLDRAW = 100,//�ж�ƽ��
};

enum LeagueRewardType
{
	LEAGUERWDTYPEPERSON = 1,
	LEAGUERWDTYPEGUILD = 2,
};

const int MAX_LEAGUE_RANK_NUM = 50;
const int MAX_LEAGUE_RANK_SEND_NUM = 30;

enum LeagueBtlStepType
{//gvg�׶�
	LeagueBtlType_PreTime = 0,
	LeagueBtlType_Battle,
	LeagueBtlType_Over,
	LeagueBtlType_Reward,
};

const int MAX_BOSSBTLMSG_SAVE_ID = 10000;

enum BossOptType
{
	BOT_Open = 1,
	BOT_OpenBtl,
	BOT_Up,
	BOT_SeeUp,
	BOT_SeeRank,
	BOT_GetReward,
	BOT_EmbraveHonor,
	BOT_EmbraveCredit,
	BOT_SetWords,
	BOT_ReportWords,
	BOT_Update,
	BOT_Atk,
	BOT_ClearCD,
	BOT_SeeHighRank,
	BOT_SeeUpRank,
	BOT_UpdateBtl,
	BOT_FinalAtk,		//���һ��
	BOT_AtkOver = 100,
	BOT_AtkMsg = 101,
};

enum CountryChatOptType
{
	CCOT_NONE = 0,
	CCOT_ONE  = 1,//��������ȫ�����͵�����Ϣ
	CCOT_CHATUI,//�������,����100��
	CCOT_CHATCOUNTRY,//�᳤������
	CCOT_CHATWORLD,		//���緢��
	CCOT_MASK,		//����ĳ�᳤������
	CCOT_MASKUI,	//�����ν���
	CCOT_UNMASK,	//�������
};

enum CountryChatOptRet
{
	CCOR_SUCCESS = 0,//�ɹ�
	CCOR_NOTLEADER,		//���ǻ᳤
	CCOR_GUILDLV,		//����ȼ�����
	CCOR_LESSBROAD,		//ȱ��С�㲥
	CCOR_REGIONERR,		//countryd�ϵĴ���
	CCOR_REGIONCOUNTRY,	//countryd�ϵĴ���
	CCOR_NOMSG,			//û����Ϣ��¼
	CCOR_INCOLD,		//û��5s cdʱ��
	CCOR_TBLERR,		//�������
	CCOR_MSGLEN,		//��Ϣ̫��
	CCOR_ERRMASKID,	 //Ҫ���ε�uid����
	CCOR_COUNTRYERR,	//ȡcountrymanager����
	CCOR_COUNTRYDBERR,	//ȡdb_country����
	CCOR_MASKDB,		//mask db
	CCOR_MASKOVER,		//���εĻ᳤��Ŀ��30����
	CCOR_NOMASK,		//û�����εĻ᳤
	CCOR_NOMASKID,		//û�ҵ�Ҫ������ε�uid
	CCOR_MASKSELF,		//�����Լ�??
	CCOR_MASKAGAIN,		//�Ѿ�������
};

const int MAX_COUNTRY_CHAT_MSGNUM = 100;//��ս����,���100��
const int MAX_COUNTRY_CHAT_MSGLEN = 70;//ÿ�����70������