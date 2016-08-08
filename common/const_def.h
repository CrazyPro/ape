#pragma once
#include <vector>
#include <map>
#include <string>
#include "Commons.h"
#include "const_country_def.h"

//#ifdef _DEBUG
//#define DEBUG_CLIENTBLOCK   new( _CLIENT_BLOCK, __FILE__, __LINE__)
//#else
//#define DEBUG_CLIENTBLOCK
//#endif
//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define new DEBUG_CLIENTBLOCK
//#endif
//


enum
{
	 _MAX_RC4BUFF_SIZE = 1024*512,
};

using namespace std;
typedef long long		time_d;
typedef long long       int64;
typedef unsigned char   byte;
typedef unsigned int    u_int;
typedef short           SHORT;
typedef long            LONG;

enum GameWorkingStatus 
{
	NOT_CONNECTED	= 0,
	NOT_SYNC_USER	= 1,
	LOST_CONNECTION = 2,
	NORMAL			= 3
};

//�Ա�
const int Gender_NULL = 0;
const int Gender_Girl = 1;
const int Gender_Boy  = 2;
const int Gender_ALL  = 3;
//const int WeathLimit  = 200;
const int SEND_STAR_CNT = 20;		//�ݶ�ÿ�η�20��
const int SEND_WEALTH_STAR_CNT = 10;
const int SEND_COMMON_STAR_CNT = 25;
const int ENEMY_COUNT  = 30;
const int BAGITEMLOG_COUNT = 30;	//������־����
const int MAX_LV_CNT = 100*1000;	//�ݶ�ÿ���ȼ����10����
//const int STAR_LOCAL_MAX_LV = 30;	//game�˱���ļ��������ߵȼ�
//const int STAR_LOCAL_GET_LV = 25;	//game�˴ӱ��ػ�ü�����ǵ���ߵȼ�
const int STAR_UPLIMIT_LV	= 5;
const int STAR_DOWNLIMIT_LV = 3;
const int MAX_ATK_NPC_ACTIVECNT = 4;	//ÿ�����NPC�����
const int64 MAX_RES_CNT		= 2000000000;//��Դ���20��
const int BAG_MAX_PILE_CNT	= 99;		//������Ʒ���ѵ���,��ʱ��Ϊ2000
const int BAGITEM_ID_START	= 1000;		//������Ʒ��ʼID
const int TMP_BATITEM_ID_START=2000;	//��ʱ������Ʒ��ʼID
const int VIRTUAL_BAGITEM_ID_START=6000;	//���ⱳ����Ʒ��ʼID
const int BUILDING_ID_START = 10000;	//��ͨ����ID��10000��ʼ
const int MINE_ID_START		= 20000;	//���׵�ID��20000��ʼ
const int ARMY_ID_START	= 30000;		//���ֶ��е�ID��ʼ
const int WPC_COM_ID_START  = 10000;	//�����ʼID
const int WPC_EMBLEM_ID_START = 20000;	//�ռǿ�ʼID
const int ADMIRAL_SKILL_ID_START = 10000; //���켼�ܿ�ʼID
const int WPC_BOOK_ID_START = 30000;	 //�鼮��ʼID
const int EQUIP_ID_START = 60000;	     //װ����ʼID
const int WPC_JAMMER_ID_START = 90000;   //��������ʼID

const int MEDALHONOR_ID_START = 70000;   //����ѫ�¿�ʼID

const int TRAP_ID_START	= 100000;		//�����ID��100000��ʼ

const int VIP_MINE_CNT	= 3;			//�����������
const int REDWAR_VIP_MINE_CNT = 8;      //�쾯VIP��������
const int REDWAR_VIP_TRAP_CNT = 8;      //�쾯VIP��������
const int PRC_ARMY_MAX_GROUP_SIZE = 4;	//������������������
const int PRC_ARMY_MAX_NUM	= 20;		//ÿ���������е�������
const double CREDITS_RATIO = 5.0;

const int DAY_SEND_GIFT_MAX_CNT = 60;	//ÿ���������������
const int DAY_ASK_GIFT_MAX_CNT	= 60;	//ÿ�������ȡ������
const int DAY_GET_GIFT_2_BAG_MAX_CNT = 60;	//ÿ�ս������ﵽ�������������
const int DAY_ASK_GIFT_2_BAG_MAX_CNT= 60;	//ÿ����ȡ���ﵽ�������������
const int DAY_GET_GIFT_MAX_CNT  = DAY_GET_GIFT_2_BAG_MAX_CNT * 2; //ÿ�տɽ��յ����������
const int DAY_RESEND_GIFT_MAX_CNT	= DAY_ASK_GIFT_2_BAG_MAX_CNT * 2;	//ÿ�տɻ��������������

const int ADMIRAL_TRAINLV_ADD_PROP = 20;	//���������ȼ���������
//const int MAX_GIFT_BAG_CNT		= 100;	//�������������
//ע��������־��Զ����ɾ��������������
const int EXPIATE_FLAG_CREDUT0506= 0x01;		//������־
const int EXPIATE_FLAG_CREDUT0718= 0x02;		//��Դ�۳�
const int EXPIATE_FLAG_CREDUT0323= 0x04;		//ĳ�β���
const int EXPIATE_FLAG_CREDUT032301= 0x08;		//PVE����
const int EXPIATE_FLAG_CREDUT20130506 = 0x10;		//���Ҳ���
const int EXPIATE_FLAG_CREDUT20130508 = 0x20;		//���Ҳ���
const int EXPIATE_FLAG_DAILYCOST20130517 = 0x40;	//ÿ�ճ�ֵ����
const int EXPIATE_FLAG_DAILYCOST2013051702 = 0x80;	//ÿ�ճ�ֵ����2
const int EXPIATE_FLAG_CHICKEN20130812 = 0x100;	//�𼦲���
const int EXPIATE_FLAG_EQUIP_LOGON = 0x200;	//װ�������½����
const int EXPIATE_FLAG_CHICKEN20140428 = 0x400;	//�����ʱ����󲹳�
const int EXPIATE_FLAG_DEFENSE0140625 = 0x800;	//���ز������
const int EXPIATE_FLAG_MOON20150319 = 0x1000;	//ħ�в������
const int EXPIATE_FLAG_MOON20150321 = 0x2000;	//ħ�в������
const int EXPIATE_FLAG_MOON20150522 = 0x4000;	//��Ϸ��������
const int EXPIATE_FLAG_GONGHUI20150601 = 0x8000;	//����ս��������
const int EXPIATE_FLAG_XUEZHAN20150623 = 0x10000;	//Ѫս��������
const int EXPIATE_FLAG_XUEZHAN20150624 = 0x20000;	//Ѫս��������
const int EXPIATE_FLAG_HAPPYLLIB20150722 = 0x40000;	//����ʵ���ҹ��ܲ���
const int EXPIATE_FLAG_GUILDBTL20150804 = 0x80000;	//����ս����ⲹ��
const int EXPIATE_FLAG_SERVER20150827 = 0x100000;	//ͣ������
const int EXPIATE_FLAG_JUNHUN20150910 = 0x200000;	//���깦�ܲ���
const int EXPIATE_FLAG_BATTLEW20150916 = 0x400000;   //ս��ѧԺ����
const int EXPIATE_FLAG_GVE20151012 = 0x800000;   //һ��GVE�ص�����
const int EXPIATE_FLAG_GVE20151102 = 0x1000000;	 //GVE�ص�����
const int EXPIATE_FLAG_EMBLEM20151126 = 0x2000000;	 //�������ڻռ�����
const int EXPIATE_FLAG_PARTNER20151201 = 0x4000000;	 //С����λ���ܿ���
const int EXPIATE_FLAG_PARTNER20160121 = 0x8000000;	 //���ž�ӪС��������޸�
const int EXPIATE_FLAG_EQUIP20160225 = 0x10000000;	 //�޸�װ���ظ�����
const int EXPIATE_FLAG_DEFNPC20160306 = 0x20000000;	 //���շ������ⲹ��

const int MaxHonorPerDay = 100000;
const int MAX_REGION_CNT = 100;	//��������

const int MAX_USER_LEVEL = 100;	//������ȼ�
const int MAX_USER_VIP_LEVEL = 7;	//������VIP�ȼ�
const int MAX_ADMIRAL_SKILL_LV = 12;
const int MAX_HERO_SKILL_LV = 12;	//��༼�ܵȼ���Ŀǰȫ��1
const int MAX_HERO_GRADE_LV = 20;	//����Ǽ���
const int MAX_HERO_QUALITY = 5;		//���Ʒ��
const int MAX_BUILDING_LEVEL = 50;	//�������ȼ�

const int MAX_HERO_TRAIN_NUM = 4;	//Ӣ��ѵ��λ������
const int HERO_QUALITY2FIVE_GRADE = 7;	//��ɫ��ɳ�ɫ���Ǽ�


const int nBtCDTime = 2;

const int MAX_SUIT_POKER_NUM = 13;          ///ÿ�ֻ�ɫ���Ƹ���
const int MAX_SUIT_TYPE_NUM = 4;            ///��ɫ����
const int MAX_OWN_POKER = 5;                ///��ӵ�е���������Һ�NPC��
const int INIT_NPC_SHOW_POKER = 3;          ///NPCĬ����ʾ������

const int INTERNAL_WALL_PER_GIFT = 10;      //ÿ�ι���Χǽ������ӵ�Χǽ����
const int MAX_POKER_VALUE = 14;             ///��������ֵ
const int MIN_POKER_VALUE = 1;              ///��С������ֵ

const int MAX_CARDDUEL_NPC_NUM = 200;           ///��Ƭ�������NPC����
const int MAX_CARDDUEL_WAIT_MATCH_TIME = 20;    ///��Ƭ�����ȴ�ƥ������ʱ��
const int MAX_CARDDUEL_WAIT_CHOOSE_TIME = 15;   ///��Ƭ�����ȴ�ѡ��Ƭ�����ʱ��
const int MAX_CARDDUEL_MATCH_NPC_TIME = 5;      ///ƥ��NPCʱ����ѭ����
const int MAX_CARDDUEL_WINNUM = 10;
const int MIN_CARDDUEL_LIMITWINNUM = 8;         ///ÿ�ս�����ȡһ�ξ����ı�־

const int LEVEL_GIFT_TYPE_FLAG = 19;            ///�ȼ�����ı�־

const int MAXSENDCNT = 400;

const int SUPER_STORM_DROPTIME = 60;            //����ǿ�������ʱ��
const int SUPER_STORM_SAMEUSERINTERVAL = 15;    //��ͬһ�����ʹ��ǿ����ļ�������ӣ�

const int MEDALHONOR_MAX_QUALITY = 5;       //����ѫ����ߵ�Ʒ��
const int MEDALHONOR_YELLOW_QUALITY = 5;       //����ѫ�µĳ�ɫƷ������
const int MEDALHONOR_MAX_EXPTYPE = 7;       //����ѫ����ߵľ�������
const int MEDALHONOR_MAX_LEVEL = 50;        //����ѫ����ߵȼ�
const int MEDALHONOR_JOKER_COUNTRY = 0;       //����ѫ���е��޹���ѫ��
const int MEDALHONOR_EXP_TYPE = 7;         //��������ѫ��

#ifndef PIcons
const int MAX_ARMY_GRADE = 3; //�������׼�
const int MAX_ARMY_GROUP = 3; //��������
#endif

#ifndef SUPER_WEAPON
const int MAX_SUPERWEAPON_USE_NUM		= 1; //����Ͷ�ų���������������
enum
{
	WAR_STAGE_BEFORE	= 0,	//����ս��ǰͶ��
	WAR_STAGE_MIDDLE,			//����ս����Ͷ��
	WAR_STAGE_AFTER,			//����ս����Ͷ��
};
#endif

#ifndef PI
const double PI					= 3.141592653589793;
#endif


//���winsock��ͻ
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifdef _WIN32
#pragma warning(disable:4996)
#endif

#define SENDGIFTCOUNT 60
#define ATTACKCOUNT   20 // ս�������

#ifdef _WIN32
#define usleep Sleep
#endif


// ƽ̨���ͣ���ӦWEB��siteid
enum PLAT_TYPE
{
	PLAT_XIAOYOU = 0,	//У��
	PLAT_QZONE,			//�ռ�
	PLAT_QQ_WEIBO,		//QQ΢��
	PLAT_WAP,			//�ֻ�
	PLAT_MANYOU,		//����
	PLAT_QAdd,			//Q+
   // PLAT_QQGAME,        //��Ϸ����
	PLAT_QHALL,			//QQ��Ϸ����
	PLAT_TYPE_MAX
};

//�����־����
enum UserLog_Type
{
	UserLog_Get = 0,
	UserLog_Use,
	UserLog_Cost,
	UserLog_Destroy,
	UesrLog_2TmpBag,	//������ʱ����
	UesrLog_Lost4Full,	//�����������¶���
	UserLog_Tmb2Bag,	//��ʱ�������뱳��
	UserLog_TmpDestroy, //��ʱ��������
	UesrLog_GetVirtualBagItem,	//�������ⱳ��
	UesrLog_CostVirtualBagItem,	//�۳�������Ʒ
	UserLog_AutoDelete, //�����Զ�ɾ��
};
//ս������
enum BtlType
{
	Btl_UnStart,
	Btl_Attack,
	Btl_Defence,
	Btl_Npc,
	Btl_DefenceNpc,	//���ػ
	Btl_Capture,	//ռ��
	Btl_Rescue,		//���
	Btl_Reave,		//����
	Btl_Gainst,		//����
	Btl_NpcActive,  // NPC�������ͨ����
	Btl_BaseDefNPC, //���ر���ս
	Btl_NpcArmyGroup,//��ͼ�
	Btl_PveBattle,
};
//ս��Ӫ��Դ��������
enum SlaveRoomPrcType
{
	SR_PRC_MEDAL = 0,
	SR_PRC_OIL,
	SR_PRC_HONOR,
	SR_PRC_FEATS,
	SR_PRC_CNT,
};
enum Admin_AdSet_Type
{
	AAT_Enable = 0,
	AAT_RegTime,
	AAT_PopTime,
	AAT_WebSet,
};
enum Admin_Opt_Type
{
	AOT_ADMIN_ADDRES	 = 0,
	AOT_ADMIN_ADDARMY,
	AOT_ADMIN_DELARMY,
	AOT_ADMIN_ADDBLD,
	AOT_ADMIN_DELBLD,
	AOT_ADMIN_SETBLDCNT,
	AOT_ADMIN_SETALLBLDLV,
	AOT_ADMIN_SETBLDLV,
	AOT_ADMIN_SETARMYLV,
	AOT_ADMIN_ADDNPC,
	AOT_ADMIN_DELNPC,
	AOT_ADMIN_ADDITEM,
	AOT_ADMIN_DELBLDCNT,
	AOT_ADMIN_ADDEMBLEM,
	AOT_ADMIN_ADDFEATS,
	AOT_ADMIN_SETINIT,
	AOT_ADMIN_SETSCIENCELVL,
	AOT_ADMIN_SETGMTESTVALUE,
	AOT_ADMIN_ADDWPCCOM,
	AOT_ADMIN_ADDMOONCNT,
	AOT_ADMIN_SAVENPC,
	AOT_ADMIN_ADDADMIRAL,
	AOT_ADMIN_DELADMIRAL,
	AOT_ADMIN_ADDSOUL,
	AOT_ADMIN_RECOVERBLDHP,
	AOT_ADMIN_RECOVERARMYHP,
	AOT_ADMIN_ADDADMIRALTRAINEXP,
	AOT_ADMIN_ADDBOOK,
    AOT_ADMIN_DELBOOKEXP,

	AOT_ADMIN_CLEARSTRATEGIC,
	AOT_ADMIN_PVESET_CUSTOM,
	AOT_ADMIN_PVE_FIGHT_START,
	AOT_ADMIN_ADMINAL_REINITDB,
	AOT_ADMIN_ADDCOUPONS,

	AOT_ADMIN_ADD_COUNTRYTHEW,
	AOT_ADMIN_ADD_COUNTRYMORALE,
	AOT_ADMIN_ADD_COUNTRYZHANGONG,
	AOT_ADMIN_ADD_COUNTRYBOX,
	AOT_ADMIN_COUNTRY_RELOADRANK,
	AOT_ADMIN_ARENAFIGHTSET,

	AOT_ADMIN_ADDADMIRALTIMES,
	AOT_ADMIN_ADD_EQUIP,
	AOT_ADMIN_FINISHGUIDE,
	AOT_ADMIN_WORLDARENAFIGHTSET,

	AOT_ADMIN_ADD_GUILDSCORE,
	AOT_ADMIN_ADD_GUILDBLDVALUE,
	AOT_ADMIN_SET_GUILDSCIENCELV,
	AOT_ADMIN_SET_GUILDBLDLV,
	AOT_ADMIN_CLEAR_PASSWORD,
	AOT_ADMIN_SET_OFFICERPOSITION,
	AOT_ADMIN_SET_AddBuff,
	AOT_ADMIN_DELEMBLEM,
    AOT_ADMIN_DELEMBLEMEXP,
	AOT_ADMIN_SET_VipLevel,
	AOT_ADMIN_SET_ADMIRALSKILLLEVEL,
	AOT_ADMIN_SET_EQUIPSTRENGTHLEVEL,
	AOT_ADMIN_SPECIAL_VALUE,
	AOT_ADMIN_REGIONARENAFIGHTSET,
    AOT_ADMIN_CLEAR_NEWDAYINFO,             ///���ÿ��Ĺ�ս����
	AOT_ADMIN_PVE_BATTLE_SET,
	AOT_ADMIN_ADD_JUNLING,
    AOT_ADMIN_ADD_POKERS,                   ///���ֽ�Ƽ����ƿ�
    AOT_ADMIN_RESET_POKEREXC,               ///���ֽ�ƶһ���Ϣ
    AOT_ADMIN_RESET_DUELINFO,               ///�����Ƭ������Ϣ

	AOT_ADMIN_ADDHERO,
	AOT_ADMIN_DELHERO,
	AOT_ADMIN_ADDLETTER,
	AOT_ADMIN_DELLETTER,
	AOT_ADMIN_SETHEROHP,
	AOT_ADMIN_RECOVERHEROHP,

	AOT_ADMIN_CLEAR_WHOLE_COUNTRY,			//�����ս����
	AOT_ADMIN_WHOLE_COUNTRY_SIGN,			//�����ս����

	AOT_ADMIN_ADDADMIRALLETTER,
	AOT_ADMIN_DELADMIRALLETTER,
	AOT_ADMIN_SETPROPERTY,
	AOT_ADMIN_DELWPCCOM,
    AOT_ADMIN_DELWPCCOMEXP,

	AOT_ADMIN_ADD_GVETHEW,
	AOT_ADMIN_ADD_GVEPOINT,
	AOT_ADMIN_GVE_LIST,
	AOT_ADMIN_HEROARENAFIGHTSET,
    AOT_ADMIN_CLEARBAGITEM,
    AOT_ADMIN_ADD_RENTWPC,
	AOT_ADMIN_ADD_GUILDTASK,
	AOT_ADMIN_SET_GUILDTASK_PROGRESS,

	AOT_ADMIN_GVG_REWARD,

	AOT_ADMIN_SET_GUILDLEADER_DELTIME,
	AOT_ADMIN_SET_GUILDLEADER,

    AOT_ADMIN_DEL_EQUIP,        //ɾ��װ��

	AOT_ADMIN_ADD_SEARCHTIME,

	AOT_ADMIN_DEL_ADMIRALSPECIAL,
	AOT_ADMIN_DEL_HEROSPECIAL,
	AOT_ADMIN_DEL_HEROEXPSPECIAL,
	AOT_ADMIN_DEL_WPCCOMEXPSPECIAL,
	AOT_ADMIN_DEL_EMBLEMEXPSPECIAL,
	AOT_ADMIN_DEL_BOOKXPSPECIAL,

	AOT_ADMIN_ADD_DBROLLBACK,

	AOT_ADMIN_ADD_EXPWPC,
	AOT_ADMIN_ADD_EXPEMBLEM,
	AOT_ADMIN_SET_WCPROMOTE_EXP,
	AOT_ADMIN_SET_WCSKILL_EXP,
	AOT_ADMIN_ADD_WCSKILL_EXP,
	AOT_ADMIN_SUB_WCSKILL_EXP,
	AOT_ADMIN_WCOP_TYPE,
	AOT_ADMIN_WCOP_UID,
	AOT_ADMIN_SADOP,
    AOT_ADMIN_ADD_WARGAME_REPORT,
    AOT_ADMIN_ADD_WARGAME_TOKEN,
	AOT_ADMIN_SET_STORMBOX,
	AOT_ADMIN_SET_QQTENYEARFLAG,
	AOT_ADMIN_HAPPYLIB_AWARD,

	AOT_ADMIN_COUNTRYCHATUI,
	AOT_ADMIN_COUNTRYCHATMSG,
	AOT_ADMIN_COUNTRYCHATMASK,

    AOT_ADMIN_MILITARYSOUL_POINT,

    AOT_ADMIN_SETSEVENDAYSLOGONDAYS,
	AOT_ADMIN_NPCACTIVERANK,

	AOT_ADMIN_TOWERHANCE,
	AOT_ADMIN_SETTOWERHANCE,

    AOT_ADMIN_ADDYASUIQIAN,

	AOT_ADMIN_BDNTIMES,

    AOT_ADMIN_ADDJAMMER,

    AOT_ADMIN_MEDALHONOROPT,

	AOT_ADMIN_SITETEST,

    AOT_ADMIN_SETCOSTCREDITGIFTINFO,
//	AOT_ADMIN_SITECREDITRELOAD,
};
enum Star_User_Group
{
	Star_Group_A, //����<=100
	Star_Group_B, //����<=1000
	Star_Group_C, //����<=5000
	Star_Group_D, //����>5000
	Star_Group_Cnt,
	Star_Group_All = Star_Group_Cnt, //�����û�
};
enum Admin_SetGMTest_Value
{
	Admin_SetGMTest_Value_INVITE = 0,	//�������
	Admin_SetGMTest_Value_SENDGIFT,		//��������
	Admin_SetGMTest_Value_GETGIFT,		//��������
};

enum Web_TX_MissionOperate
{
	WEB_TX_MISSION_OPT_START = 0,
	WEB_TX_MISSION_OPT_MARK,
	WEB_TX_MISSION_OPT_QUERY,
	WEB_TX_MISSION_OPT_MARK_TOPLAT,
};

enum GiftDealType
{
	Gift_Ask=0,			//��ȡ������	
	Gift_Send,			//���͵�����
	Gift_Resend,		//����������
	Gift_Send7Day,		//7������

	Gift_System = 10,		//ϵͳ������web�����
	Gift_Friend = 11,		//������ѽ���
};

enum SysGiftID
{
	SG_CallFrd = 10000,
	SG_InviteFrd,
	SG_WebGift,
	SG_InviteFrd_Gift,
	SG_SendGitf_Self,
	SG_AskGift_Self,
};


enum UserSource
{
	RC_Coin = 0,
	RC_Mineral,
	RC_Cash,
	RC_Exp,
	RC_Score,
	RC_Cnt,
};

enum UserSource_CostType
{
	E_UserSource_CostType_None = 0,					//��Ч
	E_UserSource_CostType_TREATSTRATEGIC,			//����ս�Ա�Ӫ
};

enum UserSource_AddType
{
	E_UserSource_AddType_None = 0,					//��Ч
	E_UserSource_AddType_TREATSTRATEGIC,			//ǲɢս�Ա�Ӫ
	E_UserSource_AddType_PVEGIFT,					//PVE���
};

enum DelArmyType
{
	DA_Unknow = 0,
	DA_Die,
	DA_OutCircle,
	DA_Sell,
	DA_NPC,
	DA_Admin,
	DA_Die_Base,
	DA_NPCArmyGroup,
	DA_Strategic,
	DA_TYPEALL,
	DA_NPCBattle,
};

enum DelArmyState
{
	DAS_NONE = 0,	//����ɾ��
	DAS_NEEDDEL,	//ɾ��
};

enum BattleModifyCheck
{
	E_BattleModifyCheck_NULL = 0,
	E_BattleModifyCheck_AtkArmy_Defence,
	E_BattleModifyCheck_DefenceArmy_Atk,
	E_BattleModifyCheck_DefenceBld_Atk,
	E_BattleModifyCheck_DefenceArmy_NPC,
};


//��������
enum Restraint_Type
{
	Rst_To_Foot,
	Rst_To_Tank,
	Rst_To_Plane,
	Rst_To_Build,
	Rst_Cnt,      //�����������ֵ
	Rst_To_Hero = Rst_Cnt,
	Rst_ArmyCnt,  //�������Կ������ֵ
};
//��������
enum Admiral_Prop_Type
{
	AdmiralProp_AddAtk = 0,
	AdmiralProp_AddDef,
	AdmiralProp_AddHP,
	AdmiralProp_AddCrt,
	AdmiralProp_Cnt,
};

//���������鼮����
enum WPC_BookType
{
	WBook_Bag = 0,		//�����У�δʹ��
	WBook_Admiral,	   //����
	WBook_TypeMax,
};
//���������鼮������������


//�������Ļռ�����
enum WPC_EmblemType
{
	WE_Bag = 0,		//�����У�δʹ��
	WE_GunTurret,	//��ǹ��
	WE_MortarTower,	//������
	WE_OtherBld,	//��������    
	WE_LaserTower,	//������
	WE_GiantCanon,  //��������
	WE_TypeMax,		
};

//�������ĸ���������
enum WPC_JammerType
{
    WJammer_Bag = 0,    //����
    WJammer_Base,
    WJammer_Army,
};

//����ѫ�¼����bufЧ������
enum MedalHonor_Ach_BufType
{
    MH_AF_BT_ThewReduce = 1,
};

//����ѫ�µ�����
enum MedalHonor_BagType
{
    MH_BT_Bag = 0,
    MH_BT_Admiral,
};

enum MedalHonor_DecorateType
{
    MH_DecorateType_Team = 1,   //ս��
    MH_DecorateType_Army,       //����
    MH_DecorateType_Country,    //����
    MH_DecorateType_Allies,     //ͬ��
    MH_DecorateType_UNO,        //���Ϲ�
    MH_DecorateType_MAX,
};

enum MHItemDecorateType
{//��ѫ����0Ϊ������ѫ 1Ϊѫ����ѫ
    MH_IDT_Item = 0,
    MH_IDT_Credit,
};

const int MAX_JAMMER_NUM = 6;
const int JAMMER_SPACE_ADD = 1;

enum WPC_JAMMERPropType
{
    WPC_JAMMERProp_UnKnow = 0,
    WPC_JAMMERProp_ReduceAtk,
    WPC_JAMMERProp_ReduceSpeed,
    WPC_JAMMERProp_ReduceCrit,
    WPC_JAMMERProp_ReduceCritDamage,
    WPC_JAMMERProp_ReduceToBuild,

    WPC_JAMMERProp_AllCnt,
};

//����������װ������������
enum WPC_COMAddPropType
{
	WPC_Unknow = 0,
	WPC_AddAtk,			//�ӹ�����
	WPC_AddHP,			//��Ѫ��
	WPC_AddRange,		//�����
	WPC_AddSpeed,		//���ٶ�
	WPC_AddTurnSpeed,	//��ת���ٶ�
	WPC_AddToPlane,		//�ӶԷɻ�����
	WPC_AddToTank,		//�Ӷ�̹�˿���
	WPC_AddToBld,		//�ӶԽ�������
	WPC_AddToFoot,		//�ӶԲ�������
	WPC_AddDamageDef,	//���˺�����
	WPC_AddCrtDef,		//�ӱ�������
	WPC_AddCrtDamage,	//�ӱ����˺�
	WPC_AddCrt,			//�ӱ���
	WPC_AddToHero,			//�Ӷ�Ӣ�ۿ���
	WPC_AddToPlaneDef,		//�ӶԷɻ�����
	WPC_AddToTankDef,		//�Ӷ�̹�˷���
	WPC_AddToFootDef,		//�ӶԲ�������
	WPC_AddToHeroDef,		//�Ӷ�Ӣ�۷���

    WPC_AddCnt,
    //���꼼�����ӵ���������
    WPC_AddGuardRange = WPC_AddCnt, //���Ӿ��䷶Χ
    WPC_DeftGuardRange,             //�������䷶Χ
    WPC_DeftDamage,                 //�����˺�
    WPC_DeftCritRate,               //����������
    WPC_DeftCritRange,              //������������
    WPC_AllCnt,
};

enum WPC_JammerDeftType
{
    //
};

enum WPC_EmblemAddPropType
{
    WPC_EmblAdd_Unknow = 0,
    WPC_EmblAdd_AddHp,                  //����Ѫ��
    WPC_EmblAdd_AddAtkToFoot,           //���ӶԲ����˺�
    WPC_EmblAdd_AddAtkToPlane,          //���ӶԷɻ��˺�
    WPC_EmblAdd_AddAtkToTanke,          //���Ӷ�̹���˺�
    WPC_EmblAdd_AddPlaneDef,            //���ӶԷɻ�����
    WPC_EmblAdd_AddTankDef,             //���Ӷ�̹�˷���
    WPC_EmblAdd_AddFootDef,             //���ӶԲ�������
    WPC_EmblAdd_AddRange,               //�������
    WPC_EmblAdd_AddMotorFireRate,       //���Ӱ����ߵ�����
    WPC_EmblAdd_AddMetalRate,           //���ӽ�������
    WPC_EmblAdd_AddOilRate,             //����ʯ�Ͳ���
    WPC_EmblAdd_ExpEmb,                 //����ռ�
    WPC_EmblAdd_AddAtkToAllArmy,        //���Ӷ����б��ֹ���
    WPC_EmblAdd_AddAllArmyDef,          //���Ӷ����б��ַ���

    //�������ӵĻռ�����
    WPC_EmblAdd_AddMineDamageToFoot,          //���ӵ��׶�ʿ���˺�
    WPC_EmblAdd_AddMineDamageToTank,          //���ӵ��׶�̹���˺�
    WPC_EmblAdd_AddMineDamageToHero,          //���ӵ��׶�Ӣ���˺�
    WPC_EmblAdd_AddAtkToHero,           //���Ӷ�Ӣ���˺�
    WPC_EmblAdd_DeftMineDamageToFoot,   //�������׶�ʿ���˺�
    WPC_EmblAdd_DeftMineDamageToTank,   //�������׶�̹���˺�
    WPC_EmblAdd_DeftMineDamageToHero,   //�������׶�Ӣ���˺�
    WPC_EmblAdd_DeftGunTurretAtkToFoot, //������ǹ����ʿ������
    WPC_EmblAdd_DeftGunTurretAtkToTank, //������ǹ����̹�˹���
    WPC_EmblAdd_DeftGunTurretAtkToPlane,//������ǹ���Էɻ�����
    WPC_EmblAdd_DeftGunTurretAtkToHero, //������ǹ����Ӣ�۹���
    WPC_EmblAdd_DeftMortarTowerAtkToFoot,     //���������߶�ʿ������
    WPC_EmblAdd_DeftMortarTowerAtkToTank,     //���������߶�̹�˹���
    WPC_EmblAdd_DeftMortarTowerAtkToPlane,    //���������߶Էɻ�����
    WPC_EmblAdd_DeftMortarTowerAtkToHero,     //���������߶�Ӣ�۹���
    WPC_EmblAdd_ReduceHp,                   //����������Ѫ��
    WPC_EmblAdd_MaxType,
};

//���������������
enum WPC_BageType
{
	WB_Bag=0,
	WB_Base,
	WB_Army,
	WB_Tank,
	WB_Plane,
	WB_Hero,
	WB_TypeMax,
};
//Ӣ�ۼ���������������
enum HeroSkillType
{
	Hero_Skill_AddHP = 1,		//����������
	Hero_Skill_AddRange,		//�����
	Hero_Skill_AddDamage,		//���˺�
	Hero_Skill_AddSpeed,        //���ٶ�
	Hero_Skill_AddTurnAngle,	//��ת����ٶ�
	Hero_Skill_ToFoot,			//���ӶԲ�������(armyToArmy)
	Hero_Skill_ToTank,			//���Ӷ�̹�˿���(armyToTank)
	Hero_Skill_ToPlane,			//���ӶԷɻ�����(armyToAir)
	Hero_Skill_ToBld,			//���ӶԽ�������(armyToBuilding)
	
	Hero_Skill_AddCrt,          //�ӱ���
	Hero_Skill_AddCrtDef,       //�ӱ�������
	Hero_Skill_AddDamageDef,    //���˺�����
	Hero_Skill_AddArmyCount,    //�ӱ����˿�
	Hero_Skill_AddCrtDamage,    //�ӱ����˺�
	Hero_Skill_AddDamageAndDecHP,	//���ӹ�������������Ѫ

	Hero_Skill_AddDamageMinus = 17,	//���ٵз���Ӣ�۹�����
	Hero_Skill_MinusSpeed,		//�����ƶ��ٶ�
	Hero_Skill_MinusEnemyTankCrt,		//����̹�˱�����
	Hero_Skill_MinusEnemyTankDmg,		//���ٵз�̹�˶��ҷ�̹�˵Ĺ���
};
enum AddItemRet
{
	AR_Succ = 0,	//�ɹ�
	AR_TmpBag,		//��ʱ����
	AR_PartTmpBag,	//���ַ�����ʱ���������ֶ�ʧ
	AR_Fail,		//ʧ��
	AR_ITEMID,		//����id����
	AR_NUMLESS,		//�۵�����������
};

enum BagItemType
{
	Item_Unknow=0,
	Item_Normal,	//����
	Item_Package,	//���
	ITem_Box,		//����
	ITem_Special,	//�����߼�
	ITem_EquipItem,	//װ�������Ʒ
	Item_EquipBox,  //װ������
	Item_Exchange,  //����ȯ
};

enum ITEM_ID
{
	ITEM_ID_STRIKE_COMMAND	= 10004,
	ITEM_ID_COUNTRY_BOX		= 30028,
	ITEM_ID_BLOOD_TOOL		= 10042,
	ITEM_ID_JUNLING			= 10044,
    ITEM_ID_POKERS          = 10055,
    ITEM_ID_CHANGECARD      = 10056,
    ITEM_ID_CHANGBOX        = 20191,        //������� Ϊ���ƿ��Ĳ���
    ITEM_ID_DUELCARD        = 10057,        //��Ƭ������
	ITEM_ID_PROPERTYCARD        = 10062,   //����ͼֽ

    ITEM_ID_WARGAME_TRUCEPROTOL = 10068,        //��սЭ��
    ITEM_ID_WARGAME_FORCEBOOK = 10069,          //��ս��

    ITEM_ID_SUPERSTORM_TOKEN = 10070,           //����ǿ����

    ITEM_ID_MILITARYSOUL_RESETTOOL = 10071,         //���꼼�����õ���

    ITEM_ID_TELEPORT_SCROLL=10075,      //��ս���;���
};

enum WallChgClothType
{
	WallChgCloth_Free = 1,
	WallChgCloth_Credit,
};

enum UpdatePlat_Type
{
	UpdatePlat_Level=0,
	UpdatePlat_InviteFrdCnt,	//�ѷ���
	UpdatePlat_Capture,
	UpdatePlat_Vip,
};

enum SlaveRoomOpt
{//ս��Ӫ��ز���
	SO_TimeOut = 0,		//ʱ�䵽
	SO_Capture = 1,		//ռ��
	SO_Free,			//�ͷ�
	SO_BuySelf,			//����
	SO_LostSlaveByGainst,			//����
	SO_Rescue,			//���
	SO_Reave,			//����
	SO_LostSlaveByRescue,//��²�����˽��
	SO_LostSlaveBuReave,//ս������
	
};
enum ErrorInfo
{
	Error_Success	 = 0,	//�ɹ�
	Error_IsAttacked = 1,	//���ڱ�����
	Error_NoNPC,			//δ�ҵ�NPC
	Error_NoBase,			//δ�ҵ�����
	Error_Online,			//�������
	Error_NewProtected,		//���ֱ���
	Error_HurtProtected,	//�˺�����
	Error_AtkSelf,			//�����Լ�
	Error_BattleNotOver,	//ս����δ����
	Error_LeverError,		//�ȼ�����
	Error_AtkCntOverMax,	//���չ���һ����ҳ���3��
	Error_OnLineMore5Hour,	//���߳���5Сʱ
	Error_NofindSlaveRoom,	//δ�ҵ�ս��Ӫ
	Error_NoPos4SlaveRoom,	//ս��Ӫ����
	Error_OverMaxRescueCnt,	//��������ȴ���
	Error_OverMaxCaptureCnt,//�������ռ�����
	Error_HasCaptured,		//�Ѿ���ռ��
	Error_HasRescued,		//�Ѿ������
	Error_NoResuceID,		//�޽�����ID
	Error_NoReaveID,		//����ռ���ID
	Erroe_NoCaptureID,		//��ռ�����ID
	Erroe_IsCaptureding,	//���ڱ�ռ��
	Error_Strike,			//ǿ���ɹ�
	Error_NoStrikeCommand,	//û��ǿ����
	Error_LogoutProtected,  //���߱���ʱ��
	Error_NotJunling,
};

enum UseItemChannelType
{//ʹ����Ʒ����������������ʹ����Ʒ����
	UserItem_Unknow = 0,	//δ֪
	UserItem_By_BagItem,	//����ʹ����Ʒ
	UserItem_By_CountryBox,	//���ұ���
	UserItem_By_ArenaRank,	//���������а�
	UserItem_By_ActivityPush,//��������ͽ���
	UserItem_By_EquipBox,	//װ������
	UserItem_By_EquipDestroy,	//װ���ֽ�
	UserItem_By_ArenaWeek,	//������ÿ�ܻ�������
	UserItem_By_GuildSignUp, //����ս����
	UserItem_By_GuildBtl,	//����ս����
	UserItem_By_GuildBtlStorage, // ����սս��Ʒ����
	UserItem_By_GuildEmbrave,	//����ս

	UserItem_By_VipLevelUp, // ����սս��Ʒ����
	UserItem_By_Purchase, // �̳ǹ���
	UserItem_By_Web,     //web����
	UserItem_By_BloodBtl,	//Ѫս
	UserItem_By_RegionArena,	//��������������
	UserItem_By_Battle,		//PVEս��
	UserItem_By_UniteRegion, //�Ϸ����
	UserItem_By_RegionCountry, //������Ӫս	
    UserItem_By_BaseExplore,    //����̽�� ���⽱��
	UserItem_By_Gvg, //gvg	
    UserItem_ByDailyLand,       //ÿ�յ�½��ȡ���
};

enum UserStat	//���״̬
{	
	US_CanAttack=0,
	US_NewProtected,	//���ֱ���
	US_HurtProtect,		//�˺�����
	US_IsAttaccking,	//���ڱ�����
	US_Destroy,			//���ر���ȫ�ݻ�
};
enum StarState	//��������е�״̬
{
	SS_Unknow = 0,
	SS_CanAttack,		//���Ա�����
	SS_HightLV,			//�Է��ȼ��ߣ����Թ���
	SS_LowLVProted	= 3,//�͵ȼ�����
	SS_CanRevenge	= 4,//�ɸ���
	SS_Protected	= 5,//�˺�����
	SS_NewProtected = 6,//���ֱ���
	SS_IsAttacking	= 7,//���ڱ�����
	SS_Unknow8,
	SS_LV2Hight,		//�ȼ�����
	SS_BaseDestroy	= 10,//���ر��ƻ�
	SS_MORE5ONLINE	= 11,//��������5Сʱ
	SS_LogoutProtected	= 12,//���߱���
};

enum MineOpterate
{
	//1:����������	2��������:��		5:��������
	//4:��������		5:��������			
	//11:ѫ�����׼���
	//12.ѫ������	
	//13:ѫ����������
	MO_PutMine	= 1,			//����
	MO_Produce,		//���ɵ���
	MO_UnProduce,	//�������ɵ���
	MO_Upgrade,
	MO_UnUpgrade,	
	
	MO_CreditProduce = 11,
	MO_CreditUpgrade,
	MO_CreditAccUpgrade,
	MO_UnlockVipMine,	//�����������

};

enum TrapOpterate
{
	//1:������������	2�������壻		5:��������
	//4:��������		5:��������			
	//11:ѫ���������
	//12.ѫ������	
	//13:ѫ����������
	MO_PutTrap	= 1,			//������
	MO_ProduceTrap,		//��������
	MO_UnProduceTrap,	//������������
	MO_UpgradeTrap,
	MO_UnUpgradeTrap,	

	MO_CreditProduceTrap = 11,
	MO_CreditUpgradeTrap,
	MO_CreditAccUpgradeTrap,
	MO_UnlockVipTrap,	//������������
};

enum BuildingOpterate
{
	//1:�����			2:���������		3:���죻				4:�������죻
	//5:����������	6:��������������7:�Ƽ�����			8��ȡ���Ƽ�����
	//9:ά�ޣ�			10:��פ��				11:	�����ɣ�		12:	��ȡ��	
	//13��ȫ����ȡ��14���ƶ���			15:���ü����		16:ս������

	//ѫ�����
	//31:ѫ�½���		32��ѫ������		33��ѫ�¿Ƽ�����
	//34:ѫ�½������		35��ѫ����������		36��ѫ�¿Ƽ���������		
	//37:ѫ���������
	BO_UnKnow=0,
	BO_Produce,			//���ɱ���
	BO_UnProduce,	
	BO_Create,			//����
	BO_UnCreate,		//��������
	BO_Upgrade,			//����
	BO_UnUpgrade,		//ȡ������
	BO_ArmyUpgrade,		//���֡��Ƽ�����
	BO_UnArmyUpgrade,	//ȡ�����֡��Ƽ�����
	BO_Maintain,		//ά��(��Ч)
	BO_Enter,			//��פ
	BO_OverLoading,		//����
	BO_GetRes,			//��ȡ
	BO_GetAllRes,		//ȫ����ȡ
	BO_Move,			//�ƶ�
	BO_SetPoint,		//���ü����
	BO_SellTank,		//ս������
	BO_MaintainAll,		//ȫ��ά��(��Ч)
	BO_CreateMushRooms,	//������������
	BO_PickMushRooms,	//��ȡ��������
	BO_Monsterbaiter,	//��ս��ϰ��
	BO_UpdateRemouldLvl,//����ȼ�����
	BO_SlaveRoomGetRes, //ս��Ӫ��ȡ��Դ
	BO_SlaveRoomFree,	//ս��Ӫ�ͷ�


	BO_CreditCreate=31,			//ѫ�½���
	BO_CreditUpgrade,			//ѫ������
	BO_CreditArmyUpgrade,		//ѫ�¿Ƽ�����
	BO_CreditAccCreate,			//ѫ�½�������
	BO_CreateAccUpgrade,		//ѫ����������
	BO_CreateAccArmyUpgrade,	//ѫ�±�����������
	BO_CreditAccArmyCreate,		//ѫ�±��ֽ������
	BO_CreditMaintain,			//ѫ��ά��
	BO_CreditMaintainAll,		//ѫ��ȫ��ά��
	BO_CreditMaxEnergy,			//��ս��ϰ���������
	BO_CreditSlaveRoomHit,		//ս��Ӫ����
	BO_CreditSlaveRoomRansom,	//ս��Ӫ����

	BO_UpdateBldPlayReward = 61,//��������18
	BO_UpdateBldPlayReward2,	//��������180

	BO_UpdateBldChangeStyle,	//��������

	BO_UpdateBldPlayReward_Army,//��������18����
	BO_UpdateBldPlayReward2_Army,//��������180����

	BO_UpdateBldPlayReward_Science,//��������18�Ƽ�
	BO_UpdateBldPlayReward2_Science,//��������180�Ƽ�

	BO_Chengjiu_Res = 70,//�ɾͽ�����Դע��
	BO_Chengjiu_Credit = 71,//�ɾͽ���ѫ��ע��

	BO_TrapAddArmy = 72,//�����м����
	BO_TrapDelArmy = 73,//�����зֽ��
	BO_TrapCaptive_Res = 74,//����ʹ����Դ��²��

	BO_HeroLevelUp,		    //Ӣ������
	BO_UnHeroLevelUp,	    //ȡ��Ӣ������
	BO_CreditHeroLevelUp,	//ѫ��Ӣ������
	BO_AccHeroLevelUp,	    //ѫ��Ӣ����������
	BO_AccHeroRecover,	    //Ӣ�ۼ��ٻظ�
	BO_HeroRelive,	    //Ӣ�۸���
	BO_CreditHeroRelive,	    //ѫ��Ӣ�۸���
	BO_AllHeroRelive,	    //ѫ��Ӣ�۸���
	BO_CreditAllHeroRelive,	    //ѫ��Ӣ�۸���
	BO_TowerEnhance,	//������ǿ��
};

enum UpdateOperate
{
	UO_Unknow=0,
	UO_BldUpgrade,		//����������������
	UO_ArmyProduce,		//�����������
	UO_ArmyUpgrade,		//�����������
	UO_Maintain,		//�������
	UO_MineProduce,		//�����������
	UO_MineUpgrade,		//�����������
	UO_AdminAddArmy,	//����Ա�ӱ�	
	UO_AdminDelArmy,	//����Ա�۱�
	UO_AdminAddBld,		//����Ա�ӽ���	
	UO_AdminDelBld,		//����Աɾ����
	UO_UpdateInfo,		//ͬ������
	UO_SlaveRoom,		//ͬ��ս��Ӫ����
	UO_OverLoad,		//�˵�վ������
	UO_HeroUpgrade,		//Ӣ������
	UO_HeroRecover,		//Ӣ��Ѫ���ظ�
	UO_TrapProduce,		//�����������
	UO_TrapUpgrade,		//�����������
};

///ֽ����ɫ����
enum PokerColorType
{
    POKER_SPADE = 0,
    POKER_HEART,
    POKER_CLUB,
    POKER_DIAMOND,
};

///ֽ�Ƶ�����
enum PokerHandShowType
{
    POKER_HS_UNKNOW = 0,
    POKER_HS_Single = 1,            //ɢ��
    POKER_HS_OnePair,               //һ��
    POKER_HS_TwoPair,               //����
    POKER_HS_Three,                 //����
    POKER_HS_Straight,              //˳��
    POKER_HS_Flush,                 //ͬ��
    POKER_HS_FullHouse,             //��«
    POKER_HS_Four,                  //����
    POKER_HS_StraightFlush,         //ͬ��˳
    POKER_HS_RoyalFlush,            //�ʼ�ͬ��˳
    POKER_HS_FIVE,                  //5��

    POKER_HS_Five,                  //5������ǰֻ��ͨ�����ƻ��
};

///ֽ���ݲ�������
enum PokerOptType
{
    POKER_UNKOWN_OPT = 0,                   //δ֪����
    POKER_CURRENT_GAMBLING = 1,             //��ȡ��ǰ���ƾ�
    POKER_DEAL_POKERS,                      //����
    POKER_SHOW_POKERS,                      //����
    POKER_REDEAL_POKERS,                    //���·���
    POKER_REPLACE,                          //����
    POKER_EXCHANGE,                         //�һ�
    POKER_REFRESHLIST,                      //ˢ�¶Ի��б�
};

///ֽ���ݿ��ƽ��
enum PokerShowRtn
{
    POKER_Show_Win = 0,                  //��ʤ
    POKER_Show_Fail,                     //ʧ��
    POKER_Show_Deuce,                    //ƽ��
};

enum OperateRtn
{
	OR_Success = 0,		//��ȷ
	OR_Unknow,			//δ֪����
	OR_NoCenter,		//δ�ҵ�ָ������
	OR_NoBuilding,		//�޽�����
	OR_CreditError,		//�ͻ��˷��������ж�ѫ������һ��
	OR_ErrorOptType,	//����Ĳ�������
	OR_NoEnoughRes,		//��Դ����
	OR_NoEnoughCredit,	//ѫ�²���
	OR_OutNum,			//�����������
	OR_WrongType,		//����Ľ�������
	OR_NoEnoughBld,		//���н�������������
	OR_NoGroup,			//����������
	OR_CreateError,		//����ʧ��
	OR_DeleteError,		//ɾ��ʧ��
	OR_WrongArmy,		//����ı���
	OR_UnlockArmy,		//����δ����
	OR_OutArmyStorage,	//�˿ڳ�������
	OR_NoFindArmy,		//δ�ҵ�����
	OR_CreateFinish,	//�������ѽ������
	OR_MaxLevel,		//�ﵽ��ߵȼ�
	OR_UpdateFinish,	//�������
	OR_NeedUnlockArmy,	//�����ǰ�ñ���
	OR_NeedBldLevel,	//������ȼ�����
	OR_CanNotSell,		//�޷�����
	OR_NoMineFatcroy,	//�޵��׹���
	OR_NoFindMine,		//δ�ҵ�����
	OR_MineExit,		//�����Ѵ���
	OR_TimeError,		//ʱ�����
	OR_NoNeedMaintain,	//����Ҫά��
	OR_ErrorBuyType,	//�������Ʒ����
	OR_MushRoomExist,	//���������Ѿ�����
	OR_NoMushRoomSt,	//�ͻ���δ���ͱ�����������
	OR_NoMushRoom,	//δ�ҵ���������
	OR_BldDestroy,	//����������
	OR_NotVIP,		//���ǻ���
	OR_PlayRewardFailed,	//��������ʧ��
	OR_RemouldUnOpen,	//��ظ���δ����
	OR_RemouldNeedLvl,	//�����ȼ�����
	OR_RemouldNeedScience,	//�Ƽ��ܺͲ���
	OR_RemouldNeedHonour,	//��������
	OR_RemouldNeedCredit,	//ѫ�²���
	OR_RemouldCostCredit,	//��ѫ��ʧ��
	OR_RemouldCostHonour,	//������ʧ��
	OR_RemouldFail,			//����ʧ��
	OR_RemouldFail_LvlLow,	//����ʧ�ܣ�����
	OR_YellowBld_MustYellow,//�����ǻ����û�
	OR_YellowBld_MustYellowToday,//�����ǵ����ֵ�����ѻ����û�
	OR_SpecialItemNotEnough,//������Ʒ������Ҫ��
	OR_SpecialItemCostError,//������Ʒ�۳�ʧ��
	OR_OutTime,				//����ʱ��
	OR_NoSlaveRoom,			//û�ж�Ӧ��²
	OR_CanNotChgStyle,		//���ܸ���
	OR_ShopBuyMoreMax,		//�̵깺�򳬹�����
	OR_NoEnoughFeats,		//û���㹻�Ĺ���
	OR_PlayerLevelLow,		//��ҵȼ���
	OR_WaiGua,				//���
	OR_PlayerLvlErr,		//��ҵȼ�����
	OR_NoEnoughScore,		//û���㹻����������
	OR_NoEnoughGScore,		//û���㹻�Ĺ��ṱ��
	OR_NoGuild,				//δ�ҵ�����
	OR_GuildShopUpLimit,	//�ﵽ������Ʒ����
	OR_NoPermit,			//��Ȩ��
	OR_UnLockPassWord,			//��������δ����
	OR_TrapUnActive,			//����ǻ�Ծ״̬
	OR_CanNotInterTrapArmy,			//���ܵ����ݽ�
	OR_NotAchiveVipLevel,         //Vip�ȼ�����
	OR_VipExpired,         //Vip����

    ///ֽ���ݲ������
    OR_InsufficientPoker,              //ֽ��������
    OR_NoDealPokers,                   //��δ����
    OR_NoReplaceCard,                  //ѫ�²��� �޷�����
    OR_InsufficientPoints,             //���ֲ���
    OR_NoExchange,                     //��ָ���ĶԻ���Ʒ
    OR_WrongCard,                      //��ָ������
    OR_OutEchangeLimit,                //�һ������޶�
    OR_NoEnoughPoints,                 //���ֲ��� ����ˢ�¶һ��б�ʱʹ��

    //��Ƭ����
    OR_NoEnoughDuelCard,                //��Ƭ����������
    OR_NoMatchingOpponent,              //û��ƥ��Ķ���
    OR_WAITRIVALCHOOSE,                 //�ȴ�����ѡ��
    OR_WrongActiveTime,                 //�ʱ��δ��
	OR_NoHero,         //Ӣ�۲�����
	OR_HeroMaxLevel,   //Ӣ�۵������ȼ�
	OR_HeroIsInTrain, //Ӣ������ѵ������
	OR_HeroNotInTrain,   //Ӣ�۲���ѵ����
	OR_HeroTrainIndexError,      //ѵ��λ����
	OR_HeroTrainLock,   //ѵ��λ����
	OR_HeroFinishTrain,   //ѵ�����
	OR_HeroNotDie,      //Ӣ��û������
	OR_HeroFullHP,      //Ӣ����Ѫ
	OR_HeroIsDie,      //Ӣ������

    //���к���
    OR_NoEnoughTopUP,           //δ�ﵽ��ȡ����
    OR_HasGetGift,              //�Ѿ���ȡ������

    //vipÿ�����
    OR_HasGetVipDailyGift,      //�Ѿ���ȡ��vipÿ��������

    //�쾯�¿�
    OR_HasGetDayCredit,         //�Ѿ���ȡÿ��ѫ��

    //���˽�
    OR_VDG_SEND_OVER,         //����ÿ�շ����޶�
    OR_VDG_RECV_OVER,         //����ÿ�ս����޶�
    OR_VDG_DIF_REGION,        //��ͬ��
    OR_VDG_NULL_RECV,         //������ID��Ч
    OR_VDG_SENDSELF,          //���͸��Լ�
    OR_VDG_SENDSUCC,          //���﷢�ͳɹ�

    //VIP�¿�
    OR_HasGetVipMonthCardGift,  //�Ѿ���ȡ��VIP�¿���ÿ�ս���

    //��ʱ������
    OR_HasRentSameWeaponCom,    //�Ѿ����ù�ͬ�������

    //̽�������
    OR_ExploreOutNum,           //����̽������

    //ȫ��齱
    OR_AllMen_NoEnoughPoint,
    OR_AllMen_HasGetGift,

    //�������λ��
    OR_ExtraWPC_OutMaxNum,      //�����������
    OR_ExtraWPC_WrongWPCLevel,  //��������ĵȼ�����

    //ÿ�ճ�ֵ�齱
    OR_DailyRechargeLottery_HasRaffle,      //�Ѿ���ɳ齱
    OR_DailyRechargeLottery_NoEnoughCredit, //��ֵ��Ȳ���

    //�ռ����
    OR_BackFlow_HasGetGift,         //�Ѿ���ȡ����
    OR_BackFlow_NeedMoreLimit,      //δ�ﵽ����

    //ÿ��ǩ��
    OR_DailySignIn_HasSignIn,       //�Ѿ�ǩ��
    OR_DailySignIn_hasGetGift,      //�Ѿ���ȡ�ۼ�ǩ������
    OR_DailySignIn_WrongDay,        //���ܲ�ǩû��������

    //��������������Ҫ����ȼ�
    OR_NeedGuildLv,     //����ȼ�����
	OR_TowerEnhance_TypeErr,		//������ǿ��,������ǿ�����ʹ���
	OR_TowerEnhance_ELvel,			//ǿ�����ʹ���,��Ҫ���ߵȼ�

	//����
	OR_NoTrapFatcroy,	//�����幤��
	OR_NoFindTrap,		//δ�ҵ�����
	OR_TrapExist,		//�����Ѵ���
};
//����ؽ�� ͨ��
enum EventResult
{
	ER_Success,			//�ɹ�
	ER_Plat_Error,		//ƽ̨����ȷ
	ER_Repeat_Fetch,	//�ظ���ȡ
	ER_Unkown_Error,	//δ֪����
	ER_Time_Error,		//ʱ�����
	ER_Table_Error,		//�����
	ER_Credit_Error,	//ѫ�²���	
	ER_BuyCnt_Error,	//����Ĵ�������
	ER_Fetcher_Error,	//��ȡ�˴���

};
//�������
enum GiftType
{
	GT_NewReCall_Gift =1,  //Ӣ�ۻع�
};

enum Army_Group
{
	ArmyGroup_Error= 0,
	ArmyGroup_Foot,
	ArmyGroup_Tank,
	ArmyGroup_Plane,
	ArmyGroup_NormalCnt, //��ͨ��������
	ArmyGroup_Hero_erth = ArmyGroup_NormalCnt,
	ArmyGroup_Hero_air,
	ArmyGroup_Cnt,
};

//��������
enum Building_Group
{
	BldGroup_Upgrade = 0,	//���졢��������
	BldGroup_Count,			//��������
};

//�������ͣ�
enum Building_Type
{
	BLD_ERROR			= 0,
	BLD_Mine			= 24,         //����,�����ڼ���flash�ӿڣ������������в����ڽ���

	BLD_Metal_Factory   = 1,          //��������              
	BLD_Oil_Pump        = 2,          //�;�                  
	BLD_Metal_Storage   = 3,          //�����ֿ�              
	BLD_Oil_Storage     = 4,          //ʯ�Ͳֿ�              
	BLD_Mine_Factory    = 5,          //���׹���              
	BLD_Power_Plant     = 6,          //���糧                
	BLD_Junkyard        = 9,          //���չ���              
	BLD_War_Room        = 11,         //�������              
	BLD_Airfield        = 13,         //��ָ��                
	BLD_Command_Center  = 14,         //ָ������              
	BLD_Wall            = 17,         //ǽ                    
	BLD_GoGo_Bar        = 19,         //��ս��ϰ��            
	BLD_Mortar_Tower    = 20,         //������̨              
	BLD_Gun_Turret      = 21,         //��ǹ��                
	BLD_Bunker          = 22,         //����                         
	BLD_Academy         = 26,         //����ѵ��Ӫ            
	BLD_Barracks        = 29,         //������                
	BLD_War_Factory     = 30,         //ս������              
	BLD_Tech_Center     = 31,         //��սʵ����
	BLD_Yellow_Gun_Turret = 41,		  //�����ǹ��
	BLD_Weapon_Center		= 42,				  //��������
	BLD_CamoMortar_Tower	= 43,     //αװ������̨              
	BLD_CamoGun_Turret		= 44,     //αװ��ǹ��
	BLD_SlaveRoom			= 45,		//ս��Ӫ
	BLD_StrategicCamp		= 46,		//ս�Ա�Ӫ
	BLD_TowerofPisa			= 47,		//����б��
	BLD_Eiffel				= 48,		//���ƶ�����
	BLD_BigBen				= 49,		//����
	BLD_Liberty				= 50,		//����Ů����
	BLD_RedSquare			= 51,		//�쳡
	BLD_StateBuilding		= 52,		//�۹�����
	BLD_PrisimTower		    = 53,		//������
	BLD_VipTower		    = 54,		//VIP�����ߵ�����
	BLD_Trap		        = 55,		//ս��������
	BLD_Hero_Center		    = 56,		//Ӣ�ۼ�̳
    BLD_MagneticGyro        = 57,       //�������
    BLD_TrinketSculpture    = 58,       //Ӣ�ۻ��µ���
	BLD_WarCollege			= 59,		//ս��ѧԺ
	BLD_GiantCanon			= 60,		//��������
	BLD_TrapMaker			= 61,		//�ֽ����쳧
	BLD_StaticTrap			= 62,		//��ֹ����
	BLD_ExplosiveTrap		= 63,		//��ը����
	BLD_MAX_TYPE_COUNT,				  //�������͵����ֵ
};

enum JunGongType
{
	JunGong_Unknow = 0,
	JunGong_Admin,		//����Ա
	JunGong_WPC,		//��������
	JunGong_Admiral,	//�ݷý���
};

enum CREDIT_TYPE_DEF
{
	CREDIT_TYPE_DEF_ADMIN = 0,		//0:����Ա��ѫ�� 
	CREDIT_TYPE_DEF_BUY,			//1������ѫ�� 
	CREDIT_TYPE_DEF_ASKFRIEND,		//2��������� 
	CREDIT_TYPE_DEF_TIAOFU,			//3:����� 
	CREDIT_TYPE_DEF_WEB,			//4:web� 
	CREDIT_TYPE_DEF_GIFT,			//5:���� 
	CREDIT_TYPE_DEF_DEFENSENPC,		//6:����NPC
	CREDIT_TYPE_DEF_NEWCOMER,		//7:��������
	CREDIT_TYPE_DEF_PLATINTIVE,		//8:�������
	CREDIT_TYPE_DEF_EXPLORE,		//9��̽��
	CREDIT_TYPE_DEF_YELLOW,		    //10������
	CREDIT_TYPE_DEF_BATTLE,		    //11��ս��
	CREDIT_TYPE_DEF_ITEM,		    //12��ʹ����Ʒ
	CREDIT_TYPE_DEF_HOLIDAY_DRAW,   //13�����ճ齱
	CREDIT_TYPE_DEF_REGET,			//14����������ʧ��ѫ�»ָ�
	CREDIT_TYPE_DEF_PVEGIFT,		//15: PVE�������
	CREDIT_TYPE_DEF_FRIENDEXPLORE,	//16: ����̽�����
	CREDIT_TYPE_DEF_UNKNOW,			//17��δ֪
	CREDIT_TYPE_DEF_SELCOUNTRY,		//18��ѡ�������ѫ��
	CREDIT_TYPE_DEF_COUPON_DRAW,	//19����ȯ�齱
	CREDIT_TYPE_DEF_INTIVE_CREDIT,	//20���������
	CREDIT_TYPE_DEF_ITEM_BOX1,		//21��װ��������1
	CREDIT_TYPE_DEF_ITEM_BOX2,		//22��װ��������2
	CREDIT_TYPE_DEF_ITEM_BOX3,		//23��װ��������3
	CREDIT_TYPE_DEF_EXPLORE_1,		//24��Ұ��̽��
	CREDIT_TYPE_DEF_EXPLORE_2,		//25������̽��
	CREDIT_TYPE_DEF_EXPLORE_3,		//26��ʵ����̽��
	CREDIT_TYPE_DEF_HOLIDAY_DRAW_CHICKEN,	//27����
	CREDIT_TYPE_DEF_HOLIDAY_DRAW_YUANDAN,	//28���ҵ�
	CREDIT_TYPE_DEF_CATHECTIC,				//29�����˾���
	CREDIT_TYPE_DEF_LEVEL_BUY,			//30���ȼ����
    CREDIT_TYPE_DEF_BUY_QPOINT,         //31:����Q����ȯ
    CREDIT_TYPE_DEF_WCBET,              //32:���籭���½���
    CREDIT_TYPE_DEF_MIDDLEYEAR,         //33:���к�����
    CREDIT_TYPE_DEF_MONTHCARD,          //34;�¿�ÿ����ȡѫ��
    CREDIT_TYPE_DEF_MOONCOMPENSATE,     //35��ħ�в�����3888ѫ��
    CREDIT_TYPE_DEF_DAILYSIGNIN,        //36:ÿ��ǩ��ѫ��
    CREDIT_TYPE_DEF_BUY_YEEPAY,         //37:yeepay��������ѫ��
    CREDIT_TYPE_DEF_WARGAME_RETURN,     //38:������ϰ����
	CREDIT_TYPE_DEF_DOUBLE_ELEVEN,      //˫ʮһ�ս�����ٽ���
    CREDIT_TYPE_DEF_REDENVELOPE,        //40:�������
    CREDIT_TYPE_DEF_ZHAOCAIJINBAO,        //41:�вƽ���
};

enum CREDIT_BUY_CHANNEL
{//ѫ�¹�������
    CREDIT_BUY_FROM_QQ = 0, //QQ����
    CREDIT_BUY_FROM_YEEPAY,
};

enum CREDIT_COST_TYPE_DEF
{
	CREDIT_COST_TYPE_DEF_ADMIN = 0,	//0:����Ա��ѫ��
	CREDIT_COST_TYPE_DEF_BUY_RES,	//1:������Դ
	CREDIT_COST_TYPE_DEF_BUY_ENL,	//2:������������
	CREDIT_COST_TYPE_DEF_BUY_BIP,	//3:������Դѹ��
	CREDIT_COST_TYPE_DEF_SHOP_BUY,	//4:�̳ǹ���
	CREDIT_COST_TYPE_DEF_RECOVERARMY,//5:һ������
	CREDIT_COST_TYPE_DEF_SCIENCEUP,	//6:�Ƽ�����
	CREDIT_COST_TYPE_DEF_ADDBUFF,	//7:��buff
	CREDIT_COST_TYPE_DEF_BLDCHG,//8:�����޸�
	CREDIT_COST_TYPE_DEF_WEAPONCENTER, //9:��������
	CREDIT_COST_TYPE_DEF_LEAVEMESSAGE, //10:����
	CREDIT_COST_TYPE_DEF_SLAVEROOM_RANSOM, //11:ս��Ӫ����
	CREDIT_COST_TYPE_DEF_SLAVEROOM_HIT, //12:ս��Ӫ����
	CREDIT_COST_TYPE_DEF_WALLCHGCLOTH,	//13:Χǽ��װ
	CREDIT_COST_TYPE_DEF_BAGUPGRADE,	//14:��������
	CREDIT_COST_TYPE_DEF_PLAYREWARD,	//15:����ר��
	CREDIT_COST_TYPE_DEF_VISITADMITAL,	//16:�ݷý���
	CREDIT_COST_TYPE_DEF_SHOPFORGIFT,	//17:��������
	CREDIT_COST_TYPE_DEF_STRATEGIC_TREET,	//18:ս�Ա�Ӫ����
	CREDIT_COST_TYPE_DEF_PVE_BUYTIMES,	//19:PVE�������
	CREDIT_COST_TYPE_DEF_LUCKYNUM,		//20:��������
	CREDIT_COST_TYPE_DEF_PRIVILEGE,	//����ħ��
	CREDIT_COST_TYPE_DEF_ARMYGRADE,  //22:���ֽױ�ת��
	CREDIT_COST_TYPE_DEF_CHGCOUNTRY,	//�л�����
	CREDIT_COST_TYPE_DEF_SPY,			//�������
	CREDIT_COST_TYPE_DEF_ADD_THEW,		//�ָ�����
	CREDIT_COST_TYPE_DEF_ADD_MORALE,	//�ָ�ʿ��
	CREDIT_COST_TYPE_DEF_LUCKY_WHEEL,	//��������ˢ��
	CREDIT_COST_TYPE_DEF_DAILY_COST,	//ÿ�ճ�ֵ����
	CREDIT_COST_TYPE_DEF_COM_DOWNGRADE, //����ֽ�
	CREDIT_COST_TYPE_DEF_ARENABUY,		//����������
	CREDIT_COST_TYPE_DEF_LUCKY_BOX,		//����ħ��
	CREDIT_COST_TYPE_DEF_EQUIP_MIGRATE,  //װ��ǿ���ȼ�ת��
	CREDIT_COST_TYPE_DEF_ZHUZI,  //ע��
	CREDIT_COST_TYPE_DEF_REDRAW,  //ע��
	CREDIT_COST_TYPE_DEF_WORLDARENABUY,		//���羺��������
	CREDIT_COST_TYPE_DEF_ACTIVE_SHOP,	//�����
	
	CREDIT_COST_TYPE_DEF_CREATE_GUILD,	//��������
	CREDIT_COST_TYPE_DEF_GUILD_CONTRIBUTE, //�������
	CREDIT_COST_TYPE_DEF_SEVENDAYS, //ʮһ�
	CREDIT_COST_TYPE_DEF_GUILD_EMBRAVE,		//����ս����
	CREDIT_COST_TYPE_DEF_LEVEL_BUY,		//�ȼ����
	CREDIT_COST_TYPE_DEF_BUYVIPCARD,		//��ͨVip
	CREDIT_COST_TYPE_DEF_SEVENDAYS_TARGET,	//����Ŀ��
	CREDIT_COST_TYPE_DEF_BOOK_COLLECTION_HALF,	//����鼮�ռ�
	CREDIT_COST_TYPE_DEF_BOOK_COLLECTION_WHOLE,	//ȫ���鼮�ռ�
	CREDIT_COST_TYPE_DEF_REGIONARENABUY,		//��������������
	CREDIT_COST_TYPE_DEF_PVE_BATTLE,	//PVEս��
	CREDIT_COST_TYPE_DEF_PVE_BUY,
    CREDIT_COST_TYPE_DEF_POKER_REPLACE,     ///ֽ���ݻ���
	CREDIT_COST_TYPE_DEF_VISITHERO,	//��ļӢ��
	CREDIT_COST_TYPE_DEF_HEROTREAT,	//����Ӣ��
	CREDIT_COST_TYPE_DEF_CHANGEEXP,	//Ӣ�۴���

	CREDIT_COST_TYPE_DEF_REGIONCOUNTRY_SPY,			//������ս�������
	CREDIT_COST_TYPE_DEF_REGIONCOUNTRY_ADD_THEW,	//������ս�ָ�����
	CREDIT_COST_TYPE_DEF_RESETPROPERTY,	//���ø���
	CREDIT_COST_TYPE_DEF_GVE_ADD_THEW,
	CREDIT_COST_TYPE_DEF_HEROARENABUY,		//Ӣ�۾���������
	CREDIT_COST_TYPE_DEF_RESOURCE_SEARCH20, //��Դ̽��
	CREDIT_COST_TYPE_DEF_RESOURCE_SEARCH100, //��Դ̽��100
	CREDIT_COST_TYPE_DEF_FLUSH_GUILDTASK,//ˢ�¹�������
	CREDIT_COST_TYPE_DEF_COMPLETE_GUILDTASK,//ѫ����ɹ�������

	CREDIT_COST_TYPE_DEF_GVG_EMBRAVE,		//GVG����
	CREDIT_COST_TYPE_DEF_GVG_STREAK,		//GVG������ʤ����

    CREDIT_COST_TYPE_DEF_EXPLORE_SECRET_ARSENAL,    //̽�����������ѫ��

    CREDIT_COST_TYPE_DEF_RENT_WEAPONCOM,            //�����������ѫ��

	CREDIT_COST_TYPE_DEF_RESET_WCSKILLTRAINTIMES,	//ս��ѧԺ���ü���ѵ������//����ȡ��
	CREDIT_COST_TYPE_DEF_BUY_WCSKILLTRAINTIMES,		//ս��ѧԺ������ѵ������

    CREDIT_COST_TYPE_DEF_DAILYSIGNIN,               //ÿ��ǩ����ǩ����ѫ��

    CREDIT_COST_TYPE_DEF_WARGAMEBUYTOKEN,           //������ϰ��
    CREDIT_COST_TYPE_DEF_WARGAME_DELAY,             //������ϰ����

    CREDIT_COST_TYPE_DEF_MILITARYSOU_LOCKSKILL,     //��������
	CREDIT_COST_TYPE_DEF_BUY_WQLB,					//����Χǽ���

	CREDIT_COST_TYPE_DEF_CREDITREBATE,				//С��ֵ���ۿ�
	CREDIT_COST_TYPE_BIG_GIFT,						//ʮһ�µľ�ݻ
    CREDIT_COST_TYPE_REDUCE_ADMIRALPROP,            //���ٽ�������
	CREDIT_COST_TYPE_DEF_TOWERENHANCE,				//������ǿ��
	CREDIT_COST_TYPE_DEF_TOWERENHANCE_2,
	CREDIT_COST_TYPE_DEF_TOWERENHANCE_3,			//webͳ���Ǳ���Ҫ���ȼ���
	CREDIT_COST_TYPE_DEF_CHRISTMAS_1,					//ʥ���ڻ�����һ��
	CREDIT_COST_TYPE_DEF_CHRISTMAS_2,					//ʥ���ڻ����ڶ���
	CREDIT_COST_TYPE_DEF_CHRISTMAS_3,					//ʥ���ڻ���������
    CREDIT_COST_TYPE_DEF_JUMPDEFENSECUT,                //��������������15��

    CREDIT_COST_TYPE_DEF_BOSS_EMBRAVE,		//bossս����
    CREDIT_COST_TYPE_DEF_BOSS_RE,			//bossս����

    CREDIT_COST_TYPE_DEF_MEDALHONOR_DECORATE,   //����ѫ����ѫ

    CREDIT_COST_TYPE_DEF_ZHAOCAIJINBAO,			//�вƽ�������ѫ��
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_1, //һԪ���
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_2, //һԪ���
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_3, //һԪ���
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_4, //һԪ���
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_5, //һԪ���
	CREDIT_COST_TYPE_DEF_ONE_YUAN_PURCHASE_6, //һԪ���

	CREDIT_COST_TYPE_STATIC_TRAP_UPGRADE,//��̬��������
	CREDIT_COST_TYPE_EXPLOSIVE_TRAP_UPGRADE,//��ը��������
	CREDIT_COST_TYPE_TRAP_ACC_PRC,//�����������
	CREDIT_COST_TYPE_STATICTRAP_ACC_UPGRADE,//��̬�����������
	CREDIT_COST_TYPE_EXPLOSIVETRAP_ACC_UPGRADE,//��ը�����������
};

enum CREDIT_COST_ARG2_DEF
{
	CREDIT_COST_ARG2_DEF_NULL = 0,			//0:��
	CREDIT_COST_ARG2_DEF_PLAYREWARD_ARMY,	//��������
	CREDIT_COST_ARG2_DEF_PLAYREWARD_BUILD,	//��������
};

enum FEATS_TYPE_DEF
{
	FEATS_TYPE_DEF_UNKNOW = 0,
	FEATS_TYPE_DEF_ADMIN,	//����Ա�ӹ�ѫ
	FEATS_TYPE_DEF_FIGHT,		//ս����ù�ѫ
	FEATS_TYPE_DEF_SlAVEROOM,	//ս��Ӫ��ȡ
	FEATS_TYPE_DEF_HIT,			//���׻��
	FEATS_TYPE_DEF_SELLEMBLEM,	//���ۻռ�
	FEATS_TYPE_DEF_SHARE,		//������Ϸ
	FEATS_TYPE_DEF_QPLUS,		//�ռ�������
	FEATS_TYPE_DEF_PVEADDHONOR,	//PVE
	FEATS_TYPE_DEF_DRAW,		//�齱
	FEATS_TYPE_DEF_EXPLORE,	   //����̽��
	FEATS_TYPE_DEF_ITEM,		//������Ʒ
	FEATS_TYPE_DEF_REWARD,		//
};

enum FEATS_COST_TYPE_DEF
{
	FEATS_COST_TYPE_DEF_SHOP = 0,	//�̵깺������
	FEATS_COST_TYPE_DEF_GUILD_CONTRIBUTE, //�������
	FEATS_COST_TYPE_DEF_BOSSBTL, //BOSSս����
};

enum ARENA_SC_COST_TYPE_DEF
{
	ARENA_SC_COST_TYPE_SHOP = 0,	//�̵깺������
};

enum EMBLEM_ADD_TYPE_DEF
{
	EMBLEM_ADD_TYPE_DEF_Admin = 0,	//����Ա
	EMBLEM_ADD_TYPE_DEF_SHOP,		//�̵깺��ռ�
	EMBLEM_ADD_TYPE_DEF_WPC_UP,		//������������
	EMBLEM_ADD_TYPE_DEF_WPC_TurnOff,//��������ж��
	EMBLEM_ADD_TYPE_DEF_WPC_GET,	//�������Ļ��
	EMBLEM_ADD_TYPE_DEF_ITEM_USE,	//��Ʒʹ��
	EMBLEM_ADD_TYPE_DEF_EXPLORE_GET,    //����̽�����
    EMBLEM_ADD_TYPE_DEF_POKER_REWARD,   //ֽ�ƶһ�
	EMBLEM_ADD_TYPE_DEF_EXTRA,   //����λ�ÿ�������

};

enum EMBLEM_COST_TYPE_DEF
{
	EMBLEM_COST_TYPE_DEF_Admin= 0,	//����Ա
	EMBLEM_COST_TYPE_DEF_WPC_UP,	//������������
	EMBLEM_COST_TYPE_DEF_WPC_TurnOn,//��������װ��
	EMBLEM_COST_TYPE_DEF_Destroy,	//����	
};

enum HONOR_TYPE_DEF
{
	HONOR_TYPE_DEF_ADMIN = 0,	//����Ա������
	HONOR_TYPE_DEF_FIGHT,		//ս���������
	HONOR_TYPE_DEF_CBKFRIEND,	//�����ٻػ������
	HONOR_TYPE_DEF_WEBGIFT,		//web�
	HONOR_TYPE_DEF_GIFT,		//����	
	HONOR_TYPE_DEF_Extend,		//�ƹ�
	HONOR_TYPE_DEF_DEFENSENPC,	//����NPC
	HONOR_TYPE_DEF_DEFENCEPLAYER,	//���ս�����ط��������
	HONOR_TYPE_DEF_NEWCOMER,	//�������
	HONOR_TYPE_DEF_EXPLORE,		//̽��
	HONOR_TYPE_DEF_SlaveRoom,	//ս��Ӫ
	HONOR_TYPE_DEF_PVEADDHONOR,	//PVE�������
	HONOR_TYPE_DEF_Item,		//ʹ����Ʒ	
	HONOR_TYPE_DEF_REWARD,		//	
    HONOR_TYPE_DEF_ScienceFailReturn,   //�����Ƽ�ʧ�ܷ���

};

enum OBJECT_TYPE
{
	OBJECT_INVAILD = 0,
	OBJECT_BUILD,
	OBJECT_ARM,
	OBJECT_TECHNOLOGY,
	OBJECT_DEFENCENPC,
	OBJECT_PLAYREWARD,
	OBJECT_UPDATEREMOULDLVL,
	OBJECT_PLAYREWARD_ARMY,
	OBJECT_PLAYREWARD_SCIENCE,
	OBJECT_PVE_FIGHT,
};

enum NEWCOMERGIFT_TYPE
{
	NEWCOMERGIFT_TYPE_INVAILD = 0,
	NEWCOMERGIFT_TYPE_MEDAL,		//ѫ��
	NEWCOMERGIFT_TYPE_METAL,		//����
	NEWCOMERGIFT_TYPE_OIL,			//ʯ��
	NEWCOMERGIFT_TYPE_ARMY,			//��
	NEWCOMERGIFT_TYPE_HONOUR,		//����
	NEWCOMERGIFT_TYPE_BAGITEM,		//����
	NEWCOMERGIFT_TYPE_GIFT,			//����
};

enum NEWCOMERGIFT_ADD_TYPE
{
	NEWCOMERGIFT_ADD_TYPE_INVAILD = 0,
	NEWCOMERGIFT_ADD_TYPE_LEVELUP,		//�ȼ�����
	NEWCOMERGIFT_ADD_TYPE_ATTACKNPC,	//���NPC
	NEWCOMERGIFT_ADD_TYPE_LUCKYGAIN,	//������
	NEWCOMERGIFT_ADD_TYPE_MARKGIFT,		//��Ϊ������
	NEWCOMERGIFT_ADD_TYPE_MARKLOGIN7DAY,//������½7��
	NEWCOMERGIFT_ADD_TYPE_MARKLOGIN7DAY_28,//�ڶ��켰�ڰ���������
};

enum CHECK_START_REASON
{
	CHECK_START_REASON_OK,				//OK
	CHECK_START_REASON_DIFFACTIVITY,	//��ͬ�
	CHECK_START_REASON_RES,				//��Դ����
	CHECK_START_REASON_PLAYERNULL,		//���Ϊ��
	CHECK_START_REASON_CUSTOMNULL,		//�ؿ��Ҳ���
	CHECK_START_REASON_HASATTACK,		//���ڽ���
	CHECK_START_REASON_CUSTOMUNR,		//��ȡ����ؿ�������
	CHECK_START_REASON_HASGET,			//�Ѿ���ȡ������
	CHECK_START_REASON_LEVELLESS,       //�ȼ�����
	CHECK_START_REASON_NOTFINISHNEW,       //δ�����������
	CHECK_START_REASON_MINLV,			//δ�ﵽ�ȼ���ս����
    CHECK_START_REASON_NEEDMORECREDIT,      //�����ؿ�ʱ ѫ�²���
    CHECK_START_REASON_HASOVERMAXCUT,       //�Ѿ�����Ҫ�����Ĺؿ�
};

enum DEFENSE_END_REASON
{
	DEFENSE_END_REASON_NORMAL,			//��������
	DEFENSE_END_REASON_LOSTCONN,		//���Ӷ�ʧ
	DEFENSE_END_REASON_CLIENTERROR,		//�ͻ������ݴ���
	DEFENSE_END_REASON_ZIHUIZHONGXIN,	//ָ�����ı��ݻ�
	DEFENSE_END_REASON_OVERTIME_5,		//5���ӳ�ʱ
	DEFENSE_END_REASON_OVERTIME_ALL,	//�����
	DEFENSE_END_REASON_USERACNCEL,		//���ȡ��
	DEFENSE_END_REASON_REPLACED,		//������
	DEFENSE_END_REASON_RESERROR,		//���������ô���
	DEFENSE_END_REASON_ASKENDERROR,		//���ʹ��������Ϣ
	DEFENSE_END_REASON_OVERTIME_5_S,	//����������֤��ʱ
};

//ս������ö��
enum EQUIPNODE_SHOWTYPE
{
	EQUIPNODE_SHOWTYPE_ARMY,			//����
	EQUIPNODE_SHOWTYPE_BUILDING,		//����
	EQUIPNODE_SHOWTYPE_LEAVE,			//����
	EQUIPNODE_SHOWTYPE_ATTACK_1,		//�������� ��ʼ
	EQUIPNODE_SHOWTYPE_ATTACK_2,
	EQUIPNODE_SHOWTYPE_ATTACK_3,
	EQUIPNODE_SHOWTYPE_ATTACK_4,
	EQUIPNODE_SHOWTYPE_ATTACK_5,
	EQUIPNODE_SHOWTYPE_ATTACK_6,
	EQUIPNODE_SHOWTYPE_ATTACK_7,
	EQUIPNODE_SHOWTYPE_ATTACK_8,		//�������� ����
	EQUIPNODE_SHOWTYPE_RETREAT,			//������ʧ����
	EQUIPNODE_SHOWTYPE_GAINHONOR,		//�������
	EQUIPNODE_SHOWTYPE_SPRWPN_ARMY,		//���������ƻ�����
	EQUIPNODE_SHOWTYPE_SPRWPN_BUILD,	//���������ƻ�����
	EQUIPNODE_SHOWTYPE_SPRWPN_EMPTY,	//��������δ����˺�
	EQUIPNODE_SHOWTYPE_TRAP_ARMY,	    //�ݽ�����
};

enum BROADCAST_ROBOT_MSG
{
	BROADCAST_ROBOT_MSG_UPDATE = 1,		//���1���ӵ�Update��Ϣ
	BROADCAST_ROBOT_MSG_HASSEND,		//���깫���ȫ��֪ͨ
};


//��Buff����
enum E_ADDBUFF_ERROE
{
	E_ADDBUFF_OK = 0,					//OK
	E_ADDBUFF_ERROR_BUILD_ID,			//����ID����
	E_ADDBUFF_NOTMORE100CREDIT,			//����һ��ѫ��
	E_ADDBUFF_HASGAINEDBUFF,			//�Ѿ������buff��
	E_ADDBUFF_CREDITNOTMORE300,			//ѫ�²���300
	E_ADDBUFF_CREDITCOST300,			//�۳�300ѫ��ʧ��
	E_ADDBUFF_BuyVipCardFail,			//vip����ʧ��
	E_ADDBUFF_NeedVipLevel,			        //vip�ȼ�����
};
//������Ѳ���
enum PLAT_INVITEFRIEND
{
	PLAT_INVITEFRIEND_INVITE = 1,
	PLAT_INVITEFRIEND_ARGCHG,
	PLAT_INVITEFRIEND_ARGCHG_SELF,
	PLAT_INVITEFRIEND_GAINCREDIT,
};

//������ѽ���
enum PLAT_INVITEFRIEND_GAIN
{
	PLAT_INVITEFRIEND_GAIN_ALL = 0,
	PLAT_INVITEFRIEND_GAIN_1,
	PLAT_INVITEFRIEND_GAIN_LVL,
	PLAT_INVITEFRIEND_GAIN_CREDIT,
};

//���������ȡ����
enum PLAT_INVITEFRIEND_GAIN_ERROR
{
	PLAT_INVITEFRIEND_GAIN_ERROR_OK = 0,	//�ɹ�
	PLAT_INVITEFRIEND_GAIN_ERROR_1,			//�Ѿ���ȡ���������
	PLAT_INVITEFRIEND_GAIN_ERROR_1_1,		//�ﵽ����������ȡ����
	PLAT_INVITEFRIEND_GAIN_ERROR_LVL1,		//���ѵȼ�δ�ﵽ��һ��ȡ�ȼ�
	PLAT_INVITEFRIEND_GAIN_ERROR_LVL2,		//�Ѿ�ȫ����ȡ���
	PLAT_INVITEFRIEND_GAIN_ERROR_LVL3,		//�ﵽ����������ȡ����
	PLAT_INVITEFRIEND_GAIN_ERROR_CREDIT,	//�ﵽ���ճ�ֵ��ȡ����
};

//���Դ���
enum LEAVE_MESSAGE_ENUM
{
	ENUM_LEAVE_MESSAGE_OK,					//�ɹ�
	ENUM_LEAVE_MESSAGE_NOCREDIT,			//ѫ�²���
	ENUM_LEAVE_MESSAGE_DEFAULT_ID_ERR,		//Ĭ��ID����
	ENUM_LEAVE_MESSAGE_SELF_STR_LEN_ERR,	//�Զ�����䳤�ȴ���
	ENUM_LEAVE_MESSAGE_UNKNOWN,				//δ֪����
};

//ս��������ö��
//��Ӧ��combatPowerSet.dat
enum COMBATPOWERTYPE
{
	COMBATPOWERTYPE_NULL = 0,
	COMBATPOWERTYPE_ARMY_LIFE,				//��������/��
	COMBATPOWERTYPE_ARMY_DPS,				//����DPS/��
	COMBATPOWERTYPE_ARMY_RANGE,				//�������/��
	COMBATPOWERTYPE_PART_ATTACK,			//���������/1%
	COMBATPOWERTYPE_PART_LIFE,				//�������ֵ/1%
	COMBATPOWERTYPE_PART_RANGE,				//������/1��
	COMBATPOWERTYPE_PART_MOVE,				//����ƶ��ٶ�/1%
	COMBATPOWERTYPE_PART_TURN,				//���ת���ٶ�/1%
	COMBATPOWERTYPE_PART_DAMAGE_SOLDIER,	//��ʿ���˺��ӳ�/1%
	COMBATPOWERTYPE_PART_DAMAGE_TANK,		//��̹���˺��ӳ�/1%
	COMBATPOWERTYPE_PART_DAMAGE_PLAN,		//�Էɻ��˺��ӳ�/1%
	COMBATPOWERTYPE_PART_DAMAGE_BUILD,		//�Խ����˺��ӳ�/1%
	COMBATPOWERTYPE_PART_CRT,			    //���������/1%
	COMBATPOWERTYPE_PART_CRTDAMAGE,			//��������˺�����/1%
	COMBATPOWERTYPE_PART_CRTDEF,			//�����������/1%
	COMBATPOWERTYPE_PART_DAMAGEDEF,			//����˺�����/1%
	COMBATPOWERTYPE_PART_DAMAGE_HERO,		//��Ӣ���˺��ӳ�/1%
	COMBATPOWERTYPE_PART_DEF_SOLDIER,	//��ʿ�������ӳ�/1%
	COMBATPOWERTYPE_PART_DEF_TANK,		//��̹�˷����ӳ�/1%
	COMBATPOWERTYPE_PART_DEF_PLAN,		//�Էɻ������ӳ�/1%
	COMBATPOWERTYPE_PART_DEF_BUILD,		//�Խ��������ӳ�/1%
	COMBATPOWERTYPE_PART_DEF_HERO,		//��Ӣ�۷����ӳ�/1%
    COMBATPOWERTYPE_PART_DEF_GUNTOWER,  //�Ի�ǹ�������ӳ�/1%
    COMBATPOWERTYPE_PART_DEF_MortarTower,//�԰����߷����ӳ�/1%
    COMBATPOWERTYPE_PART_DEF_ReduceTowerHp, //���ٵз� ������ Ѫ��

};
//�������ͣ�
enum Army_Type
{
	Army_Unkonw			= 0,		
	Army_Grunt          = 2,		// ��ǹ��     
	Army_Ripper         = 3,		// ��ǹ��     
	Army_Blaster        = 4,		// �ڱ�       
	Army_Torch          = 5,		// ����     
	Army_Ghost          = 6,		// �ѻ���     
	Army_Boomer         = 7,		// �ֲ�����   
	Army_Gearhead       = 8,		// ����ʦ     
	Army_Doc            = 9,		// ҽ��
	Army_Little_Dog     = 10,		// �����Ĵ��� 
	Army_Jack_Rabbit    = 11,		// ���ԽҰ�� 
	Army_Badger         = 12,		// ���ճ�     
	Army_Crossbow       = 13,		// V3�����   
	Army_Loki           = 14,		// ����̹��   
	Army_Grendel        = 15,		// Ϭţ̹��   
	Army_Armadillo      = 16,		// ̹��ɱ��   
	Army_LaserTank		= 17,		//����̹��
	Army_Big_Dog        = 21,		// ����̹��

	Army_Firefly        = 22,		// �����߷ɻ� 
	Army_Osprey         = 23,		// ��װֱ���� 
	Army_Locust         = 24,		// ҹݺֱ���� 
	Army_Thunderbolt    = 26,		// ����ս��   
	Army_Nightstalker   = 27,		// ��ӥս��   
	Army_Roadrunner     = 28,		// �ֲ�������
	Army_Comanche		= 29,		//��ʽ������
	Army_Airship		= 30,		// ������ͧ
	Army_AntiMineTank	= 31,		// ɨ��̹��
	Army_GoldTank		= 32,		//�ƽ�����̹��
	Army_Tanya          = 33,		// ̷��  
	Army_Magnet			= 34,		//�ű�̹��
	Army_GoldMagnet		= 35,		//�ƽ�ű�̹��
	Army_RedXi			= 36,		//����
	Army_GoldPurpleXi	= 37,		//�ƽ�����
	Army_TeZhong        = 38,		//�й��Կ����ֱ�
	Army_MagnetS        = 39,       //��Ӣ�ű�̹��
	Army_GoldMegaTankS  = 40,       //��Ӣ�ƽ�����̹��
	Army_LaserTankS     = 41,       //��Ӣ����̹��
	Army_FinalTank		= 42,		//ĩ������
	Army_ThorMecha		= 43,		//�������
	B25Fly              = 44,       //B-25��ը��
	Mammoth             = 45,       //����̹��
	Army_GoldLoki		= 46,		//�ƽ����
	Army_GoldGrendel	= 47,		//�ƽ�Ϭţ
	Army_GoldArmadillo	= 48,		//�ƽ�̹��ɱ��
	Army_GoldenMammoth      = 49,       //�ƽ�����̹��
	Army_NoDieGearhead      = 50,       //��������ʦ
    Army_ChristMammoth      = 51,       //ʥ������
    Army_FrostTanks         = 52,       //��˪̹��
    Army_FreezeCorps        = 53,       //�䶳����
    Army_MonarchTanks       = 54,       //����̹��
    Army_GoldenMonarch      = 55,       //�ƽ����̹��
    Army_FinalMonarch       = 56,       //ĩ�յ���̹��
    Army_BossFreeze	        = 57,       //��˪BOSS
    Army_BossLaser	        = 58,       //����BOSS
    Army_BossBig_Dog	    = 59,       //����BOSS
    Army_BossThorMecha	    = 60,       //����BOSS
    Army_BossMammoth	    = 61,       //����BOSS
    Army_BossRedXi	        = 62,       //����BOSS
	Army_T90				= 79,		//t90
	Army_Max,						//������
};
//����AI����
enum ArmyAI_Type
{
	AI_NONE,  //������
	AI_TOLAND_FIRST,//���ȶԵ�
	AI_TOAIR_FIRST, //���ȶԿ�
};
//ս�����
const int Records_Damage = 10;
const int Records_Max_Foot_ID = 9;

//�ռǹ㲥
const int Min_Emblem_Broadcast = 7;
//�鼮���װ��λ
const int MAX_BOOK_EQUIPPOINT = 8;
const int BOOK_EQUIPPOINTADD = 3;
const int MAX_COM_EQUIPPOINT = 6;
const int MAX_EMBLEM_EQUIPPOINT = 6;

enum PLAYER_RECORD
{
	PLAYER_RECORD_START = 1000,
	PLAYER_RECORD_PLUNDER_OIL = 1001,
	PLAYER_RECORD_PLUNDER_METAL = 1002,
	PLAYER_RECORD_HONOR = 1003,
	PLAYER_RECORD_KILL_SOLDIER = 1004,
	PLAYER_RECORD_KILL_ARMOR = 1005,
	PLAYER_RECORD_DISTROY_BLD = 1006,
	PLAYER_RECORD_ATTACK_TIMES = 1007,
	PLAYER_RECORD_DISTROY_COMMAND_CENTER = 1008,
	PLAYER_RECORD_PRODUCE_EARTH = 1009,
	PLAYER_RECORD_PRODUCE_AIR = 1010,
	PLAYER_RECORD_PRODUCE_OIL = 1011,
	PLAYER_RECORD_PRODUCE_METAL = 1012,
	PLAYER_RECORD_CAPTURE_TIMES = 1013,
	PLAYER_RECORD_FEATS = 1014,
	PLAYER_RECORD_TECHNOLOGY = 1015,
	PLAYER_RECORD_COUTRY_ZHANGONG = 1016,
	PLAYER_RECORD_COUTRY_ATTACK = 1017,
	PLAYER_RECORD_COUTRY_WIN = 1018,
	PLAYER_RECORD_PVP_SCORE = 1019,
	PLAYER_RECORD_PVP_CHELLENGE = 1020,
	PLAYER_RECORD_PVP_CHELLENGE_WIN = 1021,
	PLAYER_RECORD_PVP_RANK = 1022,
	PLAYER_RECORD_PVE_MAX_CUSTOMINDEX = 1023,
	PLAYER_RECORD_BASEDEFENDNPC_MAXSTAGE = 1024,
	PLAYER_RECORD_DEFEND_CHELLENGE_MAXCUT = 1025,
	
	PLAYER_RECORD_END ,
};

//�̵깺��ʱ��������
enum SHOP_BUY_MARK_TYPE
{
	SHOP_BUY_MARK_TYPE_DAY = 1,
	SHOP_BUY_MARK_TYPE_WEEK,
	SHOP_BUY_MARK_TYPE_MONTH,
	SHOP_BUY_MARK_TYPE_YEAR,
};

enum INVITEINTERFACE
{
	INVITEINTERFACE_START = 0,
	INVITEINTERFACE_I     = 1,
	INVITEINTERFACE_URLI  = 2,
};



enum E_ADDARMY_TYPE
{
	E_ADDARMY_TYPE_ADMIN = 0,		//GM
	E_ADDARMY_TYPE_DEFENSE_CUSTOM,	//���عؿ�
	E_ADDARMY_TYPE_DEFENSE_GIFT,	//��������
	E_ADDARMY_TYPE_GIFT,			//����
	E_ADDARMY_TYPE_PVEARMY,			//PVE�������
	E_ADDARMY_TYPE_TRAP,            //�����²
	E_ADDARMY_TYPE_VIP,             //ViP���
    E_ADDARMY_TYPE_EXPLOREARSENAL,  //̽�������
    E_ADDARMY_TYPE_MAGICBOX,        //ħ��
    E_ADDARMY_TYPE_COSTCREDIT,      //������ ������
    E_ADDARMY_TYPE_DAILYSIGNIN,     //ÿ��ǩ��
};

enum E_SHOP_FOR_GIFT_TYPE
{
	E_SHOP_FOR_GIFT_TYPE_SUCCESS = 0,	//�ɹ�
	E_SHOP_FOR_GIFT_TYPE_NOT_ENOUGH_MONEY = 1,	//ѫ�²���
	E_SHOP_FOR_GIFT_TYPE_WRONG_UID = 2,	//�����UID
	E_SHOP_FOR_GIFT_TYPE_OUT_COUNT = 3,	//������������
	E_SHOP_FOR_GIFT_TYPE_RFD_OUT_COUNT = 4,	//������������
	E_SHOP_FOR_GIFT_TYPE_SAME_PEOPLE = 5,	//���ɷ����Լ�
	E_SHOP_FOR_GIFT_TYPE_SAME_REGION = 6,	//���ɷ���ͬ��
	E_SHOP_FOR_GIFT_TYPE_OUT_LEVEL = 7,	//���ɷ���ͬ��
	E_SHOP_FOR_GIFT_TYPE_NOT_ENOUGH_ITEM = 8,	//��Ʒ����
};

enum E_ARMYGROUP_ACTIVE_REL
{
	E_ARMYGROUP_ACTIVE_REL_OK = 0,		//�ɹ�
	E_ARMYGROUP_ACTIVE_REL_IDERROR,		//��������������
	E_ARMYGROUP_ACTIVE_REL_TIMEERROR,	//ʱ�䲻��
	E_ARMYGROUP_ACTIVE_REL_NPCIDERROR,	//NpcID ����
	E_ARMYGROUP_ACTIVE_REL_STEPERROR,	//�ؿ�����
	E_ARMYGROUP_ACTIVE_REL_AWARDED,		//����ȡ��
	E_ARMYGROUP_ACTIVE_REL_TBLERROR,	//�������
	E_ARMYGROUP_ACTIVE_REL_COUNTRYERR,	//country server ���ݴ���
	E_ARMYGROUP_ACTIVE_REL_WINLVERR,	//��ɱ��npc�ȼ�����
};

enum E_PVE_BATTEL_REL
{
	E_PVE_BATTEL_REL_OK = 0,		//�ɹ�
	E_PVE_BATTEL_REL_LOCKED,		//δ����
	E_PVE_BATTEL_REL_WRONG_TIME,	//ʱ�䲻��
	E_PVE_BATTEL_REL_NPCIDERROR,	//NpcID ����
	E_PVE_BATTEL_REL_CDTIME,		//CDʱ��
};

/*----------------------------------------------------------------------------*/
/*									PVE										  */
/*----------------------------------------------------------------------------*/


const int LUCKNUMTIMESTOP = 300;
const int MAXLUCKYNUM = 10;
const int MAXLUCKYNUMPERIOD = 100;

enum STRATEGIC_GENERAL_SET
{
	STRATEGIC_GENERAL_SET_FIGHT_NUM = 5,	//һֱ��5·��
	STRATEGIC_GENERAL_SET_FIGHT_TOTAL,		//�ܹ�6·��
};

//����������
enum ARMY_CAMP_STATE
{
	E_ARMY_CAMP_STATE_COMMON = 0,			//Ұ��
	E_ARMY_CAMP_STATE_TROOP,				//�ﱤ
	E_ARMY_CAMP_STATE_STRATEGIC,			//ս�Ա�Ӫ
	E_ARMY_CAMP_STATE_STRATEGIC_GENERAL1,	//ս�Ա�Ӫ--����1
	E_ARMY_CAMP_STATE_STRATEGIC_GENERAL2,	//ս�Ա�Ӫ--����2
	E_ARMY_CAMP_STATE_STRATEGIC_GENERAL3,	//ս�Ա�Ӫ--����3
	E_ARMY_CAMP_STATE_STRATEGIC_GENERAL4,	//ս�Ա�Ӫ--����4
	E_ARMY_CAMP_STATE_STRATEGIC_GENERAL5,	//ս�Ա�Ӫ--����5
	E_ARMY_CAMP_STATE_STRATEGIC_GENERALMAX = E_ARMY_CAMP_STATE_STRATEGIC_GENERAL1 + 5,	//ս�Ա�Ӫ--����5
};

//ս�Ա�Ӫ����
enum STRATEGIC_ARMY_OPT_TYPE
{
	STRATEGIC_ARMY_OPT_NONE = 0,		//��Ч
	STRATEGIC_ARMY_OPT_ADDARMY,			//�ӻ��ؼӱ�
	STRATEGIC_ARMY_OPT_CUTTOBASE,		//�����ػ���
	STRATEGIC_ARMY_OPT_TREAT,			//���Ʊ���
	STRATEGIC_ARMY_OPT_TREAT_ONE,		//���Ʊ�Ա
	STRATEGIC_ARMY_OPT_DISMISS,			//ǲɢ����
	STRATEGIC_ARMY_OPT_GENERALADDARMY,	//�������
	STRATEGIC_ARMY_OPT_GENERALTREAT,	//���ƽ���������
	STRATEGIC_ARMY_OPT_GENERALDISMISS,	//�Ƴ��� 
	STRATEGIC_ARMY_OPT_GENERALFIGHTPOS,	//��������λ��
	STRATEGIC_ARMY_OPT_GENERALCHANGE,	//��������
};

//ս�Ա�Ӫ�������󷵻�
enum STRATEGIC_ARMY_OPT_REL_TYPE
{
	STRATEGIC_ARMY_OPT_REL_INIT = -1,
	STRATEGIC_ARMY_OPT_REL_OK = 0,			//OK
	STRATEGIC_ARMY_OPT_REL_ID,				//����ID����
	STRATEGIC_ARMY_OPT_REL_BYTYPE,			//�������ʹ���
	STRATEGIC_ARMY_OPT_REL_CANOTINCAMP,		//���ֲ��ܽ���Ӫ
	STRATEGIC_ARMY_OPT_REL_HPNOTFULL,		//����Ѫ������
	STRATEGIC_ARMY_OPT_REL_TYPENUMNOTFULL,	//������������
	STRATEGIC_ARMY_OPT_REL_NOMORECREDIT,	//ѫ�²���
	STRATEGIC_ARMY_OPT_REL_NOMOREOIL,		//ʯ�Ͳ���
	STRATEGIC_ARMY_OPT_REL_NOMOREMETRAL,	//��������
	STRATEGIC_ARMY_OPT_REL_NOMORESPACE,		//�˿ڲ���
	STRATEGIC_ARMY_OPT_REL_ARMYNUMLESS,		//Ҫ�󷵻ػ��صı�Ա������
	STRATEGIC_ARMY_OPT_REL_ARMYNUMMORE,		//Ҫ�󷵻ػ��صı�Ա������
	STRATEGIC_ARMY_OPT_REL_TREATCOSTALLNOTSAME,	//�ͻ��˼����������ֵ��������˲�һ��
	STRATEGIC_ARMY_OPT_REL_COSTCREDIT,		//�۳�ѫ��ʧ��
	STRATEGIC_ARMY_OPT_REL_COSTOIL,			//�۳�ʯ��ʧ��
	STRATEGIC_ARMY_OPT_REL_COSTMETRAL,		//�۳�����ʧ��
	STRATEGIC_ARMY_OPT_REL_ARMYHPFULL,		//Ѫ����������Ҫ��
	STRATEGIC_ARMY_OPT_REL_ARMYHASDISMISS,	//�Ѿ���ǲɢ
	STRATEGIC_ARMY_OPT_REL_ARMYDISMISSORGE,	//ս�Ա�Ӫ�����˿ڴ���
	STRATEGIC_ARMY_OPT_REL_CAMPDISMISSORGE,	//���ؼ����˿ڴ���
	STRATEGIC_ARMY_OPT_REL_GENERALIDERROR,	//����ID����
	STRATEGIC_ARMY_OPT_REL_GENERAL_FIGHTINDEX,//ֻ����ǲ1-5·�ı�
	STRATEGIC_ARMY_OPT_REL_GENERAL_ARMYMAX,	//�������˿�����
	STRATEGIC_ARMY_OPT_REL_GENERAL_SAMEONE,	//һ���Ľ���
	STRATEGIC_ARMY_OPT_REL_INFIGHT,			//ս���в�������
	STRATEGIC_ARMY_OPT_REL_GENERALDATAERROR,//�ɱ����ݴ���
	STRATEGIC_ARMY_OPT_REL_GENERAL_INDEXERROR,//û�и�·��
	STRATEGIC_ARMY_OPT_REL_ARMYCUTORGE,		//����ս�Ա�Ӫ�˿ڴ���
	STRATEGIC_ARMY_OPT_REL_PASSWORD,		//��������δ����
};

//PVE��������
enum STRATEGIC_PVEFIGHT_OPT_TYPE
{
	STRATEGIC_PVEFIGHT_OPT_NONE = 0,		//��Ч
	STRATEGIC_PVEFIGHT_OPT_FIGHT,			//ս��
	STRATEGIC_PVEFIGHT_OPT_REFRESH,			//ˢ��
	STRATEGIC_PVEFIGHT_OPT_WATCH,			//���һ��ս��
	STRATEGIC_PVEFIGHT_OPT_ADDREFRESH,		//����ˢ�´���
	STRATEGIC_PVEFIGHT_OPT_INITDATA,		//��ʼ������
	STRATEGIC_PVEFIGHT_OPT_FIGHTAUTO,		//�Զ�ս��
	STRATEGIC_PVEFIGHT_OPT_VIPFIGHTAUTO,	//VIP�Զ�ս��
};

//PVE�����������󷵻�
enum STRATEGIC_PVEFIGHT_OPT_REL_TYPE
{
	STRATEGIC_PVEFIGHT_OPT_REL_NONE = -1,
	STRATEGIC_PVEFIGHT_OPT_REL_OK = 0,			//OK
	STRATEGIC_PVEFIGHT_OPT_REL_WIN,				//ʤ��
	STRATEGIC_PVEFIGHT_OPT_REL_FAIL,			//ʧ��
	STRATEGIC_PVEFIGHT_OPT_REL_WATCH,			//��ս
	STRATEGIC_PVEFIGHT_OPT_REL_INIT,			//��ʼ������
	STRATEGIC_PVEFIGHT_OPT_REL_NOHP,			//���λ�����
	STRATEGIC_PVEFIGHT_OPT_REL_NOREFRESH,		//û��ˢ�»���
	STRATEGIC_PVEFIGHT_OPT_REL_MORETIMES,		//��������������
	STRATEGIC_PVEFIGHT_OPT_REL_NOCREDIT,		//ѫ�²���
	STRATEGIC_PVEFIGHT_OPT_REL_COSTERROR,		//�۳�ѫ��ʧ��
	STRATEGIC_PVEFIGHT_OPT_REL_NOWFIGHT,		//����ս��
	STRATEGIC_PVEFIGHT_OPT_REL_HASOVER,			//�Ѿ����
	STRATEGIC_PVEFIGHT_OPT_REL_CUSTOMERROR,		//�ؿ�����
	STRATEGIC_PVEFIGHT_OPT_REL_OVERTIME,		//��ʱ
	STRATEGIC_PVEFIGHT_OPT_REL_INCD,			//�ڹؿ�CD��
	STRATEGIC_PVEFIGHT_OPT_REL_NOTOPEN,			//PVEδ����
	STRATEGIC_PVEFIGHT_OPT_REL_ONLYREL,			//ֻ��Ҫ֪�����
};

enum COST_GIFT_TYPE
{
	COST_GIFT_TYPE_DEFAULT,
	COST_GIFT_TYPE_DAILY,
	COST_GIFT_TYPE_DATE,
};


/*----------------------------------------------------------------------------*/
/*									������									  */
/*----------------------------------------------------------------------------*/

//�������ɾ�ID
enum ARENA_ACHIEVE_ID
{
	ARENA_ACHIEVE_ID_NONE = 0,					//��ЧID

	ARENA_ACHIEVE_ID_FIGHTNUM10,				//��ս10��
	ARENA_ACHIEVE_ID_FIGHTNUM50,				//��ս50��
	ARENA_ACHIEVE_ID_FIGHTNUM100,				//��ս100��
	ARENA_ACHIEVE_ID_FIGHTNUM500,				//��ս500��
	ARENA_ACHIEVE_ID_FIGHTNUM1000,				//��ս1000��
	ARENA_ACHIEVE_ID_FIGHTNUM2000,				//��ս2000��
	ARENA_ACHIEVE_ID_FIGHTNUM5000,				//��ս5000��
	ARENA_ACHIEVE_ID_FIGHTNUM10000,				//��ս10000��

	ARENA_ACHIEVE_ID_WINTIMES2,					//�ۼ�ʤ��2��
	ARENA_ACHIEVE_ID_WINTIMES10,				//�ۼ�ʤ��10��
	ARENA_ACHIEVE_ID_WINTIMES50,				//�ۼ�ʤ��50��
	ARENA_ACHIEVE_ID_WINTIMES100,				//�ۼ�ʤ��100��
	ARENA_ACHIEVE_ID_WINTIMES200,				//�ۼ�ʤ��200��
	ARENA_ACHIEVE_ID_WINTIMES500,				//�ۼ�ʤ��500��
	ARENA_ACHIEVE_ID_WINTIMES1000,				//�ۼ�ʤ��1000��

	ARENA_ACHIEVE_ID_WINALWAYS5,				//��ʤ5��
	ARENA_ACHIEVE_ID_WINALWAYS10,				//��ʤ10��
	ARENA_ACHIEVE_ID_WINALWAYS15,				//��ʤ15��
	ARENA_ACHIEVE_ID_WINALWAYS20,				//��ʤ20��
	ARENA_ACHIEVE_ID_WINALWAYS30,				//��ʤ30��
	ARENA_ACHIEVE_ID_WINALWAYS50,				//��ʤ50��
	ARENA_ACHIEVE_ID_WINALWAYS100,				//��ʤ100��

	ARENA_ACHIEVE_TYPE_TORANK10000,				//��������10000
	ARENA_ACHIEVE_TYPE_TORANK5000,				//��������5000
	ARENA_ACHIEVE_TYPE_TORANK4000,				//��������4000
	ARENA_ACHIEVE_TYPE_TORANK3000,				//��������3000
	ARENA_ACHIEVE_TYPE_TORANK2000,				//��������2000
	ARENA_ACHIEVE_TYPE_TORANK1000,				//��������1000
	ARENA_ACHIEVE_TYPE_TORANK500,				//��������500
	ARENA_ACHIEVE_TYPE_TORANK400,				//��������400
	ARENA_ACHIEVE_TYPE_TORANK300,				//��������300
	ARENA_ACHIEVE_TYPE_TORANK200,				//��������200
	ARENA_ACHIEVE_TYPE_TORANK100,				//��������100
	ARENA_ACHIEVE_TYPE_TORANK75,				//��������75
	ARENA_ACHIEVE_TYPE_TORANK50,				//��������50
	ARENA_ACHIEVE_TYPE_TORANK30,				//��������30
	ARENA_ACHIEVE_TYPE_TORANK10,				//��������10
	ARENA_ACHIEVE_TYPE_TORANK5,					//��������5
	ARENA_ACHIEVE_TYPE_TORANK1,					//��������1

};

//�������ɾ�����
enum ARENA_ACHIEVE_TYPE
{
	ARENA_ACHIEVE_TYPE_NONE = 0,				//�޳ɾ�
	ARENA_ACHIEVE_TYPE_FIGHTNUM,				//������ս����
	ARENA_ACHIEVE_TYPE_WINTIMES,				//ʤ�������ۼ�
	ARENA_ACHIEVE_TYPE_WINALWAYS,				//��ʤ����
	ARENA_ACHIEVE_TYPE_TORANK,					//��������
	ARENA_ACHIEVE_TYPE_MAX,						//���ֵ
};


//������ս����¼ -- ����
enum ARENA_FIGHTRECORD_TYPE
{
	ARENA_FIGHTRECORD_TYPE_NONE,				//��--��ʼ��
	ARENA_FIGHTRECORD_TYPE_ATKSUCC,				//ս���ɹ�
	ARENA_FIGHTRECORD_TYPEATKFAIL,				//ս��ʧ��
	ARENA_FIGHTRECORD_TYPE_BYATKSUCC,			//��ս���ɹ�
	ARENA_FIGHTRECORD_TYPE_BYATKFAIL,			//��ս��ʧ��
};

//�������������ؽ��
enum ARENA_OPT_REL
{
	ARENA_OPT_REL_INIT = 0,						//��ʼ��
	ARENA_OPT_REL_OK,							//�ɹ�
	ARENA_OPT_REL_ATKSELFWIN,					//������ս--ʤ��
	ARENA_OPT_REL_ATKSELFFAIL,					//������ս--ʧ��
	ARENA_OPT_REL_ATKBYENEMYWIN,				//����ս--ʤ��
	ARENA_OPT_REL_ATKBYENEMYFAIL,				//����ս--ʧ��
	ARENA_OPT_REL_ATKSETPOSERR,					//��ս����λ��ʧ��
	ARENA_OPT_REL_ERRCONFIG,					//���ñ���ش���
	ARENA_OPT_REL_ERRDATAINIT,					//���ݳ�ʼ������
	ARENA_OPT_REL_ERRBUYMAX,					//���칺�򳬹�������
	ARENA_OPT_REL_ERRBUYCREDIT,					//û���㹻��ѫ��
	ARENA_OPT_REL_ERRPLAYERLVLS,				//��ҵȼ�--�Լ�
	ARENA_OPT_REL_ERRPLAYERLVLE,				//��ҵȼ�--����
	ARENA_OPT_REL_ERRPVECUSTOMS,				//PVE�ؿ�--�Լ�
	ARENA_OPT_REL_ERRPVECUSTOME,				//PVE�ؿ�--����
	ARENA_OPT_REL_ERRATKCDSELF,					//�Լ���CD��
	ARENA_OPT_REL_ERRATKCDENEMY,				//�Է���CD��
	ARENA_OPT_REL_ERRATKRANKSELF,				//�Լ�������������
	ARENA_OPT_REL_ERRATKRANKENEMY,				//�Է�������������
	ARENA_OPT_REL_ERRATKNOTIMES,				//û��ս������
	ARENA_OPT_REL_ERRRANKASKDIFFSELF,			//�����λ����Ϣ����--�Լ�
	ARENA_OPT_REL_ERRRANKASKDIFFENEMY,			//�����λ����Ϣ����--����
	ARENA_OPT_REL_ERRACHIEVENOTDONE,			//�ɾ�û�����
	ARENA_OPT_REL_ERRACHIEVEHASGAIN,			//�ɾ��Ѿ�����ȡ
	ARENA_OPT_REL_ERRASKTYPE,					//�����������֮�������ʹ���
	ARENA_OPT_REL_ERRHASGETRANKGIFT,			//�����Ѿ���ȡ���н���
	ARENA_OPT_REL_ERRRANKGIFTNONE,				//û�ж�Ӧ���������ȡ
	ARENA_OPT_REL_ERRNOCOUNTRY,					//�������ݴ���
	ARENA_OPT_REL_ERRNOCOUNTRYZONE,				//���Һͷ�����ƥ��
	ARENA_OPT_REL_ERRNOCOUNTRYID,				//����ID����
	ARENA_OPT_REL_ERRNOCOUNTRYSAMEONE,			//���ܴ��Լ�
	ARENA_OPT_REL_ERRHASADDARENA,				//�Ѿ����뾺����
	ARENA_OPT_REL_ERRCANNOTATKPOS,				//������ս��λ�õ����
	ARENA_OPT_REL_ERRPLAYERNOTINRECORD,			//��Ҳ��ڷ����б���
	ARENA_OPT_REL_ERRPLAYERBEHANDYOU,			//�����������֮��
	ARENA_OPT_REL_ERRARENASTOPPED,				//�������ر�
	ARENA_OPT_REL_ERRNOSUCHACTIVE,				//û�ж�Ӧ�Ļ
	ARENA_OPT_REL_ERRACTIVEHASGAIN,				//��Ӧ�Ļ�Ѿ���ȡ
	ARENA_OPT_REL_ERRNACTIVENOTOVER,			//��Ӧ�û����
	ARENA_OPT_REL_GAINSCOREGIFT_HASGAIN,		//�Ѿ���ȡ����
	ARENA_OPT_REL_GAINSCOREGIFT_NOTTOP3,		//����ǰ3
};

enum E_ARENA_MAMAGER
{
	E_COUNTRY_ARENA_CDTIME = 15,			//CD15��
	E_COUNTRY_ARENA_MAX_RECORD = 20,		//���20����¼
	E_COUNTRY_ARENA_RANK_NUM = 100,			//���а�����
	E_COUNTRY_MAX_ARENA_ROW_CNT = 1000,		//һ������uid����

	E_FILL_ARENA_TYPE_INITDATA = 1,			//����ʼ������
	E_FILL_ARENA_TYPE_FIGHTRECORD = 2,		//���ս������
	E_FILL_ARENA_TYPE_ALLINFO = 3,			//��������
};

enum E_CE_ARENARANKINFO_TYPE
{
	E_FILL_ARENA_TYPE_ASKRANK = 1,			//�������а�
	E_FILL_ARENA_TYPE_ASKATK  = 2,			//����ս������
	E_FILL_ARENA_TYPE_USERDATA = 3,			//�������
};

enum E_WORLD_ARENA_MAMAGER
{
	E_WORLD_ARENA_CDTIME = 15,			//CD15��
	E_WORLD_ARENA_MAX_RECORD = 20,		//���20����¼
	E_WORLD_ARENA_RANK_NUM = 100,			//���а�����
	E_WORLD_MAX_ARENA_ROW_CNT = 1000,		//һ������uid����
	E_WORLD_ARENA_LIMIT = 200,		        //��Ҫ�Ĺ�������ս������

	E_FILL_WORLD_ARENA_TYPE_INITDATA = 1,			//����ʼ������
	E_FILL_WORLD_ARENA_TYPE_FIGHTRECORD = 2,		//���ս������
	E_FILL_WORLD_ARENA_TYPE_ALLINFO = 3,			//��������
};

enum E_REGION_ARENA_MAMAGER
{
	E_REGION_ARENA_CDTIME = 15,			//CD15��
	E_REGION_ARENA_MAX_RECORD = 20,		//���20����¼
	E_REGION_ARENA_RANK_NUM = 100,			//���а�����
	E_REGION_MAX_ARENA_ROW_CNT = 1000,		//һ������uid����
	E_REGION_ARENA_LIMIT = 200,		        //��Ҫ�Ĺ�������ս������
	E_REGION_ARENA_ENEMY_MAX_RECORD = 100,		//���20����¼

	E_FILL_REGION_ARENA_TYPE_INITDATA = 1,			//����ʼ������
	E_FILL_REGION_ARENA_TYPE_FIGHTRECORD = 2,		//���ս������
	E_FILL_REGION_ARENA_TYPE_ALLINFO = 3,			//��������
	E_FILL_REGION_ARENA_TYPE_APPLYINFO = 4,			//��������
};


enum E_HERO_ARENA_MAMAGER
{
	E_HERO_ARENA_CDTIME = 15,			//CD15��
	E_HERO_ARENA_MAX_RECORD = 20,		//���20����¼
	E_HERO_ARENA_RANK_NUM = 100,			//���а�����
	E_HERO_MAX_ARENA_ROW_CNT = 1000,		//һ������uid����
	E_HERO_ARENA_LIMIT = 200,		        //��Ҫ�Ĺ�������ս������

	E_FILL_HERO_ARENA_TYPE_INITDATA = 1,			//����ʼ������
	E_FILL_HERO_ARENA_TYPE_FIGHTRECORD = 2,		//���ս������
	E_FILL_HERO_ARENA_TYPE_ALLINFO = 3,			//��������
};

//Ӣ�۾���������
enum E_HERO_ARENA_OPT_TYPE
{
	E_HERO_ARENA_OPT_FIGHT = 1,		//ս��
	E_HERO_ARENA_OPT_BUY,			//����ս������
	E_HERO_ARENA_OPT_GAINRANK,		//ȡ�����а���
	E_HERO_ARENA_OPT_ADDARENA,		//��Ҽ��뾺����
	E_HERO_ARENA_OPT_FIGHTBACK,		//����
	E_HERO_ARENA_OPT_HEROFIGHT,		//����Ӣ��
};

enum E_HERO_ARENARANKINFO_TYPE
{
	E_HERO_ARENARANKINFO_ASKRANK  = 1,			//�������а�
	E_HERO_ARENARANKINFO_ASKATK   = 2,			//����ս������
	E_HERO_ARENARANKINFO_USERDATA = 3,			//�������
};
enum E_REGION_ARENARANKINFO_TYPE
{
	E_REGION_ARENARANKINFO_ASKRANK  = 1,			//�������а�
	E_REGION_ARENARANKINFO_ASKATK   = 2,			//����ս������
	E_REGION_ARENARANKINFO_USERDATA = 3,			//�������
	E_REGION_ARENARANKINFO_ALLRANK  = 4,			//ÿ�����а�
	E_REGION_ARENARANKINFO_LASTRANK = 5,			//��һ�����а�
};

//��������������
enum E_REGION_ARENA_OPT_TYPE
{
	E_REGION_ARENA_OPT_FIGHT = 1,		//ս��
	E_REGION_ARENA_OPT_BUY,			//����ս������
	E_REGION_ARENA_OPT_GAINRANK,		//ȡ�����а���
	E_REGION_ARENA_OPT_ADDARENA,		//��Ҽ��뾺����
	E_REGION_ARENA_OPT_FIGHTBACK,		//����
	E_REGION_ARENA_OPT_ADDARENA_FROMWEB,		//��Ҽ��뾺����,web����
	E_REGION_ARENA_OPT_ADDARENA_ADMIN,		//��Ҽ��뾺����,����Ա
	E_REGION_ARENA_OPT_ADDARENA_SUPER,		//��Ҽ��뾺����,����Ӣ��
};

enum E_WORLD_ARENARANKINFO_TYPE
{
	E_WORLD_ARENARANKINFO_ASKRANK  = 1,			//�������а�
	E_WORLD_ARENARANKINFO_ASKATK   = 2,			//����ս������
	E_WORLD_ARENARANKINFO_USERDATA = 3,			//�������
	E_WORLD_ARENARANKINFO_ALLRANK  = 4,			//ÿ�����а�
	E_WORLD_ARENARANKINFO_LASTRANK = 5,			//��һ�����а�
};

enum E_ARENA_OPT_TYPE
{
	E_ARENA_OPT_FIGHT = 1,		//ս��
	E_ARENA_OPT_BUY,			//����ս������
	E_ARENA_OPT_GAINRANK,		//ȡ�����а���
	E_ARENA_OPT_GAINACHIEVE,	//ȡ�óɾͽ���
	E_ARENA_OPT_ADDARENA,		//��Ҽ��뾺����
	E_ARENA_OPT_FIGHTBACK,		//����
	E_ARENA_OPT_GAINACTIVE,		//��ȡ�����
	E_ARENA_OPT_UPDATASCORE,	//ͬ������
	E_ARENA_OPT_GAINSCORE,		//��ȡ����
};
//���羺����ս����¼ -- ����
enum E_WORLD_ARENA_FIGHTRECORD_TYPE
{
	E_WORLD_ARENA_FIGHTRECORD_TYPE_NONE,				//��--��ʼ��
	E_WORLD_ARENA_FIGHTRECORD_TYPE_ATKSUCC,				//ս���ɹ�
	E_WORLD_ARENA_FIGHTRECORD_TYPEATKFAIL,				//ս��ʧ��
	E_WORLD_ARENA_FIGHTRECORD_TYPE_BYATKSUCC,			//��ս���ɹ�
	E_WORLD_ARENA_FIGHTRECORD_TYPE_BYATKFAIL,			//��ս��ʧ��
};
//���羺��������
enum E_WORLD_ARENA_OPT_TYPE
{
	E_WORLD_ARENA_OPT_FIGHT = 1,		//ս��
	E_WORLD_ARENA_OPT_BUY,			//����ս������
	E_WORLD_ARENA_OPT_GAINRANK,		//ȡ�����а���
	E_WORLD_ARENA_OPT_ADDARENA,		//��Ҽ��뾺����
	E_WORLD_ARENA_OPT_FIGHTBACK,		//����
};

//���羺�����������ؽ��
enum E_WORLD_ARENA_OPT_REL
{
	E_WORLD_ARENA_OPT_REL_INIT = 0,						//��ʼ��
	E_WORLD_ARENA_OPT_REL_OK,							//�ɹ�
	E_WORLD_ARENA_OPT_REL_ATKSELFWIN,					//������ս--ʤ��
	E_WORLD_ARENA_OPT_REL_ATKSELFFAIL,					//������ս--ʧ��
	E_WORLD_ARENA_OPT_REL_ATKBYENEMYWIN,				//����ս--ʤ��
	E_WORLD_ARENA_OPT_REL_ATKBYENEMYFAIL,				//����ս--ʧ��
	E_WORLD_ARENA_OPT_REL_ATKSETPOSERR,					//��ս����λ��ʧ��
	E_WORLD_ARENA_OPT_REL_ERRCONFIG,					//���ñ���ش���
	E_WORLD_ARENA_OPT_REL_ERRDATAINIT,					//���ݳ�ʼ������
	E_WORLD_ARENA_OPT_REL_ERRBUYMAX,					//���칺�򳬹�������
	E_WORLD_ARENA_OPT_REL_ERRBUYCREDIT,					//û���㹻��ѫ��
	E_WORLD_ARENA_OPT_REL_ERRPLAYERLVLS,				//��ҵȼ�--�Լ� ����
	E_WORLD_ARENA_OPT_REL_ERRPLAYERLVLE,				//��ҵȼ�--���� ����
	E_WORLD_ARENA_OPT_REL_ERRPVECUSTOMS,				//PVE�ؿ�--�Լ� ����
	E_WORLD_ARENA_OPT_REL_ERRPVECUSTOME,				//PVE�ؿ�--���� ����
	E_WORLD_ARENA_OPT_REL_ERRATKCDSELF,					//�Լ���CD��
	E_WORLD_ARENA_OPT_REL_ERRATKCDENEMY,				//�Է���CD��
	E_WORLD_ARENA_OPT_REL_ERRATKRANKSELF,				//�Լ�������������
	E_WORLD_ARENA_OPT_REL_ERRATKRANKENEMY,				//�Է�������������
	E_WORLD_ARENA_OPT_REL_ERRATKNOTIMES,				//û��ս������
	E_WORLD_ARENA_OPT_REL_ERRRANKASKDIFFSELF,			//�����λ����Ϣ����--�Լ�
	E_WORLD_ARENA_OPT_REL_ERRRANKASKDIFFENEMY,			//�����λ����Ϣ����--����
	E_WORLD_ARENA_OPT_REL_ERRACHIEVENOTDONE,			//�ɾ�û����� ����
	E_WORLD_ARENA_OPT_REL_ERRACHIEVEHASGAIN,			//�ɾ��Ѿ�����ȡ ����
	E_WORLD_ARENA_OPT_REL_ERRASKTYPE,					//�����������֮�������ʹ��� ����
	E_WORLD_ARENA_OPT_REL_ERRHASGETRANKGIFT,			//�����Ѿ���ȡ���н���
	E_WORLD_ARENA_OPT_REL_ERRRANKGIFTNONE,				//û�ж�Ӧ���������ȡ ����
	E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRY,					//�������ݴ��� ����
	E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYZONE,				//���Һͷ�����ƥ��
	E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYID,				//����ID����
	E_WORLD_ARENA_OPT_REL_ERRNOCOUNTRYSAMEONE,			//���ܴ��Լ�
	E_WORLD_ARENA_OPT_REL_ERRHASADDARENA,				//�Ѿ����뾺����
	E_WORLD_ARENA_OPT_REL_ERRCANNOTATKPOS,				//������ս��λ�õ����
	E_WORLD_ARENA_OPT_REL_ERRPLAYERNOTINRECORD,			//��Ҳ��ڷ����б���
	E_WORLD_ARENA_OPT_REL_ERRPLAYERBEHANDYOU,			//�����������֮��
	E_WORLD_ARENA_OPT_REL_ERRARENASTOPPED,				//�������ر�
	E_WORLD_ARENA_OPT_REL_ERRNOSUCHACTIVE,				//û�ж�Ӧ�Ļ ����
	E_WORLD_ARENA_OPT_REL_ERRACTIVEHASGAIN,				//��Ӧ�Ļ�Ѿ���ȡ ����
	E_WORLD_ARENA_OPT_REL_ERRNACTIVENOTOVER,			//��Ӧ�û���� ����
	E_WORLD_ARENA_OPT_REL_GAINSCOREGIFT_HASGAIN,		//�Ѿ���ȡ����  ����
	E_WORLD_ARENA_OPT_REL_GAINSCOREGIFT_NOTTOP3,		//����ǰ3 ����
	E_WORLD_ARENA_OPT_REL_NOT_TOP200,		             //���Ҿ���������ǰ200
	E_WORLD_ARENA_OPT_REL_NOT_APPLY_TIME,		             //û������ʱ��
	E_WORLD_ARENA_OPT_REL_NOT_NOT_REGION,		             //���Ը�������
	E_WORLD_ARENA_OPT_REL_NOT_ARENABEGEIN,		             //�������Ѿ���ʼ���ܱ���
	E_WORLD_ARENA_OPT_REL_CLOSE,		             //�������ر�
	E_WORLD_ARENA_OPT_REL_NOT_TOP10,		             //ս�����в���ǰ10
	E_WORLD_ARENA_OPT_REL_NOT_3Times,		             //û�з���������ս
	E_WORLD_ARENA_OPT_REL_NOHERO,		             //û��Ӣ��
	E_WORLD_ARENA_OPT_REL_NOENOUGHSCORE,				//û���㹻����
	E_WORLD_ARENA_OPT_REL_NOGROUNDHERO,				//û�е���Ӣ��
};

const int MAX_FRD_LV_GIFT_RECORD = 20;
//װ��
enum E_Equip_BagType
{
	Equip_Bag = 0,		//�����У�δʹ��
	Equip_Admiral,	   //����
	Equip_TypeMax,
};
//װ����������
enum E_Equip_Item_Type
{
	Equip_Item_Strength=1,
	Equip_Item_Lucky,
	Equip_Item_Protect,
};

//װ������
enum E_Equip_Type
{
	Equip_Type_Hat = 1,		    //ñ��
	Equip_Type_Clothe,	        //�·�
	Equip_Type_Shoes,           //Ь��        
	Equip_Type_Arm,             //����
	Equip_Type_Ride,            //����
	Equip_Type_Dorn,            //��Ʒ
	Equip_Type_Cnt,
};

//��Ʒ��������
enum E_ItemDrop_Type
{
	ItemDrop_Type_Country = 1,		    //��ս

	ItemDrop_Cnt,
};

enum E_Server_Stat
{
	ESS_Battle_Begin = 0,
	ESS_Battle_Friend = 0,
	ESS_Battle,
	ESS_Battle_Enemy,
	ESS_Battle_Defence,
	ESS_PVE,
	ESS_COUNTRY_AT,
	ESS_COUNTRY_DE,
	ESS_COUNTRY_PVPAT,
	ESS_COUNTRY_PVPDE,
	ESS_DEFENCE_WAVES,
	ESS_JIANMIE,
	ESS_WORLD_PVP,
	ESS_ZHANLING = 12,
	ESS_Battle_End = 12,
	ESS_Res_Begin = 13,
	ESS_METAL = 13,
	ESS_OIL,
	ESS_HONOR,
	ESS_FEAT,
	ESS_PVP_POINT,
	ESS_ZHANGONG,
	ESS_GONGHUI_POINT,
	ESS_TANSUO_MID,
	ESS_TANSUO_LARGE,
	ESS_EXP_SMALL,
	ESS_EXP_MID,
	ESS_EXP_LARGE,
	ESS_ZHAOMU_SMALL,
	ESS_ZHAOMU_MID,
	ESS_ZHAOMU_LARGE,
	ESS_JUNGONG_FOOT,
	ESS_JUNGONG_TANK,
	ESS_JUNGONG_PLANE,
	ESS_KEY_DOWN,
	ESS_KEY_MID,
	ESS_KEY_UP,
	ESS_SP_ARMY = 34,
	ESS_Res_End = 34,
};

enum E_Password_Type
{
	Password_Type_Locked=0,
	Password_Type_Unlocked,
	Password_Type_Freeze,
};

//��Աְλ
enum E_Officer_Position
{
	Officer_NULL = 0,          //�޹�ְ
	Officer_Chairman ,         //����ͳ
	Officer_President ,        //��ͳ
	Officer_DefenseMinister,   //��������
	Officer_Premier ,          //����
	Officer_StaffChief,        //��ı��
	Officer_VicePresident ,    //����ͳ
	Officer_LandLeader,        //½��˾�� 
	Officer_AirLeader,         //�վ�˾��
	Officer_ForeignMinister,   //�⽻���� 
	Officer_SecurityMinister,  //��ȫ���� 
	Officer_PresidentGuard,    //��ͳ���� 
	Officer_MAX,
};

//��Ա����
enum E_Officer_Type
{
	E_Officer_Type_NULL,
	E_Officer_Type_Arena,
	E_Officer_Type_Guild,
	Officer_Type_MAX,

};

//��ԱȨ��
enum E_Officer_Right
{
	E_Officer_Right_NULL,
	E_Officer_Right_AddHP,    //����Ѫ��
	E_Officer_Right_AddDamage, //�����˺�
	E_Officer_Right_AddMorale, //����ʿ��
	E_Officer_Right_MAX,

};

enum E_OfficerOptType
{
	E_Officer_UseRight=1,
};

enum E_OfficerOptRet
{
	E_Officer_Ret_Sucess =0,    //�ɹ�
	E_Officer_Ret_NoPosition,    //û��ְλ
	E_Officer_Ret_NoRight,       //û��Ȩ��
	E_Officer_Ret_HasUsed,        //�Ѿ�ʹ��
	E_Officer_Ret_Fail,           //ʧ��
	E_Officer_Ret_ConfigErr,    //��ʼ��ʧ��
	E_Officer_Ret_IsCapital,    //�������׶�ʹ��

	E_Officer_Ret_other,      //����
};

enum E_Officer_Fill_Type
{
	E_Officer_Fill_Right =1,    //Ȩ��
	E_Officer_Fill_Officer,     //��Ա
	E_Officer_Fill_ALL,         //����
};


enum E_Buff_Fill_Type
{
	E_Buff_Fill_All =1,    //����
	E_Buff_Fill_CountryBattle,     //��ս
};

const int UI_FLAG_BOX = 1013;		//ħ��
const int UI_FLAG_COSTCREDIT = 1015;//��ֵ
const int UI_FLAG_EGG = 1016;		//�ҵ�
const int UI_FLAG_CHICKEN = 1017;	//��
const int UI_FLAG_FIRST_COST = 1018;//�׳�
const int UI_FLAG_ADMIRAL = 1019;	//����ļ
const int UI_FLAG_YELLOW = 1020;	//����
const int UI_FLAG_WHEEL = 1025;		//��������
const int UI_FLAG_STAR = 1026;		//���Ǵ���
const int UI_FLAG_QIEGAO = 1028;	//�и�/ս��������
const int UI_FLAG_JIANGXING = 1030;	//������ļ
const int UI_FLAG_BACKBOX = 1033;	//�ع鱦��
const int UI_FLAG_INVITE = 1035;	//������ѣ�5�ۿ���
const int UI_FLAG_XUNBAO = 1039;	//Ѱ���
const int UI_FLAG_LUCKCOUPON = 1042;//����ȯ
const int UI_FLAG_FUZHU = 1043;		//���츨��
const int UI_FLAG_COUNTRY = 1046;	//�����ս
const int UI_FLAG_GUID = 1047;		//��������
const int UI_FLAG_YELLOWHAOLI = 1048;//�����ͺ���
const int UI_FLAG_SEVENTARGET = 1054;//����Ŀ��
const int UI_FLAG_REGIONARENA = 1066;//��������ս


enum E_VipCard_Type
{
	VipCard_Type_NULL ,    //��VIP
	VipCard_Type_Month,    //�¿�
	VipCard_Type_Year,      //�꿨
};

enum E_VipOptType
{
	E_Vip_BUYCARD=1,
};

enum E_VipOptRet
{
	E_Vip_Ret_Success,//�ɹ�
	E_Vip_Ret_CardUnavailable,//vip����Ч
	E_Vip_Ret_CreditNotEnough,//ѫ�²���
	E_Vip_Ret_NotYellow,//���ǻ�ש
	E_Vip_Ret_ConfigErr,//���ô���
	E_Vip_Ret_VipLimit,//�ѵ�����
};

const int SEVEN_DAYS_CNT = 7; //����Ŀ������  1�����ȫ������ 2��������� 3���������� 4�����صȼ� 5��ѵ����λ 6���ռ���Դ 7��ÿ������ 8������ 9���������� 10���������� 11�������Ƽ� 12:�����ﵽ�ȼ�

enum E_SEVENDAYS_TARGET
{
	E_ST_ALL = 1,
	E_ST_QUEST,
	E_ST_UP_BUILDING,
	E_ST_BASE_LEVEL,	
	E_ST_CREATE_ARMY,
	E_ST_RES,
	E_ST_DAILY_TASK,
	E_ST_ATTACK,
	E_ST_INVITE,
	E_ST_UNLOCK,
	E_ST_SCIENCE,
	E_ST_BUILDING_LV,
};

enum E_ZHAOMU_TYPE
{
	E_ZHAOMU_TYPE_SUCCESS = 0,	//�ɹ�
	E_ZHAOMU_TYPE_WRONG_UID,	//�����UID
	E_ZHAOMU_TYPE_WRONG_TIME,	//������ʹ���
	E_ZHAOMU_TYPE_RFD_OUT_COUNT,	//������������
	E_ZHAOMU_TYPE_SAME_PEOPLE,	//���ɷ����Լ�
	E_ZHAOMU_TYPE_SAME_REGION,	//���ɷ�����ͬ��
};

enum E_FILL_PROPMPT_TYPE
{
	E_MENU_MAIN,
	E_MENU_COUNTRY,
	E_MENU_GUILD,
	E_MENU_ADMIRAL,
	E_MENU_EQUIP,
	E_MENU_BUILDING,
	E_MENU_WEAPON,
	E_MENU_PVE,
	E_MENU_STAR,
	E_MENU_HERO,
};

enum E_PLAYER_RECORD
{
	E_PLAYER_RECORD_TIMELIMIT = 1,
	E_PLAYER_RECORD_SHOPFORGIFT = 4,
};

enum E_QQ_TASK
{
	E_QQ_TASK_SUCC = 0,
	E_QQ_TASK_NO_USER = 1,
	E_QQ_TASK_NOT_COMPLETE = 2,
	E_QQ_TASK_HAS_GET = 3,
	E_QQ_TASK_UNKNOW = 200,
};


enum E_OTHER_GAME_RET
{
	E_RET_OTHERGAME_SUCCESS = 0,   //�ɹ�
	E_RET_OTHERGAME_GIFT_HAS_GAIN ,//�Ѿ���ȡ
	E_RET_OTHERGAME_GIFT_NOT_EXIST,  //��Ʒ������
};

enum E_OTHER_GAME_OPT
{
	E_OPT_OTHERGAME_INFO = 0,      //��Ϣ
	E_OPT_OTHERGAME_CREATE ,//������Ϸ
	E_OPT_OTHERGAME_GIFT,  //��ȡ����
	E_OPT_OTHERGAME_OPEN,  //�����
};

enum CrossPromotionCDKFlag
{
	CPF_Init = 0,	//δ���
	CPF_Finish,		//���
	CPF_Pick,		//����ȡ
};

enum E_BOOKCOLLE_TYPE
{
	E_BOOKCOLLE_FREE = 1,      //���
	E_BOOKCOLLE_HALF ,         //���
	E_BOOKCOLLE_WHOLE,          //ȫ��
};

////////////////////////////////////////////////////////////////
//ȫ������������

enum E_REGION_SEVER_KEY
{
	KEY_WHOLEREGION = 10000,
	KEY_WHOLECOUNTRY = 20000,
	KEY_WHOLEREGION_USERLIST = 10000,
};

enum RegionErrorLogType
{//������־����
	RegionError_LoadUserError,			//������ҳ���
};

enum E_PVE_BATTLE_CHANGJING_TYPE
{
	E_PVEBATTLE_XIULI = 1,      //1���������
	E_PVEBATTLE_SAOLEI,			//2������ɨ��
	E_PVEBATTLE_HONGZHA,        //3����ը����
	E_PVEBATTLE_SOUSUO,			//4�������ֿ�
};

enum E_PVE_BATTLE_TYPE
{
	E_PVEBATTLE_TYPE_REQ,
	E_PVEBATTLE_TYPE_ACTIVE,   
	E_PVEBATTLE_TYPE_CREDIT_ACTIVE,	
	E_PVEBATTLE_TYPE_SAODANG,
	E_PVEBATTLE_TYPE_CANCEL,       
	E_PVEBATTLE_TYPE_PVE_BATTEL,	
	E_PVEBATTLE_TYPE_PVE_BATTEL_END,
	E_PVEBATTLE_TYPE_PVE_BUY,
};

const int MAX_PVE_BATTLE_VALUE = 3;//����Ŀ��
const int MAX_JUNLING_NUM = 10;
const int BATTLE_SAODANG_TIMES = 1;
const int BATTLE_JUNLING_TIME = 14400;

enum E_ADMIRAL_EXCHANGE_RESULT
{
    E_ADMIRAL_EXCHANGE_SUCESS = 0,
    E_ADMIRAL_EXCHANGE_OUTTIMES,            //�����һ�����
    E_ADMIRAL_EXCHANGE_WRONGTIME,           //���ڻʱ��
    E_ADMIRAL_EXCHANGE_LACKSOUL,            //���겻��
	E_ADMIRAL_EXCHANGE_LACKDAILYCOST,		//���ճ�ֵѫ�²���
};

enum E_CARDDUEL_OPTTYPE
{
    E_CARDDUEL_OPT_OPEN = 0,                        ///��
    E_CARDDUEL_OPT_MATCH,                           ///ƥ��
    E_CARDDUEL_OPT_SELECT,                          ///ѡ��Ƭ
    E_CARDDUEL_OPT_DUELRESULT,                      ///�������
};

enum E_CARDDUEL_CARDTYPE
{
    E_CARDDUEL_TYPE_UNKNOW = 0,
    E_CARDDUEL_TYPE_KIROV = 1,              ///�����
    E_CARDDUEL_TYPE_APOCALYPSE,             ///����̹��
    E_CARDDUEL_TYPE_CPLASF,                 ///�й����ֱ�
};

enum E_CARDDUEL_RESULT
{
    E_CARDDUEL_Win,                         ///ʤ��
    E_CARDDUEL_Fail,                        ///ʧ��
    E_CARDDUEL_Deuce,                       ///ƽ��
};

enum E_CARDDUEL_MATCHSTATE
{
    E_CARDDUEL_NOMATCH,                 //δƥ��
    E_CARDDUEL_ONMATCHING,              //����ƥ��
    E_CARDDUEL_MATCHSUC,                //ƥ��ɹ�
};

enum HeroUseType
{
	HeroUse_NULL, //δʹ��
	HeroUse_Atk,  //������Ӫ
	HeroUse_Def,  //������Ӫ
	HeroUse_Auto, //���ű�Ӫ��Ӫ
	HeroUse_Arena, //������
	HeroUse_Max,
};

enum HeroOptRet
{
	HO_Ret_Success = 0,	    //�ɹ�
	HO_Ret_HeroNotExist,    //δ�ҵ�Ӣ��
	HO_Ret_SameHeroInUse,    //Ӣ�۴��ڳ�ս״̬
	HO_Ret_InitErro,      //��ʼ����
	HO_Ret_MaxLevel,      //���ȼ�
	HO_Ret_NoEnoughCredit, //ѫ�²���
	HO_Ret_NoEnoughRes,   //��Դ����
	HO_Ret_NoHeroCenterLevel, //Ӣ�����ĵȼ�����
	HO_Ret_HeroUseFull,  //Ӣ���Ѿ���
	HO_Ret_HeroIndexError,  //λ�ò���
	HO_Ret_HeroUseTypeError,  //��Ӫ����
	H0_Ret_CreditNotEnough, //ѫ�²���
	HO_Ret_HeroInTrian,    //Ӣ������ѵ��
	HO_Ret_GradeError,    //�Ǽ�����
	HO_Ret_HeroLetterNotExist,    //���ﲻ����
	HO_Ret_HeroInUse,    //Ӣ�۴��ڳ�ս״̬
};

enum HeroListType
{
	HeroList_0 = 0,	     //Ĭ��
	HeroList_1,           //Ѫ���仯��Ӣ�ۣ����ڿͻ��˼���Ѫ���ָ�

};

enum E_QSHOP_ITEM_ID
{//Q���̳ǹ�����ƷID
    E_QSHOP_ITEM_WC_ONTEAM =  1035,             //���籭�ھ�����Ͷעһ������
    E_QSHOP_ITEM_MIDDLEYEARGIFT = 1036,         //���к���
    E_QSHOP_ITEM_WC_SECTEAM = 1037,             //���籭�ھ�����Ͷע��������
    E_QSHOP_ITEM_WC_THRTEAM = 1038,             //���籭�ھ�����Ͷע��������
    E_QSHOP_ITEM_LEVELLUXURYGIFT = 1039,        //�ȼ�����
    E_QSHOP_ITEM_MONTHCARD = 1040,              //�쾯�¿�
    E_QSHOP_ITEM_VALENTINESGIFT_FREE = 1054,    //���˽����� ���
    E_QSHOP_ITEM_VALENTINESGIFT_SMALL = 1055,   //���˽����� 99
    E_QSHOP_ITEM_VALENTINESGIFT_BIG = 1056,     //���˽����� 999
    E_QSHOP_ITEM_VIP_MONTHCARD = 1058,          //VIP�¿�

    E_QSHOP_ITEM_RENT_EIGHT_24 = 1060,          //����8�����24Сʱ
    E_QSHOP_ITEM_RENT_EIGHT_72 = 1061,          //����8�����72Сʱ
    E_QSHOP_ITEM_RENT_EIGHT_168 = 1062,          //����8�����168Сʱ
    E_QSHOP_ITEM_RENT_NINE_24 = 1063,          //����9�����24Сʱ
    E_QSHOP_ITEM_RENT_NINE_72 = 1064,          //����9�����72Сʱ
    E_QSHOP_ITEM_RENT_NINE_168 = 1065,          //����9�����168Сʱ

    E_QSHOP_ITEM_COUNTRYBOMB = 1066,            //��սը��
    E_QSHOP_ITEM_DAILYRECHARGELOTTERY = 1067,   //ÿ�ճ�ֵ�齱
	E_QSHOP_ITEM_SECARMSDEALER = 1068,			//���ؾ�����

    E_QSHOP_ITEM_GUILDREDENVELOPE = 1076,            //������

    E_QSHOP_ITEM_VIP_DAILYGIFT = 2003,          //ÿ��VIP�������
    E_QSHOP_ITEM_VIP_DAILYFREEGIFT = 2004,      //ÿ��VIP������

	E_QSHOP_ITEM_VIP_BUY_DAILY_GIFT = 2005,		//vipÿ���޹����
	E_QSHOP_ITEM_ALL_BUY_DAILY_GIFT = 2006,		//ȫ��ÿ���޹����
	E_QSHOP_ITEM_ASSIST_GIFT		= 1135,		//��ս���
	E_QSHOP_ITEM_DUANWU_VIP			= 2007,		//����vip�
	E_QSHOP_ITEM_NEW_RECALL			= 1136,		//Ӣ�ۻع�

};


enum WpcGroupAddType
{
	WpcGroupAddTypeHP = 1,
	WpcGroupAddTypeAtk = 3,
};

enum E_PropertyGroup
{
	PG_NULL=0,
	PG_Army,
	PG_Tank,
	PG_Plane,
	PG_Hero_erth,
	PG_Hero_air,
	PG_TypeMax,
};

enum E_PropertyAddType
{
	PT_Unknow = 0,
	PT_AddHP,			    //Ѫ��
	PT_AddAtk,			    //������
	PT_AddDamageDef,	    //�˺�����
	PT_AddSpeed,		    //�ٶ�
	PT_AddCrt,			    //����
	PT_AddCrtDef,		    //��������
	PT_AddToFoot,		    //�Բ�������
	PT_AddToPlane,		    //�Էɻ�����
	PT_AddToTank,		    //��̹�˿���
	PT_DefToFoot,		    //�Բ�������
	PT_AddToHero,		    //��Ӣ�ۿ���
	PT_DefToPlane,		    //�Էɻ�����
	PT_DefToTank,		    //��̹�˷���
	PT_DefToHero,		    //��Ӣ�۷���
	PT_PropertyAddCnt,
};

enum FightArenaType
{
	Fight_NULL = 0,
	Fight_PVE   = 1,  //PVE
	Fight_Country,    //��ս
	Fight_Arena,	  //���Ҿ�����
	Fight_WorldArena, //���羺����	
	Fight_Guild,	  //����ս
	Fight_RegionArena, //���羺����
	Fight_Battle,     //ս��
	Fight_RegionCountry,    //�����ս
	Fight_Gve,    //gve
	Fight_HeroArena, //Ӣ�۾�����
	Fight_Resource,
	Fight_Gvg,    //gve
	Fight_BossBtl,    //Bossս
	Fight_Max,
};

enum FightType
{
    Fight_PVE_User = 0,
    Fight_PVE_NPC,
    Fight_PVP_Atk,	//������
    Fight_PVP_Def,	//������
    Fight_PVP_NPC,	//��ս�й���NPC
};

enum CountryOptResult
{//���Ҳ�������ֵ
    E_COTR_NoBomb = 45,         //ȱ��ը��
    E_CORT_TPNotAllow,          //��������
    E_CORT_NoTPScroll,          //û�д��;���
    E_CORT_OtherCountry,        //���Ҳ��� �����Դ���
};

enum WPCCOMExtraType
{
    WET_NORMAL = 0,
    WET_EXTRA  = 2, //�������
};

enum WPCOptResultType
{
    WT_OR_EXTRA_NOALLOW = 19,       //�����������װ������
};

const int GVG_FIGHT_DEL_TIME = 3600;



//���а���������
const int RANK_ZHANGONG_USERCNT = 100;
const int RANK_ZHANGONG_MINSCORE = 2000;

enum E_WARCOLLEGE_STRATEGY_TYPE
{
	WC_STRATEGY_ATTACK = 1,
	WC_STRATEGY_BOUND,//����
	WC_STRATEGY_LIFE,
	WC_STRATEGY_SPEED,
	WC_STRATEGY_TANK,
	WC_STRATEGY_PROTECT,//����
	WC_STRATEGY_MAX
};

enum E_WARCOLLEGE_SKILL_TYPE
{
	WC_SKILL_SHIELD = 1,
	WC_SKILL_HURT,
	WC_SKILL_BATTER,//����
	WC_SKILL_MAX
};

enum WPCEmblemExtraType
{
	WEMT_NORMAL = 0,
	WEMT_EXTRA  = 2, //�������
};

const int SecArmsDealer_Award_Max = 4;//���ؾ����̽����������ֵ

enum E_Super_Storm_Result
{
    //0���ɹ� 1��û�г���ǿ���� 2����ͬ�� 3����Ч��UID 4���ȼ����� 5�����ڱ����� 6��ǿ����ʹ��CD 7����������̫Ƶ�� 8�����ǳ�� 9�����ڱ�ǿ�� 10:�ܾ�����
    E_SSR_Succ = 0,
    E_SSR_NoToken,              //û�г���ǿ����
    E_SSR_DiffRegion,           //��ͬ��
    E_SSR_NullityUid,           //��Ч��UID
    E_SSR_ProtectLv,            //�ȼ�����
    E_SSR_BeAttcked,            //���ڱ�����
    E_SSR_StormOnCD,            //ǿ����ʹ��CD
    E_SSR_BeStormTooOfen,       //��������̫Ƶ��
    E_SSR_NoEnemy,              //���ǳ��
    E_SSR_OnStorm,              //���ڱ�ǿ��
    E_SSR_RefuseOutTime,        //�ܾ�����
    E_SSR_DestroyProtect,       //�ݻٱ���
    E_SSR_OnSundayDefendActv,   //���ڹ����շ���
    E_SSR_AtkCntOverMax,	    //���չ���һ����ҳ���3��
};

enum E_BOSSBTLSTATE
{
	E_BOSSBTLSTATE_UNKNOWN,
	E_BOSSBTLSTATE_OVER_DAWN,
	E_BOSSBTLSTATE_PREPARE,//δ��ʼ
	E_BOSSBTLSTATE_BATTLE, //��ʼ
	E_BOSSBTLSTATE_END,	   //������������
	E_BOSSBTLSTATE_OVER,   //������
    E_BOSSBTLSTATE_UPOVER,  //��������
};

enum E_BOSSBTL_BOSSID
{
	E_BOSSBTL_BOSSID_START = 50000,
	E_BOSSBTL_BOSSID_SAT = E_BOSSBTL_BOSSID_START + 5,
	E_BOSSBTL_BOSSID_SUN = E_BOSSBTL_BOSSID_START + 6,
	E_BOSSBTL_BOSSID_END = E_BOSSBTL_BOSSID_SUN,
};

const int BOSSBTL_RANK_CNT_BASE = 3;
const int BOSSBTL_RANK_CNT_BTL = 10;
const int BOSSBTL_RANK_CNT_ALL = 100;
const int BOSSBTL_MAXRANK_CNT  = 10;

const int BOSSBTL_UP_CNT = 5;	//bossս��������
const int BOSSBTL_UP_MAX = 100; //bossս������ʾ����

enum E_BOSS_REWARD_TYPE
{
	E_BOSS_REWARD_TYPE_RANK = 1,
	E_BOSS_REWARD_TYPE_KILL,
	E_BOSS_REWARD_TYPE_LUCKY,
};

const int BOSSBTL_RECORD_MAX = 100; //

const int BOSSBTL_RE_CREDIT = 20;
const int BOSSBTL_CD_TIME = 30;

const int BOSSBTL_MAX_REPORT_CNT = 5;

enum E_MS_OPT_TYPE
{
    // 1:�� 2:������� 3:������ 4:�������� 5���������� 6�����ü��� 7���������� 
    E_MS_OPT_TYPE_OPEN = 1,
    E_MS_OPT_TYPE_ACTIVE,
    E_MS_OPT_TYPE_COMPREHEND,
    E_MS_OPT_TYPE_SOULUPGRADE,
    E_MS_OPT_TYPE_SKILLUPGRADE,
    E_MS_OPT_TYPE_RESETSKILL,
    E_MS_OPT_TYPE_LOCKSKILL,
};

enum E_MS_OPT_RESULT
{
    //0���ɹ� 1������㲻�� 2����Ч�ľ��� 3����Ч�ļ��� 4��ѫ�²��� 5����Ч���� 6����������� 7�������Ѿ����� 8�������Ѿ��ﵽ��ߵȼ�
    //9�����ܸ����������� 10���Ѿ������� 11�����ܵȼ��������� 12�������Ѿ����� 13��ȱ�����ü��ܵ��� 14��û�п����ü���
    //15:�����������ܸ������� 16����ҵȼ�δ��20 17:����ϵͳ�ر�
    E_MS_OPT_RESULT_Succ = 0,
    E_MS_OPT_RESULT_NeedMorePoint,
    E_MS_OPT_RESULT_NullitySoul,
    E_MS_OPT_RESULT_NullitySkill,
    E_MS_OPT_RESULT_NeedMoreCredit,
    E_MS_OPT_RESULT_NullityOpt,
    E_MS_OPT_RESULT_WrongData,
    E_MS_OPT_RESULT_HasActiveSoul,
    E_MS_OPT_RESULT_MaxSoulLv,
    E_MS_OPT_RESULT_OverSkillNumLimit,
    E_MS_OPT_RESULT_HasComprehendSkill,
    E_MS_OPT_RESULT_SkillLVOutLimit,
    E_MS_OPT_RESULT_SkillHasLock,
    E_MS_OPT_RESULT_NoResetItem,
    E_MS_OPT_RESULT_NoResetSkill,
    E_MS_OPT_RESULT_OverLockLimit,
    E_MS_OPT_RESULT_WrongLevel,
    E_MS_OPT_RESULT_MilitarySoulClose,
};

enum E_MS_POINT_OPT_TYPE
{
    //���ľ���� 1��������� 2���������� 3�������� 4���������� 5���������� 
    E_MS_POINT_OPT_Cost_ActiveSoul = 1,
    E_MS_POINT_OPT_Cost_UpdateSoul,
    E_MS_POINT_OPT_Cost_ActiveSkill,
    E_MS_POINT_OPT_Cost_UpdateSkill,
    E_MS_POINT_OPT_Cost_LockSkill,

    //���Ӿ��� 100������Ա�ӿ����� 101�����ü��ܷ��� 102��������� 103����ս���� 104:BOSSս����
    E_MS_POINT_OPT_ADD_AddminAdd = 100,
    E_MS_POINT_OPT_ADD_ResetSkill,
    E_MS_POINT_OPT_ADD_GiftPackage,
    E_MS_POINT_OPT_ADD_PVEGift,
	E_MS_POINT_OPT_ADD_BossBtl,
};

enum 
{
	//˫ʮһ�������ʱ��
	DOUBLE_ELEVEN_MAX_DAY = 5
};

enum E_GUILD_REDENVELOPE_OPT_TYPE
{
    //�������� 0���� 1:���ź�� 2������� 3:������� 4���鿴ȫ���ĺ�� 5���鿴������ĺ�� 6���鿴������Ϣ
    //7:�鿴���� 8:�鿴������Ϣ
    //100:������� 101;ˢ��ѹ��Ǯ��� 102:�������ȡ��
    E_GUILD_REDENVELOPE_OPEN = 0,
    E_GUILD_REDENVELOPE_ISSUE,
    E_GUILD_REDENVELOPE_SNAPPE,
    E_GUILD_REDENVELOPE_REDENVELOPEINFO,
    E_GUILD_REDENVELOPE_ALLREDENVELOPE,
    E_GUILD_REDENVELOPE_GUILDREDENVELOPE,
    E_GUILD_REDENVELOPE_PERSONALLOG,
    E_GUILD_REDENVELOPE_CHECKRANK,
    E_GUILD_REDENVELOPE_CHECKPERSONALINFO,
    E_GUILD_REDENVELOPE_REFUND = 100,
    E_GUILD_REDENVELOPE_REFRESH,
    E_GUILD_REDENVELOPE_SNAPPEOVER,
};

enum E_GUILD_REDENVELOPE_OPT_RESULT
{
    //0���ɹ� 1��ѹ��Ǯ���� 2���ú�������� 3���ú���Ѿ���ȡ 4�������� 5������빫�� 6���ú���Ѿ������� 7:����Ѿ����� 8�������
    //9:���ȼ���ù��� 10:����ȼ�С��2��
    //100:δ֪����
    E_GUILD_REDENVELOPE_R_SUC = 0,
    E_GUILD_REDENVELOPE_R_MORECREDIT,
    E_GUILD_REDENVELOPE_R_WRONGID,
    E_GUILD_REDENVELOPE_R_HASGET,
    E_GUILD_REDENVELOPE_R_WRONGCREDIT,
    E_GUILD_REDENVELOPE_R_NOGUILD,
    E_GUILD_REDENVELOPE_R_HASSNAPPEUP,
    E_GUILD_REDENVELOPE_R_HASOVERDUE,
    E_GUILD_REDENVELOPE_R_ACTOVERDUE,
    E_GUILD_REDENVELOPE_R_NOTGUILDMEMBER,
    E_GUILD_REDENVELOPE_R_GUILDLVLIMIT,

    E_GUILD_REDENVELOPE_R_UNKNOW = 100,
    E_GUILD_REDENVELOPE_R_GUILDNOFOUND,
};

enum E_GUILD_REDENVELOPE_YASUIQIAN
{
    E_GUILD_REDENVELOPE_YASUIQIAN_BUY,
    E_GUILD_REDENVELOPE_YASUIQIAN_SNAPPE,
    E_GUILD_REDENVELOPE_YASUIQIAN_REFUND,
    E_GUILD_REDENVELOPE_YASUIQIAN_FAILISSUE,
    E_GUILD_REDENVELOPE_YASUIQIAN_ADMINADD,

    E_GUILD_REDENVELOPE_YASUIQIAN_ISSUE = 100,
};

enum E_GUILD_REDENVELOPE_OWNELOG
{
    ////������־ 1��Ϊ��ȡ 2������ 3����ȡ��� 4��������� 5��ȡ��
    E_GUILD_REDENVELOPE_OWNELOG_SNAPPE = 1,
    E_GUILD_REDENVELOPE_OWNELOG_ISSUE,
    E_GUILD_REDENVELOPE_OWNELOG_ALLSNAPPED,
    E_GUILD_REDENVELOPE_OWNELOG_REFUND,
    E_GUILD_REDENVELOPE_OWNELOG_WITHDRAWAL,
};

/** ÿ������ */
const int TIME_DAY_SECOND = 86400;

enum
{
	INIT_PLAYER_COINS = 2800,
	INIT_PLAYER_MINERALS = 900,
	INIT_PLAYER_TOTALCOINS = 9000,
	INIT_PLAYER_TOTALMINERALS = 9000,
	INIT_PLAYER_CASH = 100,
	INIT_PLAYER_DMGPROTECTIONTIMETOTAL = TIME_DAY_SECOND * 3 * 1000,// ��ʼ��ֳ�񱣻�ʱ��
	INIT_PLAYER_PLANETTYPE = 3,
	INIT_PLAYER_HQLEVEL = 1,
	INIT_PLAYER_DROIDS = 1,
};

enum
{
	MAX_HQ_LEVEL = 8,
	ID_CAPITAL_PLANET = 1,
	MAX_NUM_COMMON_ID = 1,
};

enum
{
	SKU_wonders_headquarters	=	10001,
	SKU_rc_001_001	=	20001,
	SKU_rm_001_001	=	20002,
	SKU_rs_002_001	=	20003,
	SKU_rs_001_001	=	20004,
	SKU_labs_observatory	=	20005,
	SKU_hangar_001_001	=	30001,
	SKU_barracks_001_001	=	30002,
	SKU_mechas_001_001	=	30003,
	SKU_shipyards_001_001	=	30004,
	SKU_labs_001_001	=	30005,
	SKU_labs_002_001	=	30006,
	SKU_df_001_004	=	40001,
	SKU_df_001_001	=	40002,
	SKU_df_001_005	=	40003,
	SKU_df_001_003	=	40004,
	SKU_df_001_007	=	40005,
	SKU_df_001_010	=	40006,
	SKU_df_001_002	=	50001,
	SKU_df_001_006	=	50002,
	SKU_bunker_001_002	=	50003,
	SKU_bunker_001_001	=	50004,
	SKU_df_001_008	=	50005,
	SKU_df_001_009	=	50006,
	SKU_d_001_013	=	60001,
	SKU_d_001_014	=	60002,
	SKU_d_001_012	=	60003,
	SKU_d_001_011	=	60004,
	SKU_d_001_001	=	60005,
	SKU_d_001_002	=	60006,
	SKU_d_001_016	=	60007,
	SKU_d_001_010	=	60008,
	SKU_groundUnits_001_001	=	70001,
	SKU_groundUnits_001_002	=	70002,
	SKU_groundUnits_001_003	=	70003,
	SKU_groundUnits_001_005	=	70004,
	SKU_groundUnits_001_004	=	70005,
	SKU_groundUnits_001_006	=	70006,
	SKU_mecaUnits_001_000	=	70007,
	SKU_mecaUnits_002_000	=	70008,
	SKU_mecaUnits_003_000	=	70009,
	SKU_mecaUnits_004_000	=	70010,
	SKU_warSmallShips_001_002	=	70011,
	SKU_warSmallShips_001_003	=	70012,
	SKU_warSmallShips_001_001	=	70013,
	SKU_warSmallShips_001_004	=	70014,
	SKU_mecaUnits_005_000	=	70015,
	SKU_o_001_001	=	80001,
	SKU_o_001_002	=	80002,
	SKU_o_001_003	=	80003,
	SKU_o_001_004	=	80004,
	SKU_o_001_005	=	80005,
	SKU_o_001_006	=	80006,
	SKU_o_001_007	=	80007,
	SKU_o_001_008	=	80008,
	SKU_o_001_009	=	80009,
	SKU_o_001_010	=	80010,
	SKU_o_001_011	=	80011,
	SKU_o_001_012	=	80012,
	SKU_o_001_013	=	80013,
	SKU_o_001_014	=	80014,
	SKU_o_001_015	=	80015,
	SKU_o_001_016	=	80016,
	SKU_o_001_017	=	80017,
	SKU_o_001_018	=	80018,
	SKU_o_001_019	=	80019,
	SKU_o_001_020	=	80020,
	SKU_o_001_021	=	80021,
	SKU_o_001_022	=	80022,
	SKU_o_001_023	=	80023,
	SKU_o_001_024	=	80024,
	SKU_o_001_025	=	80025,
	SKU_o_001_026	=	80026,
	SKU_o_001_027	=	80027,
	SKU_o_001_028	=	80028,
	SKU_o_001_029	=	80029,
	SKU_o_001_030	=	80030,
	SKU_o_001_031	=	80031,
	SKU_o_001_032	=	80032,
	SKU_o_001_033	=	80033,
	SKU_o_001_034	=	80034,
	SKU_o_001_035	=	80035,
	SKU_o_001_036	=	80036,
	SKU_o_001_037	=	80037,
	SKU_o_001_038	=	80038,
	SKU_o_001_039	=	80039,
	SKU_o_001_040	=	80040,
	SKU_o_001_041	=	80041,
	SKU_o_001_043	=	80042,
	SKU_o_001_044	=	80043,
	SKU_o_001_045	=	80044,
	SKU_o_001_047	=	80045,
	SKU_o_001_048	=	80046,
	SKU_o_001_049	=	80047,
	SKU_o_001_051	=	80048,
	SKU_o_001_052	=	80049,
	SKU_o_001_053	=	80050,
	SKU_o_001_054	=	80051,
	SKU_o_001_055	=	80052,
	SKU_o_001_056	=	80053,
	SKU_o_001_057	=	80054,
	SKU_o_001_058	=	80055,
	SKU_o_001_059	=	80056,
	SKU_o_001_060	=	80057,
	SKU_o_001_061	=	80058,
	SKU_o_001_062	=	80059,
	SKU_o_001_063	=	80060,
	SKU_o_001_064	=	80061,
	SKU_o_001_065	=	80062,
	SKU_o_001_066	=	80063,
	SKU_o_001_067	=	80064,
	SKU_o_001_068	=	80065,
	SKU_o_001_069	=	80066,
	SKU_o_001_070	=	80067,
	SKU_o_001_071	=	80068,
	SKU_o_001_072	=	80069,
	SKU_o_001_073	=	80070,
	SKU_o_001_074	=	80071,
	SKU_o_001_075	=	80072,
	SKU_o_001_076	=	80073,
	SKU_o_001_077	=	80074,
	SKU_o_001_078	=	80075,
	SKU_o_001_079	=	80076,
	SKU_o_001_080	=	80077,
	SKU_o_001_081	=	80078,
	SKU_o_001_082	=	80079,
	SKU_o_001_083	=	80080,
	SKU_o_001_084	=	80081,
	SKU_o_001_085	=	80082,
	SKU_o_001_086	=	80083,
	SKU_o_001_087	=	80084,
	SKU_o_001_088	=	80085,
	SKU_o_001_090	=	80087,
	SKU_o_001_091	=	80088,
	SKU_o_001_092	=	80089,
	SKU_o_001_093	=	80090,
	SKU_o_001_094	=	80091,
	SKU_o_001_095	=	80092,
	SKU_o_001_096	=	80093,
	SKU_o_001_097	=	80094,
	SKU_o_001_098	=	80095,
	SKU_o_001_099	=	80096,
	SKU_o_001_100	=	80097,
	SKU_o_001_101	=	80098,
	SKU_o_001_102	=	80099,
	SKU_o_001_103	=	80100,
	SKU_o_001_104	=	80101,
	SKU_o_001_105	=	80102,
	SKU_o_001_106	=	80103,
	SKU_o_001_107	=	80104,
	SKU_o_001_108	=	80105,
	SKU_o_001_109	=	80106,
	SKU_o_001_110	=	80107,
	SKU_o_001_111	=	80108,
	SKU_o_001_112	=	80109,
	SKU_o_001_113	=	80110,
	SKU_o_001_114	=	80111,
	SKU_o_001_115	=	80112,
	SKU_o_001_116	=	80113,
	SKU_o_001_117	=	80114,
	SKU_o_001_118	=	80115,
	SKU_o_001_119	=	80116,
	SKU_o_001_120	=	80117,
	SKU_o_001_121	=	80118,
	SKU_o_001_122	=	80119,
	SKU_o_001_123	=	80120,
	SKU_o_001_124	=	80121,
	SKU_o_001_125	=	80122,
	SKU_o_001_126	=	80123,
	SKU_o_001_127	=	80124,
	SKU_o_001_128	=	80125,
	SKU_o_001_129	=	80126,
	SKU_o_001_130	=	80127,
	SKU_o_001_131	=	80128,
	SKU_o_001_132	=	80129,
	SKU_o_001_133	=	80130,
	SKU_o_001_134	=	80131,
	SKU_o_001_135	=	80132,
	SKU_o_001_136	=	80133,
	SKU_o_001_137	=	80134,
	SKU_o_001_138	=	80135,
	SKU_o_001_139	=	80136,
	SKU_o_001_140	=	80137,
	SKU_o_001_141	=	80138,
	SKU_o_001_142	=	80139,
	SKU_o_001_143	=	80140,
	SKU_o_001_144	=	80141,
	SKU_o_001_145	=	80142,
	SKU_o_001_146	=	80143,
	SKU_o_001_147	=	80144,
	SKU_o_001_148	=	80145,
	SKU_o_001_149	=	80146,
	SKU_o_001_150	=	80147,
	SKU_o_001_151	=	80148,
	SKU_o_001_152	=	80149,
	SKU_o_001_153	=	80150,
	SKU_o_001_154	=	80151,
	SKU_o_001_155	=	80152,
	SKU_o_001_156	=	80153,
	SKU_o_001_157	=	80154,
	SKU_o_001_158	=	80155,
	SKU_o_001_159	=	80156,
	SKU_o_001_160	=	80157,
	SKU_finished	=	90001,
	SKU_npc_A	=	1,
	SKU_npc_B	=	2,
	SKU_npc_C	=	3,
	SKU_npc_D	=	4,
	SKU_specialAttack_1	=	7000	,
	SKU_specialAttack_2	=	7001	,
	SKU_specialAttack_3	=	7002	,
	SKU_specialAttack_10	=	7200	,
	SKU_pumpkin	=	4001	,
};

enum
{
	SocialItem_mistery_gift	    		=	1,
	SocialItem_defense_trap				=	6,
	SocialItem_defense_trap1			=	7,
	SocialItem_unit_starlinator			=	8,
	SocialItem_unit_colossus			=	9,
	SocialItem_unit_zeppelin			=	10,
	SocialItem_blue_light_battery		=	25,
	SocialItem_blue_light_fuel			=	26,
	SocialItem_droidPart1				=	30,
	SocialItem_droidPart2				=	31,
	SocialItem_droidPart3				=	32,
	SocialItem_worker_freeWorker		=	33,
	SocialItem_item_alliance1			=	40,
	SocialItem_item_alliance2			=	41,
	SocialItem_item_alliance3			=	42,
	SocialItem_skull					=	100,
	SocialItem_bones					=	101,
	SocialItem_eggs						=	102,
	SocialItem_incubator				=	103,
	SocialItem_ambar_moskito			=	104,
	SocialItem_golden_skull				=	105,
	SocialItem_golden_idol				=	106,
	SocialItem_golden_imperdible		=	107,
	SocialItem_lingote					=	108,
	SocialItem_ring						=	109,
	SocialItem_stone_skull				=	110,
	SocialItem_mineral_skull			=	111,         
	SocialItem_silver_skull				=	112,              
	SocialItem_silver_idol				=	113,               
	SocialItem_stone_idol				=	114,              
	SocialItem_wood_idol				=	115,            
	SocialItem_mineral_idol				=	116,               
	SocialItem_mineral_eye				=	117,               
	SocialItem_mineral_teeth			=	118,           
	SocialItem_mineral_weap				=	119,
	SocialItem_seed2					=	120,                  
	SocialItem_branch1					=	121,           
	SocialItem_toymine					=	122,
	SocialItem_treestar					=	123,
	SocialItem_present					=	124,
	SocialItem_trap_housing				=	150,               
	SocialItem_trap_trigger				=	151,               
	SocialItem_trap_structure			=	152,       
	SocialItem_trap_explosives			=	153,           
	SocialItem_sensor					=	154,               
	SocialItem_flytrap_housing			=	155,           
	SocialItem_flytrap_propellant		=	156,       
	SocialItem_flytrap_cannons			=	157,           
	SocialItem_flytrap_explosives		=	158,       
	SocialItem_gun						=	159,              
	SocialItem_helmet_housing			=	160,           
	SocialItem_eyepart					=	161,          
	SocialItem_booster					=	162,           
	SocialItem_ammunition				=	163,           
	SocialItem_tank_cannon				=	164,           
	SocialItem_tank_housing				=	165,      
	SocialItem_missile_launcher			=	166,           
	SocialItem_missile					=	167,           
	SocialItem_propeller				=	168,           
	SocialItem_zeppelin_housing			=	169,       
	SocialItem_aileron					=	170,       
	SocialItem_bombs					=	171,       
	SocialItem_pirate_hat				=	172,           
	SocialItem_missileBox				=	200,             
	SocialItem_misilSet					=	201,           
	SocialItem_propulsors				=	202,               
	SocialItem_redButton				=	203,           
	SocialItem_catapult					=	208,               
	SocialItem_rope_catapult			=	209,       
	SocialItem_stone					=	210,               
	SocialItem_wood						=	211,       
	SocialItem_decoration_ancestor		=	300,           
	SocialItem_decoration_stoneidol		=	301,           
	SocialItem_alliance_building		=	303,            
	SocialItem_decoration_xmastree		=	304,           
	SocialItem_decoration_skulltemple	=	305,       
	SocialItem_keyjail					=	1000,
	SocialItem_coins					=	5000,              
	SocialItem_experience				=	5001,          
	SocialItem_minerals					=	5002,              
	SocialItem_missile_rain				=	7000,          
	SocialItem_boulder_strike			=	7001,              
	SocialItem_chips1every50			=	8000,              
	SocialItem_chips1every5				=	8001, 


};

enum
{
	ERROR_CODE_INDEFINED = 0,
	ERROR_CODE_INVALID_COMMAND = 1,
	ERROR_CODE_INVALID_PARAMETERS = 2,
	ERROR_CODE_NAME_TOO_SHORT = 3,
	ERROR_CODE_NAME_ALREADY_TAKEN = 4,
	ERROR_CODE_ALREADY_MEMBER_OF_AN_ALLIANCE = 5,
	ERROR_CODE_ALLIANCE_IS_FULL = 6,
	ERROR_CODE_ALLIANCE_WAS_EMPTY = 7,
	ERROR_CODE_ALLIANCE_NOT_FOUND = 8,
	ERROR_CODE_MEMBER_NOT_FOUND = 9,
	ERROR_CODE_MEMBER_NOT_IN_AN_ALLIANCE = 10,
	ERROR_CODE_INTERNAL_ERROR = 11,
	ERROR_CODE_TIMEOUT = 12,
	ERROR_CODE_NO_PERMISSION = 13,
	ERROR_CODE_MY_ALLIANCE_ALREADY_IN_WAR = 14,
	ERROR_CODE_ALLIANCE_ALREADY_IN_WAR = 15,
	ERROR_CODE_ALLIANCE_LOCKED = 16,
	ERROR_CODE_ALLIANCE_HAS_POST_WAR_SHIELD = 17,
	// 18���϶�Ϊ�Զ���
	ERROR_CODE_ALLIANCE_WAR_Not_ALLOWED = 18,
	ERROR_CODE_ALLIANCE_NEED_LEVEL = 19,
};

enum
{
	Alliances_Role_LEADER = 1,
	Alliances_Role_ADMIN  = 2,
	Alliances_Role_REGULAR = 3,
};
