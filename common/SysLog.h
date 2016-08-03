#pragma once
#include <fstream>
#include <iostream>
#include <string>
#ifdef _WIN32
#include <WinSock2.h>
#include "wtypes.h"
#include <Windows.h>
#else
#include <string.h>
#endif

#include <pthread.h> 
#include "const_def.h"
#include "SysLogNet.h"
const int	TURNON_LOG				= 1;			//�Ƿ�д����־	
const int	TURNON_DEBUG			= 1;			//�Ƿ�д��debug��־
using namespace std;


enum LOG_TYPE
{
	LT_LogOn = 0,
	LT_LogOut,
	LT_Register,
	LT_BanLogin,
	LT_Upgrade,
	LT_StarStat,
	LT_TransferUser,
	LT_MDB_Error,
	LT_LoadByMDB,
	LT_Expiate,			//����
	LT_UserBanLogin,
	LT_ClearData,
	LT_WaiGua,
	lT_WaiGuaBan,
	LT_RemoveUser,		//�Ƴ��������û�
	LT_FinishTutorial,	//�����������
	LT_ErrorLog,	
	LT_BtlWaiGua,
	LT_BtlWaiGuaKick,
	LT_BtlForwardMsg,
	LT_RemovePlat,
	LT_AtkByWaiGua,
	LT_AddArmyHPError,
	LT_RegisterError,
	LT_Debug,
	LT_SrvDebug,
	LT_InitError,
	LT_UniteRegion,
	LT_SendWarning,
	LT_DBBackUp,
	LT_DBRollBack,

	LT_AddCredit,
	LT_CostCredit,
	LT_AddRes,
	LT_CostRes,
	LT_SetRes,
	LT_CreditBuy,
	LT_FinishTask,
	LT_DelArmy,
	LT_DelEmeny,
	LT_AddHonor,
	LT_CostHonor,
	LT_HonorOver,
	LT_ShopBuy,
	LT_AddFeats,
	LT_CostFeats,	

	//�������
	LT_EarthPct,
	LT_ResPct,
	LT_BldCreditRepair,
	LT_BldCreditAccCreate,
	LT_BldCreateAccUpgrade,
	LT_BldCreateAccArmyUpgrade,
	LT_BldCreditAccArmyCreate,
	LT_BldUnProduce,
	LT_BldProduce,
	LT_BldCreditUpgrade,
	LT_BldUpgrade,
	LT_BldUnUpgrade,
	LT_BldCreditArmyUpgrade,
	LT_BldArmyUpgrade,
	LT_BldCreditCreate,
	LT_BldCreate,
	LT_BldUnCreate,
	LT_MineCreditUpgrade,
	LT_MineUpgrade,
	LT_MineUnUpgrade,
	LT_MineCreditProduce,
	LT_MineCreditAccUpgrade,
	LT_FinishBld,
	LT_FinishUpgrade,
	LT_StartRepair,
	LT_FinishRepair,
	LT_BldStopRun,
	LT_BldDestroy,
	LT_BldDestroyByNPC,
	LT_UnlockVipMine,
	LT_LogOnByOther,
	LT_CheckRes,
	LT_GetRes,
	LT_CacuBaseValue,
	LT_CacuBaseValueError,
	LT_AddBasePoint,
	LT_AddBasePointTmp,
	LT_RecoverArmy,
	LT_BldArmyUnUpgrade,
	LT_WPCExplore,
	LT_WPCCombine,
	LT_WPCQuickCombine,
	LT_AddCaptureBase,
	LT_LoseCaptureBase,
	LT_CapturedByUser,
	LT_CaptureFree,	
	LT_BldSlaveRoomGetRes,
	LT_BLdSlaveRoomHit,
	LT_WPCExploreScene,
	LT_WPCAddEmblem,
	LT_WPCostEmblem,
	LT_WPCEmblemUpgrade,
	LT_WPCAddEmblemExp,
	LT_WPCBookCombine,
	LT_WPCBookQuickCombine,
	LT_WPCAddBook,

	LT_BldStopRunDef,
	LT_BldStopRunAtk,
	LT_BldAutoRepair,

	LT_BldZhuziRes,
	LT_BldZhuziCredit,
	LT_BldZhuziLvUp,
	LT_BldZhuziAllRes,
    LT_UnlockRedwarVipMine,

	//�������
	LT_AddJunGong,				//���Ӿ���
	LT_CostJunGong,				//���ľ���
	//�������
	LT_AddAdmiral,
	LT_DelAdmiral,
	LT_AddAdmiralSoul,
	LT_CostAdmiralSoul,
	LT_VisitAdmiral2Adm,		//�ݷý����ý���
	LT_VisitAdmiral2Soul,		//�ݷý����ý���
	LT_VisitAdmiral2Train,		//�ݷý�����������Ӣ
	LT_AddAdmiralSkill,
	LT_DelAdmiralSkill,
	LT_AdmiralSkillUpgrade,
	LT_AdmiralSkillAddExp,
	LT_AdmiralSelFree,			//ѡ����ѽ���
	LT_AdmiralSell,				//������
	LT_AdmiralTeach,			//����
	LT_AdmiralUseItem,			//ʹ�õ��߼Ӿ���
	LT_AdmiralAddProp,			//��������
	LT_AddAdmiralCostGift,		//��ֵ�����ý���
	LT_AdmiralCostGiftTrain,	//��ֵ�����ý�����������
	LT_Item_AddAdmiral,			//��Ʒ��ý���
	LT_Item_AddAdmiralTrainExp,	//��Ʒ��ý�����������
	LT_AdmiralAddExp,			//�����þ���
	LT_AdmiralSkillUp,			//���켼������
	LT_AdmiralSkillTurn,			//���켼��ת��
	LT_AdmiralOpt,			//�������
	LT_AddAdmiralLetter,   //���ӽ�������
	LT_CostAdmiralLetter,  //���Ľ�������
	LT_AdmiralCompose,  //���Ľ�������


	LT_SendGift,
	LT_SendGiftToPlat,
	LT_GiftWinCount,
	LT_BannerGift,
	LT_Photo,

	//ս�����
	LT_BtlNPCStart,
	LT_BattleStart,
	LT_BattleEnd,
	LT_CalHonor,
	LT_BtlCaptureStart,
	LT_BtlCaptureEnd,
	LT_BtlNPCActiveStart,
	LT_BtlNPCActiveEnd,
	LT_BtlSendArmy,	//�ɱ�
	LT_BtlBaseDefNPCStart,
	LT_BtlBaseDefNPCStep,
	LT_BtlBaseDefNPCEnd,
	LT_BtlBaseDefNPCArmy,
	LT_BtlArmyGroupStart,
	LT_BtlArmyGroupEnd,
	LT_BtlPveBattleStart,
	LT_BtlPveBattleEnd,

	//�������
	LT_AddBagItem,
	LT_CostBagItem,
	LT_UseGiftPackage,
	LT_UseStakeBox,
	LT_DestroyBagItem,
	LT_BagItemOutDate,
	LT_BagUpgrade,	//��������
	LT_BagAdd2Tmp,	//������ʱ����
	LT_BagLost4Full,//��������������Ʒ��ʧ
	LT_BagTmp2Bag,	//��ʱ������Ʒ���뱳��
	LT_BagTmpDestroy,//��ʱ������Ʒɾ��
	LT_AddVirtualItem,  //����������Ʒ
	LT_CostVirtualItem,
	LT_BAGITEM_EXCHANGE,			//�һ�����
	LT_ItemCompount,
	LT_ItemAutoDelete, //������Ʒ�Զ�ɾ��

	//�ٻغ���
	LT_CallBackFriend,
	LT_CallBackFriendPlatid,
	//webgift
	LT_WebGift,
	LT_CallBackFriendBackGift,
	LT_CallBackFriendBack,
	

	//������½�������
	LT_CONTINUE_LAND_LOG,
	//�������
	LT_SCIENCELEVELUP,// �Ƽ�����

	//�������
	LT_GiftSend,		//����/��ȡ����
	LT_GiftDelGet,		//ɾ������
	LT_GiftAccept,		//��������
	LT_GiftResend,		//��������
	LT_Gift2Bag,		//������뱳��
	LT_AddGift,			// ��������
	//����npc
	LT_DEFENSE_NPC,
	LT_DEFENSE_ADDARMY,
	//����
	LT_MoonStake,		//����齱
	LT_MoonAccReward,	//�ۼƽ���
	LT_MoonAddCnt,	//�ۼƽ���
	LT_MoonGetRank,	//��ȡ���а���
	LT_REWARD_PRIZE,	//��ֵ�����
	LT_FAMOUSHALL_PRIZE,//�������������а�
	LT_PickUniteRegionGift,	//��ȡ�Ϸ����

	//���ڹ��ҷ���������־
	LT_CNTR_ERROR,
	
	//�������
	LT_CNTR_SelCountry,
	LT_CNTR_ChgCountry,
	LT_CNTR_Attack,
	LT_CNTR_CaptureCity,	//ռ��
	LT_CNTR_CityChg,
	LT_CNTR_Spy,			//���
	LT_CNTR_PickBox,		//��ȡ���ұ���
	LT_CNTR_OpenBox,		//�򿪹��ұ���
	LT_CNTR_ZhaoGongChg,	//ս���һ�
	LT_CNTR_Rank,			//�������а�
	LT_CNTR_AddCoin,		//��������ʿ������ս��
	LT_CNTR_CostCoin,		//��������ʿ������ս��
	LT_CNTR_BloodBtlStart,	//Ѫս��ʼ
	LT_CNTR_BloodBtlEnd,	//Ѫս����
	LT_CNTR_LaunchBloodBtl,	//����Ѫս
	LT_CNTR_GetDailyGift,	//��ȡÿ��ս������
    LT_CNTR_SendTributeGift,//���������ս����
	LT_CNTR_ZhanGongRank,	//ս�����а�
	LT_CNTR_RANDSTORMBOX,	//����籩����
	LT_CNTR_ADDSTORMBOX,	//�õ��籩����

	//�������
	LT_Guild_Create,		//��������
	LT_Guild_Dismiss,		//�����ɢ
	LT_Guild_AddUser,		//������ӳ�Ա
	LT_Guild_Enter,			//���빤��
	LT_Guild_Leave,			//�뿪����
	LT_Guild_CheLeader,		//�����᳤
	LT_Guild_DelateLeader,	//�����᳤
	LT_Guild_BeLeaderByDelate,//��������»᳤
	LT_Guild_PickWelfare,	//��ȡ����
	LT_Guild_Contribute,	//�������
	LT_Guild_AddScienceExp,	//���ӿƼ�����
	LT_Guild_BldUpgrade,	//���Ὠ������
	LT_Guild_ChgPos,		//�����᳤
	//����ս���
	LT_GBtl_SignUp,				//��������ս
	LT_GBtl_CEmbrave,			//ѫ�¹���
	LT_GBtl_HEmbrave,			//��������
	LT_GBtl_GetReward,			//��ȡ����
	LT_GBtl_SendStorageItem,	//����ֿ⽱��
	LT_GBtl_TurnsOver,			//һ�ֽ���	
	LT_GBtl_GuildPKCacu,		//�����ս��¼
	LT_GBtl_Rank,				//����ս���У����ڵ��ԣ��Ժ��ر�
	LT_GBtl_SesionReward,		//����սÿ�ڽ��������ڵ��ԣ��Ժ��ر�
	LT_GBtl_NewDay,				//����ս���������
	LT_GBtl_LeaderSendItem,		//�᳤����ֿ⽱��Stake

	LT_ADMIN_ADDRES,
	LT_ADMIN_ADDARMY,
	LT_ADMIN_DELARMY,
	LT_ADMIN_ADDBLD,
	LT_ADMIN_DELBLD,
	LT_ADMIN_SETBLDLB,
	LT_ADMIN_SETALLBLDLV,
	LT_ADMIN_SETBLDLV,
	LT_ADMIN_SETARMYLV,
	LT_ADMIN_ADDNPC,
	LT_ADMIN_DELNPC,	
	LT_ADMIN_ADDITEM,	//��ӡ�ɾ������
	LT_ADMIN_ADDEMBLEM,
	LT_ADIMN_ADDWPCCOM,
	LT_ADIMN_AddAdmiral,
	LT_ADIMN_DelAdmiral,
	LT_ADIMN_AddSoul,
	LT_ADIMN_AddAdmiralTExp,
	LT_ADIMN_AddBook,
	LT_ADMIN_ADDCOUPON,
	LT_ADMIN_ADDADMIRALTIMES,
	LT_ADIMN_AddEquip,
	LT_ADMIN_FINISHGUIDE,
	LT_ADIMN_ArenaSet,
	LT_ADIMN_WorldArenaSet,

	LT_ADMIN_SETGUILDSCIENCELV,
	LT_ADMIN_ADDGUILDBLDVALUE,
	LT_ADMIN_SETGUILDBLDLV,

	LT_ADMIN_RESET_PASSWORD, //����Ա���ö�������

	LT_ADIMN_SetOfficerPosition,
	LT_ADMIN_DELEMBLEM,
	LT_ADIMN_SetVip,
	LT_ADIMN_SetAdmiralSkill,
	LT_ADIMN_SetEquipStrLv,
	LT_ADIMN_SpecialValue,
	LT_ADIMN_RegionArenaSet,
    //�����ս��Ϣ��־
    LT_ADMIN_CLEARNEWDAYINFO,
	LT_ADIMN_PveBattleSet,
	LT_ADIMN_AddJunLing,
    LT_ADMIN_AddPokers,
	LT_ADIMN_AddHero,
	LT_ADIMN_DelHero,
	LT_ADIMN_AddLetter,
	LT_ADIMN_DelLetter,
	LT_ADIMN_SetHero,
	LT_ADMIN_WholeCountrySign,
	LT_ADIMN_AddAdmiralLetter,
	LT_ADIMN_DelAdmiralLetter,
	LT_ADIMN_SetProperty,
	LT_ADMIN_DELWPCCOM,
	LT_ADIMN_HeroArenaSet,
    LT_ADMIN_ClearAllBagItem,
	LT_ADMIN_DBRollBack,

	//������־
	LT_UPDATEREMOULDLVL,
	
	//���T����
	LT_KickPlayer_5Hour,

	LT_PLAYER_OnLine_5Hour,

	LT_NewComer_GainGift,

	//�������
	LT_PLAT_INVITE_FRIENDS,
	LT_PLAT_INVITE_FRIENDS_CREDIT,
	LT_InviteFrd,
	LT_PLAT_INVITE_FRIENDS_DAY,
	LT_InviteFrd_Url,
	LT_InviteFrdLvGiftSend,
	LT_InviteFrdLvGiftGet,
	LT_InviteFrdCouponGet,

	LT_BldAddBuff,
	LT_PlayerAddBuff,

	LT_PLAT_REFRESH_YELLOW,	//ˢ�»���
	LT_SERVER_REFRESH_YELLOW,
	LT_PLAT_REFRESH_YELLOW_REBATE,	//ˢ�»���

	LT_DAILY_GIFT_POINT,//ÿ��������ȡʱ��Ծ��
	LT_DAILY_GIFT_POINT_RECORD,//ÿ�������Ծ�ȼ�¼

	LT_ATK_DEFENCE_DAMAGE,	//��������Damage����

	LT_COMBAT_POWER_LOG,	//ս������־

	LT_DAILY_YELLOW_RES,
	LT_COST_GIFT_GET,
	LT_INVITE_FRD_GIFT,
	LT_COST_GIFT_CUSTOM_FLAG,
	LT_COST_GIFT_ADDARMY,

	//ʹ�������־
	LT_PLAYER_USE_WAIGUA_CNT,	//��������Լ�������Ҵ���
	LT_PLAYER_USE_WAIGUA_HONOR,	//��������
	LT_PLAYER_USE_WAIGUA_CHECK,	//���ּ�����������֤

	LT_PLAYER_RC4_KEY,		//RC4У��Key

	LT_SHOP_FOR_GIFT,   //��������
	LT_SHOP_FOR_GIFTGET,   //�յ�����

	LT_TIME_LIMIT_GIFT, //��ʱ����

	LT_LUCKY_BOX,

	//ս�Ա�Ӫ��־
	LT_STRATEGIC_ADDARMY,		//�ӻ��ؼӱ�
	LT_STRATEGIC_DELARMY,		//��ս�Ա�Ӫ����
	LT_STRATEGIC_OPT_ERROR,		//��������
	LT_STRATEGIC_TREAT,			//����
	LT_STRATEGIC_DISMISS,		//ǲɢ
	LT_STRATEGIC_GENERALADD,	//�����ɱ�
	LT_STRATEGIC_GENERALTREAT,	//����һ������
	LT_STRATEGIC_GENERALDISMISS,//�����ɢ

	LT_PVEFIGHT_BEGIN,			//��ʼPVE
	LT_PVEFIGHT_OPT_ERROR,		//PVE����
	LT_PVEFIGHT_END,			//����PVE
	LT_PVEFIGHT_REFRESH,		//PVEˢ��
	LT_PVEFIGHT_BUYREFRESH,		//PVE����ˢ��
	LT_PVEFIGHT_PRODUCE,		//PVE FIGHT ������־
	LT_PVEFIGHT_SELF_ATKDATA,	//�Լ�ս����������
	LT_PVEFIGHT_ENEMY_ATKDATA,	//����ս����������

	//��������
	LT_LUCKYNUM_COST,
	LT_LUCKYNUM_GET,
	LT_LUCKYNUM_GETNUM,

	//����ħ��
	LT_PRIVILEGE,

	//��ȯ
	LT_ADDCOUPON,
	LT_COSTCOUPON,
	//����̽��
	LT_BASE_EXPLORE,

	//��������
	LT_LUCKYWHEEL_RESET,
	LT_LUCKYWHEEL_GET,

	//��ȡ����
	LT_REWARD_GET,
	LT_REWARD_GET_WEAPON,
	LT_REWARD_GET_EMBLEM,
	LT_REWARD_GET_BOOK,
	LT_REWARD_GET_ADMIRAL,
	LT_REWARD_GET_ADMIRAL_T_EXP,
	LT_REWARD_GET_ARMY,

	//ÿ�ճ�ֵ
	LT_DAILYCOST_CREDIT,
	LT_DAILYCOST_TOKEN,

	LT_DAILYCOST_DAILY_GET,
	LT_DAILYCOST_ALL_GET,
	LT_DAILYCOST_BUY_STAR,

	//�����������־
	LT_ARENA_COUNTRY_BEGIN,		//��������ʼ
	LT_ARENA_COUNTRY_END,		//����������
	LT_ARENA_COUNTRY_BUYREFRESH,//�������������
	LT_ARENA_COUNTRY_RANKSTART,	//���������п�ʼ
	LT_ARENA_COUNTRY_DONEACHIEVE,//��������óɾ�
	LT_ARENA_COUNTRY_GAINACHIEVE,//��������ȡ�ɾ�
	LT_ARENA_COUNTRY_GAINRANK,	//��������ȡ��������
	LT_ARENA_COUNTRY_GAINRANK2,	//��������ȡ��������2
	LT_ARENA_COUNTRY_SHOP,		//�������̵깺��
	LT_ARENA_COUNTRY_RELOADDATA,//������ˢ������
	LT_ARENA_COUNTRY_NEWSCORELIST,//�µĻ����б�
	LT_ARENA_COUNTRY_GAINWEEKGIFT,//������������������
	LT_ARENA_COUNTRY_DEBUG,			//������debug��֮���ɾ��
	LT_ARENA_COUNTRY_DAYUPDATE,//ÿ�����ݸ���
	LT_ARENA_COUNTRY_RANKERRO,    //���δ���
	LT_ARENA_COUNTRY_RANKEXCHANGE,  //���α任
	LT_ARENA_COUNTRY_RANKLAST,  //��������
	LT_ARENA_COUNTRY_RANKSET,  //��������
	LT_ARENA_COUNTRY_FIGHT_END,//��������ս����

	//��һ����
	LT_ANNIVERSARY_DRAW,  //��齱(�޽���)
	LT_ANNIVERSARY_GET_WORD, //��ȡ��������
	LT_ANNIVERSARY_GET_ALL, //��ȡ�����

	//Q�㹺��
	LT_QSHOP_BUY, //Q�㹺��

	//���а���
	LT_RANK_GIFT_GET,

    //���籭����
    LT_WORLCCUP_BET,
    LT_WORLDCUP_REWARD,
	LT_WORLDCUP_REWARD_CREDIT,

	//װ�����
	LT_EQUIP_Add,                 //����װ��
	LT_EQUIP_Destroy,             //����װ��
	LT_EQUIP_UpGrade,             //װ������
	LT_EQUIP_Strength,             //װ��ǿ��
	LT_EQUIP_Merge,             //�ϳ�

	//���羺�������
	LT_ARENA_WORLD_BEGIN,		//��������ʼ
	LT_ARENA_WORLD_END,		    //����������
	LT_ARENA_WORLD_BUYREFRESH,  //�������������
	LT_ARENA_WORLD_RANKSTART,	//���������п�ʼ
	LT_ARENA_WORLD_GAINRANK,	//��������ȡ��������
	LT_ARENA_WORLD_RELOADDATA,  //������ˢ������
	LT_ARENA_WORLD_RERANK,      //��������
	LT_ARENA_WORLD_RANKERRO,    //���δ���
	LT_ARENA_WORLD_JION,        //���뾺����
	LT_ARENA_WORLD_RANKUPDATE,  //���θ���
	LT_ARENA_WORLD_RANKEXCHANGE,  //���α任
	LT_ARENA_WORLD_DAYUPDATE,//ÿ�����ݸ���
	LT_ARENA_WORLD_RANKLAST,  //��������
	//Ͷע
	LT_CATHECTIC,
	LT_CATHECTIC_BUY,
	LT_CATHECTIC_GET,
	LT_CATHECTIC_CLEAR,

	//�����
	LT_ACTIVE_SHOP,

	LT_ADDICTION,

	LT_ZHONGQIU_UID,
	LT_ZHONGQIU_SEND,
	LT_ZHONGQIU_GET,

	//ʮһ�
	LT_SEVENDAYS_LOGON,
	LT_SEVENDAYS_GET,

	//����������½����
	LT_CONTINUE_LAND_NEW_LOG,
	LT_CONTINUE_LAND_NEW_LOGON,

	LT_WORLD_GRAIN_DAY_BATTLE,
	LT_WORLD_GRAIN_DAY_GET,

	LT_GUILD_ACTIVE,

	//��������
	LT_PASSWORD_SET_PASSWORD,
	LT_PASSWORD_UNLOCK,
	LT_PASSWORD_WRONG,
	LT_PASSWORD_FREEZE,
	LT_PASSWORD_RESET,
	LT_PASSWORD_RELEASE,
	LT_PASSWORD_RELEASE_CANCLE,
	LT_PASSWORD_RELEASE_SUCCESS,

	LT_YELLOW_REFRESH,
	LT_YELLOW_GET,

	//��Ա���
	LT_OFFICER_CREATE,  //��Ա����
	LT_OFFICER_POSITION_UPDATE,  //��Աְλ�仯
	LT_OFFICER_POSITION_CLEAR,   //��Աְλ���
	LT_OFFICER_USE_RIGHT,      //��Աʹ��Ȩ��
	LT_OFFICER_POSITION_DEL, //�����ְ
	LT_OFFICER_POSITION_CHANGE,//ת�ù�ְ
	LT_OFFICER_USE_RIGHT_EFFECT, //��ԱȨ��Ч��

	LT_PLAYER_COMEBACK_GIFT, //�������

	LT_LEVEL_BUY, //�ȼ����

	//vip���
	LT_VIP_BUYCARD, //����vip��
	LT_VIP_REWARD,  //vip����
    LT_VIP_DAILYFREEGIFT,       //vipÿ��������

	//�������
	LT_Trap_AddArmy,      //����ץ����
	LT_Trap_SellArmy,     //����ֽ��
	LT_Trap_CaptureArmy,  //�����²��

	LT_SEVENDAYS_TARGET,  //����Ŀ����ȡ
	LT_SEVENDAYS_CREDIT,

	//����ͻ��
	LT_ARMY_UP_GRADE, //����
	LT_ARMY_TURN_GRADE,  //ת��
	LT_ARMY_HP_DEBUG,  //Ѫ��debug

	//��ļս��
	LT_ZHAOMU_BIND, //��
	LT_ZHAOMU_GET,	//��ȡ
	LT_ZHAOMU_FRD_GET, //���ѻ��

	LT_NEWYEAR_GIFT, //����ʱ�����


	//������
	LT_WPCCOM_OPT,     //�������
    LT_WPCCOM_OPEN_EXTRA,   //�򿪶������λ��

	//������ʾ
	LT_QQTASK_RECORD,
	LT_QQTASK_GET,

	LT_COUPON_MSG,	   //��ȯ��ʾ
	LT_BATTLE_ARMY_ERROR,	   //��ȯ��ʾ
	LT_BOOK_COLLECTION, //�鼮�ռ�

	LT_CHANNEL,	//�����ƹ�ͳ��

	LT_EQUIP_ACTIVE,//ǿ��װ���

	//�������������
	LT_ARENA_REGION_BEGIN,		//��������ʼ
	LT_ARENA_REGION_END,		    //����������
	LT_ARENA_REGION_BUYREFRESH,  //�������������
	LT_ARENA_REGION_RANKSTART,	//���������п�ʼ
	LT_ARENA_REGION_GAINRANK,	//��������ȡ��������
	LT_ARENA_REGION_RELOADDATA,  //������ˢ������
	LT_ARENA_REGION_RERANK,      //��������
	LT_ARENA_REGION_RANKERRO,    //���δ���
	LT_ARENA_REGION_JION,        //���뾺����
	LT_ARENA_REGION_RANKUPDATE,  //���θ���
	LT_ARENA_REGION_RANKEXCHANGE,  //���α任
	LT_ARENA_REGION_DAYUPDATE,//ÿ�����ݸ���
	LT_ARENA_REGION_RANKLAST,  //��������
	LT_REGION_SERVER_ERROR,
	LT_ARENA_REGION_WAIGUA,//���
	LT_ARENA_REGION_LEAVE,        //�˳�������

	LT_ADDJUNLING,	//���Ӿ���
	LT_COSTJUNLING, //���ľ���

	LT_PVEBATTLE_START,//ս��ս����ʼ
	LT_PVEBATTLE_END,	//����
	LT_PVEBATTLE_VALUE, //��¼����
	LT_PVEBATTLE_ACTIVE, //�����ؿ�����
	LT_PVEBATTLE_CREDIT_ACTIVE,//�����ؿ�ѫ�²���
	LT_PVEBATTLE_REFRESH,	//��Դ�ؿ�ˢ��
	LT_PVEBATTLE_SAODANG,	//ɨ��
	LT_PVEBATTLE_BUY,

    //ֽ�������־
    LT_POKER_DEAL,      //����
    LT_POKER_REDEAL,    //���·���
    LT_POKER_CHANGE,    //����
    LT_POKER_SHOW,      //����
    LT_POKER_EXCHANGE,  //�һ�
    LT_POKER_GETPOKER,  //�õ�ֽ��
    LT_POKER_REFRESH,   //ˢ�½���

	LT_RCNTR_Sign,
	LT_RCNTR_Attack,
	LT_RCNTR_CaptureCity,	//ռ��
	LT_RCNTR_CityChg,
	LT_RCNTR_Spy,			//���
	LT_RCNTR_Over,			//������ȡ����
	LT_RCNTR_AddCoin,		//��������ʿ������ս��
	LT_RCNTR_CostCoin,		//��������ʿ������ս��
	LT_RCNTR_ERROR,
	LT_RCNTR_RELOADDATA,  //ˢ������

	//���к���
	LT_MIDDLEYEAR_GIFT,
	LT_MIDDLEYEAR_COST,

	LT_AddHeroScore,
	LT_CostHeroScore,
	//Ӣ�����
	LT_AddHero,         //����Ӣ��
	LT_DelHero,         //ɾ��Ӣ��
	LT_AddHeroLetter,   //����Ӣ������
	LT_CostHeroLetter,  //����Ӣ������
	LT_AddHeroLevelExp, //����Ӣ�۵ȼ�����
	LT_AddHeroGradeExp, //����Ӣ�۽׼�����

	LT_VisitHero2Hero,		    //�ݷ�Ӣ�ۻ��Ӣ��
	LT_VisitHero2Letter,		//�ݷ�Ӣ�ۻ������
	LT_VisitHeroError,		    //�ݷ�Ӣ�۴���
	LT_VisitHeroExchange,		//Ӣ�۶һ�
	LT_HeroSelFree,			    //ѡ�����Ӣ��
	LT_HeroTurnOn,              //Ӣ�۲���
	LT_HeroSell,                //Ӣ������
	LT_HeroTrain,                //Ӣ��ѵ��
	LT_HeroChangeExp,              //���鴫��
	LT_AddHeroHPError,           //Ѫ������
	LT_HeroChangeIndex,              //����λ��
	LT_ChangeHero,              //����Ӣ��
	LT_HeroDie,              //Ӣ������
	LT_HeroUpLevel,              //Ӣ������
	LT_HeroTreat,              //Ӣ������
	LT_HeroAccTrain,                //Ӣ�ۼ���ѵ��
	LT_HeroHPUpdate,                //Ӣ��Ѫ���仯
	LT_HeroUpgrade,                //Ӣ�۽���
	LT_HeroTreatAll,              //Ӣ������


	//�����ս
	//LT_RCNTR_Sign,
	//LT_RCNTR_Attack,
	//LT_RCNTR_CaptureCity,	//ռ��
	//LT_RCNTR_CityChg,
	//LT_RCNTR_Spy,			//���
	//LT_RCNTR_Over,			//������ȡ����
	//LT_RCNTR_AddCoin,		//��������ʿ������ս��
	//LT_RCNTR_CostCoin,		//��������ʿ������ս��
	//LT_RCNTR_ERROR,
	//LT_RCNTR_RELOADDATA,  //ˢ������

 //   //���к���
 //   LT_MIDDLEYEAR_GIFT,
 //   LT_MIDDLEYEAR_COST,

	//����ȼ�����,�ȼ��ı�
	LT_AUTO_COM_LEVEL_UP,

    //����ƽ̨�
    LT_QQ_OPENSNS_GIFT,

    //���˽����
    LT_VALENTINES_DAY_GIFT,
	LT_Property_Upgrade,  //��������
	LT_Property_Reset,    //��������


	//GVE
	LT_GVE_Fight,
	LT_GVE_GetBox,
	LT_GVE_GetRankBox,
	LT_GVE_AddPoint,
	LT_GVE_UseBuff,
	LT_GVE_AddCoin,
	LT_GVE_CostCoin,
	LT_GVE_GetPersonalBox,
	//���ҷ�������
	LT_GVE_COUNGRY_Reset,
	LT_GVE_COUNGRY_Step,
	LT_GVE_COUNGRY_FirstDown,
	LT_GVE_COUNGRY_GVELIST,

	//Ӣ������ս
	/*LT_AddHeroScore,
	LT_CostHeroScore,*/
	LT_ARENA_HERO_BEGIN,		//��������ʼ
	LT_ARENA_HERO_END,		    //����������
	LT_ARENA_HERO_BUYREFRESH,  //�������������
	LT_ARENA_HERO_RANKSTART,	//���������п�ʼ
	LT_ARENA_HERO_GAINRANK,	//��������ȡ��������
	LT_ARENA_HERO_RELOADDATA,  //������ˢ������
	LT_ARENA_HERO_RERANK,      //��������
	LT_ARENA_HERO_RANKERRO,    //���δ���
	LT_ARENA_HERO_JION,        //���뾺����
	LT_ARENA_HERO_RANKUPDATE,  //���θ���
	LT_ARENA_HERO_RANKEXCHANGE,  //���α任
	LT_ARENA_HERO_DAYUPDATE,//ÿ�����ݸ���
	LT_ARENA_HERO_RANKLAST,  //��������


	//��Դ��
	LT_RESOURCE_SEARCH,
	LT_RESOURCE_GET,
	LT_RESOURCE_LEAVE,
	LT_RESOURCE_ATK,
	LT_RESOURCE_DEF,
	LT_RESOURCE_GETRES,
	LT_EXPLORE_GIFT,
	LT_WPCAddCom,
	//��ʱ������
	LT_RENT_WEAPONCOMP,//������msg��λ��,Ų��

	//��������
	LT_GUILDTASK_COMPLETE,
	LT_GUILDTASK_COSTCOMPLETE,
	LT_GUILDTASK_FLUAH,//��ѫ��ˢ��
	LT_GUILDTASK_RAND,//�������������

	//GVG
	LT_GVG_SIGN,
	LT_GVG_BRK,
	LT_GVG_DEF,
	LT_GVG_ENTER,
	LT_GVG_LEAVE,
	LT_GVG_GET_REWARD,
	LT_GVG_ADD_PROP,
	LT_GVG_ADD_STREAK,
	LT_GVG_CONTRIBUTE_RECORD,
	LT_GVG_OFFLINEENTER,
	LT_GVG_OFFLINELEAVE,

	//GVG���ڹ��ҷ���������־
	LT_CNTGVG_SIGN,
	LT_CNTGVG_BTL_SEND,
	LT_CNTGVG_BTL_GET,

	//GVG����FIGHT��־
	LT_FIGHTGVG_BTL_GET,

	LT_CNTGVG_GET_CITY,

    //̽�������
    LT_EXPLORE_ARSENAL,

    //ȫ��齱
    LT_ALLMEN_LOTTERY_GIFT,

	//�ھ����
	LT_WPCRANK_RECORD,

	LT_PUT_IDENT_INFO,//������������֤��Ϣ
	LT_GET_IDENT_INFO,//�ӷ�������ȡ��֤��Ϣ

	LT_GUILD_7DAY_CONTRIBUTE,//�Ӽ���ʱ�̿�ʼ��ǰ7��Ĺ�����׼�¼
	LT_GUILD_7DAY_CONTRES,//���׼�������ս��
	LT_GUILD_CHG_LEADER,//�ı�᳤ʱ��¼��/�ϻ᳤

    //ɾ��װ��
    LT_ADIMN_DelEquip,

    //�����û���
    LT_VIP_SuperList,

    //ɾ�������������Ա����
    LT_ADMIN_DELBOOKEXP,
    LT_ADMIN_DELWPCCOMEXP,
    LT_ADMIN_DELEMBLEMEXP,

	LT_ADIMN_DEL_ADMIRAL_SPECIAL,
	LT_ADIMN_DEL_HERO_SPECIAL,
	LT_ADIMN_DEL_HERO_EXP_SPECIAL,
	LT_ADIMN_DEL_WPC_EXP_SPECIAL,
	LT_ADIMN_DEL_EMBLEM_EXP_SPECIAL,
	LT_ADIMN_DEL_BOOK_EXP_SPECIAL,

	LT_ADIMN_ADD_EXPWPC_SPECIAL,
	LT_ADIMN_ADD_EXPEMBLEM_SPECIAL,

    LT_EQUIP_StrengthExtra,        //װ��ǿ��������־

	LT_WARCOLLEGE_UPSTRATEGY,//ս��ѧԺ����ս��
	LT_WARCOLLEGE_PROMOTE,//����ָ�ӹ�
	LT_WARCOLLEGE_TRAINSKILL,//ѵ������
	LT_WARCOLLEGE_UPSKILL,//�����Զ�����
	LT_WARCOLLEGE_RESETSTTIMES,//����ѵ������
	LT_WARCOLLEGE_BUYSKILLTRAINTIMES,//����ѵ������

    //2015.4.16������ڶ������λ�õļ��������������ժ��
    LT_REMOVE_EXTRASPEEDWPC,        //ժ������������

    //Ԥ���ѹ���ѫ��
    LT_PREPAY_NEWORDER,     //�¶���
    LT_PREPAY_OUTTIMEORDER, //���ڶ���
    LT_PREPAY_BRUSHORDER,   //ˢ��
    LT_PREPAY_PAYORDER,     //֧���ɹ�

    //ÿ��ǩ��
    LT_DAILYSIGNIN_SIGGNIN,     //ǩ��
    LT_DAILYSIGNIN_GETGIFT,     //��ȡ�������
    LT_DAILYSIGNIN_REPLENISH,   //��ǩ

	LT_SECARMSDEALER_GETAWARD,	//���ؾ�����,��ֵ�ͺ��� �콱
	LT_SECARMSDEALER_REWARD,	//�ڶ����Զ�����
	LT_ZONE_TENYEAR_COSTGIFT,	//�ռ�ʮ��������

    //������ϰ�����־
    LT_WARGAME_OCCUPY,                  //ռ��
    LT_WARGAME_LOOT,                    //��ռ
    LT_WARGAME_COUNTERATTACK,           //����
    LT_WARGAME_DELAY,                   //����
    LT_WARGAME_LEAVE,                   //����
    LT_WARGAME_USETOKEN,                //ʹ����ϰ��
    LT_WARGAME_USEREPORT,               //ʹ����ϰ����
    LT_WARGAME_ADDTOKEN,                //������ϰ��
    LT_WARGAME_ADDREPORT,               //������ϰ����
    LT_WARGAME_BUYITEM,                 //�һ���Ʒ
    LT_WARGAME_BELOOT,                  //��ǿռ
    LT_WARGAME_TRUCE,                   //��ս

	//ͬ��ս
	LT_LEAGUEBATTLE_ADDPOINT,
	LT_LEAGUEBATTLE_GETREWARD,
	LT_LEAGUEBATTLE_REFRESH,
	LT_LEAGUEBATTLE_RESULT,
	LT_LEAGUEBATTLE_DEBUG,
	//����ʵ����
	LT_HAPPYLIB_EXPLORE,				//̽��ʵ����
	LT_HAPPYLIB_AWARD,					//�콱
	LT_HAPPYLIB_AOTUAWARD,				//ϵͳ����
	//LT_HAPPYBUY_AWARD,					//���ֹ��콱

    //����ǿ������־
    LT_SUPERSTORM_USETTOKEN,        //ʹ�ó���ǿ����
    LT_SUPERSTORM_USETTOKENRESULT,  //ʹ�ó���ǿ������
    LT_SUPERSTORM_BEATK,            //������ǿ��
    LT_SUPERSTORM_REFUSE,           //�ܾ�����ǿ��
    LT_SUPERSTORM_BEREFUSE,         //���ܾ�

	LT_GOLD_GUN_DEBUG,

	LT_HAPPYBUY_AWARD,					//���ֹ��콱
	LT_COUNTRY_CHAT_WORLD,				//��ս����,���緢��
	LT_COUNTRY_CHAT_MASK,				//��ս����,���η���
	LT_COUNTRY_CHAT_UNMASK,				//��ս����,�������

    //�������
    LT_MILITARYSOUL_ACTIVESOUL,         //�������
    LT_MILITARYSOUL_UPDATESOUL,         //��������
    LT_MILITARYSOUL_ACTIVESKILL,        //������
    LT_MILITARYSOUL_UPDATESKILL,        //��������
    LT_MILITARYSOUL_RESETSKILL,         //���ü���
    LT_MILITARYSOUL_LOCKSKILL,          //��������
    LT_MILITARYSOUL_COSTPOINT,          //�۳������
    LT_MILITARYSOUL_ADDPOINT,           //���Ӿ����
	LT_WallPct,

	LT_REBATE_AWARD,					//�ۿ۹���

    LT_AdmiralReduceProp,               //�����������

	LT_TOWER_ENHANCE,					//������ǿ��
	LT_TOWER_ENHANCE_END,				//ǿ������

    //������
    LT_GUILDREDENVELOPE_ISSUE,      //���ź��
    LT_GUILDREDENVELOPE_SNAPPE,     //�����
    LT_GUILDREDENVELOPE_REFUND,     //�������ʣ����
    LT_GUILDREDENVELOPE_REMAINDER,  //����δ������ʣ����
    LT_GUILDREDENVELOPE_ADDYASUIQIAN,   //����ѹ��Ǯ
    LT_GUILDREDENVELOPE_COSTYASUIQIAN,   //����ѹ��Ǯ
    LT_GUILDREDENVELOPE_SNAPPEOVER,     //���ŵĺ��������
    LT_GUILDREDENVELOPE_CLEARDATA,      //��������
    LT_WPCAddJammer,                    //���Ӹ�����
    LT_Jammer_TurnOn,
    LT_Jammer_TurnOff,
    LT_Jammer_AddExp,
    LT_Jammer_Combine,
    LT_Jammer_QuickCombine,
    LT_Jammer_Lock,
    LT_Jammer_Del,
	
    //BOSSս
    LT_BOSSBATTLE_ADMIRE,           //����
    LT_BOSSBATTLE_GETREWARD,        //��ȡ����
    LT_BOSSBATTLE_EMBRAVE,          //����
    LT_BOSSBATTLE_SETWORD,          //��������
    LT_BOSSBATTLE_REPROTWORD,       //�ٱ�����
    LT_BOSSBATTLE_ATACK,            //����
    LT_BOSSBATTLE_CLEARCD,          //�������CD
    LT_BOSSBATTLE_COUNTRY_DMGRECORD,    //���ҷ��������˺���־
    LT_BOSSBATTLE_COUNTRY_BOSSDEAD,     //���ҷ�������boss������־
    LT_ITEMPAY_PAYITEM,             //����

    LT_ARMRACE_REWARD,				//����������ȡ����
    LT_TOLEVEL_REWARD,				//̤�����̽���

	LT_CNTGUILD_BTL_SEND,			//����սcountry�Ϸ�����־
	LT_CNTGUILD_BTL_GET,			//����սfight�հ���־

	//����
	LT_BLUE_GROW_GIFT,				//����ɳ����

	LT_STC_AWARD,					//��⸣���콱
	LT_STC_SYSAWARD,				//��⸣��ϵͳ����
	LT_STL_AWARD,					//�����Ѵ����콱
	LT_STL_DAYS,					//�����Ѵ���ӵ�½����

	LT_CITYBUFF_FLAGSTATE_CHANGE,      //����buff

    //����ѫ��
    LT_MedalHonor_TurnOn,
    LT_MedalHonor_Lock,
    LT_MedalHonor_Combine,
    LT_MedalHonor_QuickCombine,
    LT_MedalHonor_Cast,
    LT_MedalHonor_QuickCast,
    LT_MedalHonor_BuyCastTime,
    LT_MedalHonor_Decorate,
    LT_MedalHonor_QuickDecorate,
    LT_MedalHonor_GetMedalHonor,
    LT_MedalHonor_AddExp,
    LT_MedalHonor_AddMH,
    LT_MedalHonor_DelMH,
    LT_MedalHonor_AddCastToken,
    LT_MedalHonor_CostCastToken,
    LT_MedalHonor_AdminOpt,

    //�вƽ���
    LT_ZHAOCAIJINBAO_ZHAOCAI,
	LT_ONE_YUAN_PURCHASE_BUY_INFO,	  //һԪ��������Ϣ
	LT_FETCH_ONE_YUAN_PURCHASE_PRIZE,	//��ȡһԪ������
	LT_ONE_YUAN_WINNER_RECORD,			//һԪ���ý���¼	

	LT_StaticTrapCreditUpgrade,
	LT_ExplosTrapCreditUpgrade,
	LT_StaticTrapUpgrade,
	LT_ExplosiveTrapUpgrade,
	LT_StaticTrapUnupgrade,
	LT_ExplosiveTrapUnupgrade,
	LT_TrapCreditProduce,
	LT_TrapCreditAccUpgrade,
};

struct Log_Msg_Unit
{
	int		nKey;
	char*	szId;
	char*	szWords;
};

const Log_Msg_Unit LOG_MSG[] = 
{
	{    LT_LogOn                     ,    "1001",    "LogOn          "         },
	{    LT_LogOut                    ,    "1002",    "LogOut         "         },
	{    LT_Register                  ,    "1003",    "RegisterUser   "         },
	{    LT_BanLogin                  ,    "1004",    "BanLogin       "         },
	{    LT_Upgrade                   ,    "1005",    "Upgrade        "         },
	{    LT_StarStat                  ,    "1006",    "StarStat       "         },
	{    LT_TransferUser              ,    "1007",    "TransferUser   "         },
	{    LT_MDB_Error                 ,    "1008",    "MDB_Error      "         },
	{    LT_LoadByMDB                 ,    "1009",    "LoadByMDB      "         },
	{    LT_Expiate                   ,    "1010",    "Expiate        "         },
	{    LT_UserBanLogin              ,    "1011",    "UserBanLogin   "         },
	{    LT_ClearData                 ,    "1012",    "ClearData      "         },
	{    LT_WaiGua                    ,    "1013",    "WaiGua         "         },
	{    lT_WaiGuaBan                 ,    "1014",    "WaiGuaBan      "         },
	{    LT_RemoveUser                ,    "1015",    "RemoveUser     "         },
	{    LT_FinishTutorial            ,    "1016",    "FinishTutorial "         },
	{    LT_ErrorLog                  ,    "1017",    "ErrorLog       "         },
	{    LT_BtlWaiGua                 ,    "1018",    "BtlWaiGua      "         },
	{    LT_BtlWaiGuaKick             ,    "1019",    "BtlWaiGuaKick  "         },
	{    LT_BtlForwardMsg             ,    "1020",    "BtlForwardMessage"       },
	{    LT_RemovePlat                ,    "1021",    "RemovePlat     "         },
	{    LT_AtkByWaiGua               ,    "1022",    "AtkByWaiGua    "         },
	{    LT_AddArmyHPError            ,    "1023",    "AddArmyHPError "         },
	{    LT_RegisterError             ,    "1024",    "RegisterError  "         },
	{    LT_Debug                     ,    "1025",    "Debug          "         },
	{    LT_SrvDebug                  ,    "1026",    "SrvDebug       "         },
	{    LT_InitError                 ,    "1027",    "InitError      "         },
	{ 	 LT_UniteRegion				  ,	   "1028",	  "UniteRegion    "         },
	{ 	 LT_SendWarning 			  ,	   "1029",	  "SendWarning    "         },
	{ 	 LT_DBBackUp 				  ,	   "1030",	  "DBBackUp       "         },
	{ 	 LT_DBRollBack				  ,    "1031",	  "DBRollBack     "         },

	{    LT_AddCredit                 ,    "1100",    "AddCredit      "         },
	{    LT_CostCredit                ,    "1101",    "CostCredit     "         },
	{    LT_AddRes                    ,    "1102",    "AddRes         "         },
	{    LT_CostRes                   ,    "1103",    "CostRes        "         },
	{    LT_SetRes                    ,    "1104",    "SetRes         "         },
	{    LT_CreditBuy                 ,    "1105",    "CreditBuy      "         },
	{    LT_FinishTask                ,    "1106",    "FinishTask     "         },
	{    LT_DelArmy                   ,    "1107",    "DelArmy        "         },
	{    LT_DelEmeny                  ,    "1108",    "DelEmeny       "         },
	{    LT_AddHonor                  ,    "1109",    "AddHonor       "         },
	{    LT_CostHonor                 ,    "1110",    "CostHonor      "         },
	{    LT_HonorOver                 ,    "1111",    "HonorOver      "         },
	{    LT_ShopBuy                   ,    "1112",    "ShopBuy        "         },
	{    LT_AddFeats                  ,    "1113",    "AddFeats       "         },
	{    LT_CostFeats                 ,    "1114",    "CostFeats      "         },
	{    LT_EarthPct                  ,    "2000",    "EarthPct       "         },
	{    LT_ResPct                    ,    "2001",    "ResPct         "         },
	{    LT_BldCreditRepair           ,    "2002",    "BldCrdRepair   "         },
	{    LT_BldCreditAccCreate        ,    "2003",    "BldCrdAccCrt   "         },
	{    LT_BldCreateAccUpgrade       ,    "2004",    "BldCrdAccUp    "         },
	{    LT_BldCreateAccArmyUpgrade   ,    "2005",    "BldCrdAccArmyUp"         },
	{    LT_BldCreditAccArmyCreate    ,    "2006",    "BldCrdAccArmyCr"         },
	{    LT_BldUnProduce              ,    "2007",    "BldUnProduce   "         },
	{    LT_BldProduce                ,    "2008",    "BldProduce     "         },
	{    LT_BldCreditUpgrade          ,    "2009",    "BldCrdUpgrade  "         },
	{    LT_BldUpgrade                ,    "2010",    "BldUpgrade     "         },
	{    LT_BldUnUpgrade              ,    "2011",    "BldUnUpgrade   "         },
	{    LT_BldCreditArmyUpgrade      ,    "2012",    "BldCrdArmyUp   "         },
	{    LT_BldArmyUpgrade            ,    "2013",    "BldArmyUpgrade "         },
	{    LT_BldCreditCreate           ,    "2014",    "BldCrdCreate   "         },
	{    LT_BldCreate                 ,    "2015",    "BldCreate      "         },
	{    LT_BldUnCreate               ,    "2016",    "BldUnCreate    "         },
	{    LT_MineCreditUpgrade         ,    "2017",    "MineCrdUpgrade "         },
	{    LT_MineUpgrade               ,    "2018",    "MineUpgrade    "         },
	{    LT_MineUnUpgrade             ,    "2019",    "MineUnUpgrade  "         },
	{    LT_MineCreditProduce         ,    "2020",    "MineCrdProduce "         },
	{    LT_MineCreditAccUpgrade      ,    "2021",    "MineCrdAccUp   "         },
	{    LT_FinishBld                 ,    "2022",    "FinishBld      "         },
	{    LT_FinishUpgrade             ,    "2023",    "FinishUpgrade  "         },
	{    LT_StartRepair               ,    "2024",    "StartRepair    "         },
	{    LT_FinishRepair              ,    "2025",    "FinishRepair   "         },
	{    LT_BldStopRun                ,    "2026",    "BldStopRun     "         },
	{    LT_BldDestroy                ,    "2027",    "BldDestroy     "         },
	{    LT_BldDestroyByNPC           ,    "2028",    "BldDestroyByNPC"         },
	{    LT_UnlockVipMine             ,    "2029",    "UnlockVipMine  "         },
	{    LT_LogOnByOther              ,    "2030",    "LogOnByOther   "         },
	{    LT_CheckRes                  ,    "2031",    "CheckRes       "         },
	{    LT_GetRes                    ,    "2032",    "GetRes         "         },
	{    LT_CacuBaseValue             ,    "2033",    "CacuBaseValue  "         },
	{    LT_CacuBaseValueError        ,    "2034",    "CacuBaseValueEr"         },
	{    LT_AddBasePoint              ,    "2035",    "AddBasePoint   "         },
	{    LT_AddBasePointTmp           ,    "2036",    "AddBasePointTmp"         },
	{    LT_RecoverArmy               ,    "2037",    "RecoverArmy    "         },
	{    LT_BldArmyUnUpgrade          ,    "2038",    "BldArmyUnUpgrade"        },
	{    LT_WPCExplore                ,    "2039",    "WPCExplore     "         },
	{    LT_WPCCombine                ,    "2040",    "WPCCombine     "         },
	{    LT_WPCQuickCombine           ,    "2041",    "WPCQuickCombine"         },
	{    LT_AddCaptureBase            ,    "2042",    "AddCaptureBase "         },
	{    LT_LoseCaptureBase           ,    "2043",    "LoseCaptureBase"         },
	{    LT_CapturedByUser            ,    "2044",    "CapturedByUser "         },
	{    LT_CaptureFree               ,    "2045",    "CaptureFree    "	        }, 
	{    LT_BldSlaveRoomGetRes        ,    "2046",    "BldSRoomGetRes "         },
	{    LT_BLdSlaveRoomHit           ,    "2047",    "BLdSRoomHit    "         },
	{    LT_WPCExploreScene           ,    "2048",    "WPCExploreScene"         },
	{    LT_WPCAddEmblem              ,    "2049",    "WPCAddEmblem   "         },
	{    LT_WPCostEmblem              ,    "2050",    "WPCostEmblem   "         },
	{    LT_WPCEmblemUpgrade          ,    "2051",    "WPCEmblemUpgrade"        },
	{    LT_WPCAddEmblemExp           ,    "2052",    "WPCAddEmblemExp"         },
	{    LT_WPCBookCombine            ,    "2053",    "WPCBookCombine"          },
	{    LT_WPCBookQuickCombine       ,    "2054",    "WPCBookQuickCombine"     },
	{    LT_WPCAddBook                ,    "2055",    "WPCAddBook"              },
	{    LT_BldStopRunDef             ,    "2101",    "BldStopRunDef  "         },
	{    LT_BldStopRunAtk             ,    "2102",    "BldStopRunAtk  "         },
	{    LT_BldAutoRepair             ,    "2103",    "BldAutoRepair  "         },
	{    LT_BldZhuziRes				  ,    "2104",    "LT_BldZhuziRes  "        },
	{    LT_BldZhuziCredit            ,    "2105",    "BldZhuziCredit  "        },
	{    LT_BldZhuziLvUp              ,    "2106",    "BldZhuziLvUp  "          },
	{    LT_BldZhuziAllRes            ,    "2107",    "BldZhuziAllRes  "        },
    {    LT_UnlockRedwarVipMine       ,    "2108",    "UnlockRedwarVipMine  "   },
   
	{    LT_AddJunGong				,    "2200",    "AddJunGong      "   },
    {    LT_CostJunGong				,    "2201",    "CostJunGong     "   },
	
	{    LT_AddAdmiral                ,    "2301",    "AddAdmiral     "         },
	{    LT_DelAdmiral                ,    "2302",    "DelAdmiral     "         },
	{    LT_AddAdmiralSoul            ,    "2303",    "AddAdmiralSoul "         },
	{    LT_CostAdmiralSoul           ,    "2304",    "CostAdmiralSoul"         },
	{    LT_VisitAdmiral2Adm          ,    "2305",    "VisitAdmiral2Adm"        },
	{    LT_VisitAdmiral2Soul         ,    "2306",    "VisitAdmiral2Soul"       },
	{    LT_VisitAdmiral2Train        ,    "2307",    "VisitAdmiral2Train"      },
	{    LT_AddAdmiralSkill           ,    "2308",    "AddAdmiralSkill"         },
	{    LT_DelAdmiralSkill           ,    "2309",    "DelAdmiralSkill"         },
	{    LT_AdmiralSkillUpgrade       ,    "2310",    "AdmiralSkUpgrade"        },
	{    LT_AdmiralSkillAddExp        ,    "2311",    "AdmiralSkAddExp"         },
	{    LT_AdmiralSelFree            ,    "2312",    "AdmiralSelFree "         },
	{    LT_AdmiralSell               ,    "2313",    "AdmiralSell    "         },
	{    LT_AdmiralTeach              ,    "2314",    "AdmiralTeach   "         },
	{    LT_AdmiralUseItem            ,    "2315",    "AdmiralUseItem "         },
	{    LT_AdmiralAddProp            ,    "2316",    "AdmiralAddProp "         },
	{    LT_AddAdmiralCostGift        ,    "2317",    "AddAdmiralCostGift "     },
	{    LT_AdmiralCostGiftTrain      ,    "2318",    "AdmiralCostGiftTrain "   },
	{    LT_Item_AddAdmiral			  ,    "2319",    "ItemAddAdmiral "			},
	{    LT_Item_AddAdmiralTrainExp   ,    "2320",    "ItemAddAdmiralTrainExp " },
	{    LT_AdmiralAddExp			  ,    "2321",    "AdmiralAddExp  "			},
	{    LT_AdmiralSkillUp			  ,    "2322",    "AdmiralSkillUp  "		},
	{    LT_AdmiralSkillTurn		  ,    "2323",    "AdmiralSkillTurn  "		},
	{    LT_AdmiralOpt		  ,    "2324",    "AdmiralOpt  "		},
	{    LT_AddAdmiralLetter		  ,    "2325",    "AddAdmiralLetter  "		},
	{    LT_CostAdmiralLetter		  ,    "2326",    "CostAdmiralLetter  "		},
	{    LT_AdmiralCompose			,    "2327",    "AdmiralCompose  "		},
	{    LT_SendGift                  ,    "3000",    "SendGift       "         },
	{    LT_SendGiftToPlat            ,    "3001",    "SendGiftToPlat "         },
	{    LT_GiftWinCount              ,    "3002",    "GiftWinCount   "         },
	{    LT_BannerGift                ,    "3003",    "BannerGift     "         },
	{    LT_Photo                     ,    "3004",    "Photo          "         },
	{    LT_BtlNPCStart               ,    "4000",    "NPCBtlStart    "         },
	{    LT_BattleStart               ,    "4001",    "BattleStart    "         },
	{    LT_BattleEnd                 ,    "4002",    "BattleEnd      "         },
	{    LT_CalHonor                  ,    "4003",    "CalHonor       "         },
	{    LT_BtlCaptureStart           ,    "4004",    "BtlCaptureStart"         },
	{    LT_BtlCaptureEnd             ,    "4005",    "BtlCaptureEnd  "         },
	{    LT_BtlNPCActiveStart         ,    "4006",    "BtlNPCActStart "         },
	{    LT_BtlNPCActiveEnd           ,    "4007",    "BtlNPCActEnd   "         },
	{    LT_BtlSendArmy               ,    "4008",    "BtlSendArmy    "         },
	{    LT_BtlBaseDefNPCStart        ,    "4009",    "BtlBaseDefStart"         },
	{    LT_BtlBaseDefNPCStep         ,    "4010",    "BtlBaseDefStep "         },
	{    LT_BtlBaseDefNPCEnd          ,    "4011",    "BtlBaseDefEnd  "         },
	{    LT_BtlBaseDefNPCArmy         ,    "4012",    "BtlBaseDefArmy "         },
	{    LT_BtlArmyGroupStart         ,    "4013",    "BtlArmyGroupStart"       },
	{    LT_BtlArmyGroupEnd           ,    "4014",    "BtlArmyGroupEnd"         },
	{    LT_BtlPveBattleStart         ,    "4015",    "BtlPveBattleStart"       },
	{    LT_BtlPveBattleEnd           ,    "4016",    "BtlPveBattleEnd"         },

	{    LT_AddBagItem                ,    "4100",    "AddBagItem     "         },
	{    LT_CostBagItem               ,    "4101",    "CostBagItem    "         },
	{    LT_UseGiftPackage            ,    "4102",    "UseGiftPackage "         },
	{    LT_UseStakeBox               ,    "4103",    "UseStakeBox    "         },
	{    LT_DestroyBagItem            ,    "4104",    "DestroyBagItem "         },
	{    LT_BagItemOutDate            ,    "4105",    "BagItemOutdate "         },
	{    LT_BagUpgrade                ,    "4106",    "BagUpgrade     "         },
	{    LT_BagAdd2Tmp                ,    "4107",    "BagAdd2Tmp     "         },
	{    LT_BagLost4Full              ,    "4108",    "BagLost4Full   "         },
	{    LT_BagTmp2Bag                ,    "4109",    "BagTmp2Bag     "         },
	{    LT_BagTmpDestroy             ,    "4110",    "BagTmpDestroy  "         },
	{    LT_AddVirtualItem               ,    "4111",    "AddHideItem    "         },
	{    LT_CostVirtualItem              ,    "4112",    "CostHideItem  "         },
	{    LT_BAGITEM_EXCHANGE           ,    "4113",    "ItemExchange  "         },
	{    LT_ItemCompount              ,    "4114",    "ItemCompount  "         },
	{    LT_ItemAutoDelete            ,    "4115",    "ItemAutoDelete  "        },

	{    LT_CallBackFriend            ,    "5000",    "CallBackFriend "         },
	{    LT_CallBackFriendPlatid      ,    "5001",    "CallBkFdPlatid "         },
	{    LT_WebGift                   ,    "5002",    "WebGift        "         },
	{    LT_CallBackFriendBackGift    ,    "5003",    "CallBackFriendBackGift"  },
	{    LT_CallBackFriendBack        ,    "5004",    "CallBackFriendBack "         },

	{    LT_CONTINUE_LAND_LOG         ,    "6000",    "ContinueLandGift"        },
	{    LT_SCIENCELEVELUP            ,    "6001",    "sciencelevelup "         },
	{    LT_GiftSend                  ,    "6100",    "GiftSend       "         },
	{    LT_GiftDelGet                ,    "6101",    "GiftDelGet     "         },
	{    LT_GiftAccept                ,    "6102",    "GiftAccept     "         },
	{    LT_GiftResend                ,    "6103",    "GiftResend     "         },
	{    LT_Gift2Bag                  ,    "6104",    "Gift2Bag       "         },
	{    LT_AddGift                   ,    "6105",    "AddGift        "         },
	{    LT_DEFENSE_NPC               ,    "6201",    "denensenpc	  "         },
	{    LT_DEFENSE_ADDARMY           ,    "6202",    "denenseaddarmy "        },
	{    LT_MoonStake                 ,    "6300",    "MoonStake      "        },
	{    LT_MoonAccReward             ,    "6301",    "MoonAccReward  "        },
	{    LT_MoonAddCnt                ,    "6302",    "Moonaddcnt     "        },
	{    LT_MoonGetRank               ,    "6303",    "Moongetrank    "        },
	{	 LT_REWARD_PRIZE			  ,	   "6304",	  "Rewardprize	  "			},
	{	 LT_FAMOUSHALL_PRIZE		  ,	   "6305",	  "Famoushallprize"			},
	{	 LT_PickUniteRegionGift		  ,	   "6306",	  "PickUniteRgnGift"		},

	{    LT_CNTR_ERROR	            ,    "7000",    "CntrError      "        },

	{    LT_CNTR_SelCountry			,    "7100",    "CntrSelCountry "        },
	{    LT_CNTR_ChgCountry			,    "7101",    "CntrChgCountry "        },
	{    LT_CNTR_Attack				,    "7102",    "CntrAttack     "        },
	{    LT_CNTR_CaptureCity		,    "7103",    "CntrCaptureCity"        },
	{    LT_CNTR_CityChg			,    "7104",    "CntrCityChg    "        },
	{    LT_CNTR_Spy				,    "7105",    "CntrSpy        "        },
	{    LT_CNTR_PickBox			,    "7106",    "CntrPickBox    "        },
	{    LT_CNTR_OpenBox			,    "7107",    "CntrOpenBox    "        },	
	{    LT_CNTR_ZhaoGongChg		,    "7108",    "CntrZhanGongChg"        },
	{    LT_CNTR_Rank				,    "7109",    "CntrRank       "        },
	{    LT_CNTR_AddCoin			,    "7110",    "CntrAddCoin    "        },
	{    LT_CNTR_CostCoin			,    "7111",    "CntrCostCoin   "        },
	{    LT_CNTR_BloodBtlStart		,    "7112",    "CntrBloodBtlStart"      },
	{    LT_CNTR_BloodBtlEnd		,    "7113",    "CntrBloodBtlEnd"        },
	{	 LT_CNTR_LaunchBloodBtl		,	 "7114",	"CntrLaunchBloodBtl"	 },
	{	 LT_CNTR_GetDailyGift		,	 "7115",	"CntrGetDailyGift"	 },
    {    LT_CNTR_SendTributeGift    ,    "7116",    "CntrSendTributeGift"    },
    {    LT_CNTR_ZhanGongRank		,    "7117",    "CntrZhanGongRank   "    },
	{	 LT_CNTR_RANDSTORMBOX		,	 "7118",	"CntrRandStormBox"		 },
	{	 LT_CNTR_ADDSTORMBOX		,	 "7119",	"CntrAddStormBox"		 },

	{    LT_Guild_Create			,    "7200",    "GuildCreate        "        },
	{    LT_Guild_Dismiss			,    "7201",    "GuildDismiss       "        },
	{    LT_Guild_AddUser			,    "7202",    "GuildAddUser       "        },
	{    LT_Guild_Enter				,    "7203",    "GuildEnter         "        },
	{    LT_Guild_Leave				,    "7204",    "GuildLeaver        "        },
	{    LT_Guild_CheLeader			,    "7205",    "GuildChgLeader     "        },
	{	 LT_Guild_DelateLeader		,	 "7206",    "GuildDelateLeader  "        },
	{	 LT_Guild_BeLeaderByDelate	,	 "7207",    "GuildBeLeaderByDelate "     },
	{    LT_Guild_PickWelfare		,    "7208",    "GuildPickWelfare   "       },
	{    LT_Guild_Contribute		,	 "7209",    "GuildContribute    "        },
	{    LT_Guild_AddScienceExp		,	 "7210",    "GuildAddSceneceExp "        },
	{    LT_Guild_BldUpgrade		,	 "7211",    "GuildBldUpgrade    "        },
	{    LT_Guild_ChgPos			,	 "7212",    "GuildChgPos        "        },

	{	 LT_GBtl_SignUp				,	 "7301",    "GBtlSignUp          "		  },
	{    LT_GBtl_CEmbrave			,    "7302",    "GBtlCEmbrave        "        },
	{    LT_GBtl_HEmbrave			,	 "7303",    "GBtlHEmbrave        "        },
	{    LT_GBtl_GetReward			,	 "7304",    "GBtlGetReward       "        },
	{    LT_GBtl_SendStorageItem	,	 "7305",    "GBtlSendStorageItem "        },
	{    LT_GBtl_TurnsOver			,	 "7306",    "GBtlTurnsOver       "        },
	{    LT_GBtl_GuildPKCacu		,	 "7307",    "GBtlGuildPKCacu     "        },
	{    LT_GBtl_Rank				,	 "7308",    "GBtlGuildRank       "        },
	{    LT_GBtl_SesionReward		,	 "7309",    "GBtlSessionRedward  "        },
	{    LT_GBtl_NewDay				,	 "7310",    "GBtlNewDay          "        },
	{    LT_GBtl_LeaderSendItem		,	 "7311",    "GBtlLeaderSendItem  "        },

	{    LT_ADMIN_ADDRES              ,    "9000",    "AdminAddRes    "         },
	{    LT_ADMIN_ADDARMY             ,    "9001",    "AdminAddArmy   "         },
	{    LT_ADMIN_DELARMY             ,    "9002",    "AdminDelArmy   "         },
	{    LT_ADMIN_ADDBLD              ,    "9003",    "AdminAddBld    "         },
	{    LT_ADMIN_DELBLD              ,    "9004",    "AdminDelBld    "         },
	{    LT_ADMIN_SETBLDLB            ,    "9005",    "AdminSetBldCnt "         },
	{    LT_ADMIN_SETALLBLDLV         ,    "9006",    "AdminSetAllBldLV"        },
	{    LT_ADMIN_SETBLDLV            ,    "9007",    "AdminSetBldLV  "         },
	{    LT_ADMIN_SETARMYLV           ,    "9008",    "AdminSetArmyLV "         },
	{    LT_ADMIN_ADDNPC              ,    "9009",    "AdminAddNPC    "         },
	{    LT_ADMIN_DELNPC              ,    "9010",    "AdminDelNPC    "         },
	{    LT_ADMIN_ADDITEM             ,    "9011",    "AdminAddItem   "         },
	{    LT_ADMIN_ADDEMBLEM           ,    "9012",    "AdminAddEmblem "         },
	{    LT_ADIMN_ADDWPCCOM           ,    "9013",    "AdminAddWpcCom "         },
	{    LT_ADIMN_AddAdmiral          ,    "9014",    "AdminAddAdmiral"         },
	{    LT_ADIMN_DelAdmiral          ,    "9015",    "AdminDelAdmiral"         },
	{    LT_ADIMN_AddSoul             ,    "9016",    "AdminAddSoul   "         },
	{    LT_ADIMN_AddAdmiralTExp      ,    "9017",    "ADIMN_AddAdmiralTExp"    },
	{    LT_ADIMN_AddBook             ,    "9018",    "ADIMN_AddBook"           },
	{    LT_ADMIN_ADDCOUPON           ,    "9019",    "ADIMN_AddCoupon"         },
	{    LT_ADMIN_ADDADMIRALTIMES     ,    "9020",    "ADIMN_AddAdmiraltimes"   },
	{    LT_ADIMN_AddEquip            ,    "9021",    "ADIMN_AddEquip"         },
	{	 LT_ADMIN_FINISHGUIDE		  ,    "9022",    "ADIMN_finshGuide"		},
	{	 LT_ADIMN_ArenaSet		      ,    "9023",    "ADIMN_ArenaSet"		},
	{	 LT_ADIMN_WorldArenaSet		  ,    "9024",    "ADIMN_WolrdArenaSet"		},
	{	 LT_ADMIN_SETGUILDSCIENCELV   ,    "9025",    "ADIMN_SetGuildScienceLV" },
	{	 LT_ADMIN_ADDGUILDBLDVALUE	  ,    "9026",    "ADIMN_AddGuildBldValue"  },
	{	 LT_ADMIN_SETGUILDBLDLV		  ,    "9027",    "ADIMN_SetGuildBldLV"     },
	{	 LT_ADMIN_RESET_PASSWORD	  ,    "9028",    "ADIMN_ResetPassword"     },
	{	 LT_ADIMN_SetOfficerPosition  ,    "9029",    "ADIMN_SetOfficerPosition"     },
	{	 LT_ADMIN_DELEMBLEM			  ,    "9030",    "ADIMN_DelEmblem"     },
	

	{	 LT_ADIMN_SetVip              ,    "9031",    "ADIMN_SetVip"     },
	{	 LT_ADIMN_SetAdmiralSkill     ,    "9032",    "ADIMN_SetAdmiralSkill"     },
	{	 LT_ADIMN_SetEquipStrLv       ,    "9033",    "ADIMN_SetEquipStrLv"     },

	{	 LT_ADIMN_SpecialValue        ,    "9034",    "ADIMN_SpecialValue"     },
	{	 LT_ADIMN_RegionArenaSet      ,    "9035",    "ADIMN_RegionArenaSet"     },

	{    LT_ADMIN_CLEARNEWDAYINFO     ,    "9036",    "ADMIN_ClearNewDayInfo"    },
	{	 LT_ADIMN_PveBattleSet        ,    "9037",    "ADIMN_PveBattleSet"     },
	{	 LT_ADIMN_AddJunLing		  ,    "9038",    "ADIMN_AddJunLing"     },
	{	 LT_ADMIN_AddPokers			  ,    "9039",    "ADIMN_AddPokers"     },
	{	 LT_ADIMN_AddHero			  ,    "9040",    "ADIMN_AddHero"     },
	{	 LT_ADIMN_DelHero			  ,    "9041",    "ADIMN_DelHero"     },
	{	 LT_ADIMN_AddLetter			  ,    "9042",    "ADIMN_AddLetter"     },
	{	 LT_ADIMN_DelLetter			  ,    "9043",    "ADIMN_DelLetter"     },
	{	 LT_ADIMN_SetHero			  ,    "9044",    "ADIMN_SetHero"     },
	{	 LT_ADMIN_WholeCountrySign	  ,    "9045",    "ADIMN_WholeCountrySign"     },
	{	 LT_ADIMN_AddAdmiralLetter	  ,    "9046",    "ADIMN_AddAdmiralLetter"     },
	{	 LT_ADIMN_DelAdmiralLetter	  ,    "9047",    "ADIMN_DelAdmiralLetter"     },
	{	 LT_ADIMN_SetProperty		  ,    "9048",    "ADIMN_SetProperty"     },
	{	 LT_ADMIN_DELWPCCOM			  ,    "9049",    "ADIMN_DelWpccom"     },
    {	 LT_ADIMN_HeroArenaSet		  ,    "9050",    "ADIMN_HeroArenaSet"		},
    {	 LT_ADMIN_ClearAllBagItem	  ,    "9051",    "ADIMN_ClearAllBagItem"		},
	{	 LT_ADMIN_DBRollBack		  ,    "9052",    "ADIMN_DBRollBack    "		},

	
	{    LT_UPDATEREMOULDLVL          ,    "10000"    ,"UpdateTeremouldLvl"     },
	{    LT_KickPlayer_5Hour          ,    "11000"    ,"KickPlayer5Hour"        },
	{    LT_PLAYER_OnLine_5Hour       ,    "12000"    ,"PlayerOnline5Hour"      },
	{    LT_NewComer_GainGift         ,    "13000"    ,"NewComerGainGift"       },
	{    LT_PLAT_INVITE_FRIENDS       ,    "14000"    ,"PlatInviteFriends"      },
	{    LT_PLAT_INVITE_FRIENDS_CREDIT,    "14001"    ,"PlatInviteCredit"       },
	{    LT_InviteFrd                 ,    "14002"    ,"InviteFrd     "         },
	{    LT_PLAT_INVITE_FRIENDS_DAY   ,    "14003"    ,"InviteFrdPerDay "       },
	{    LT_InviteFrd_Url             ,    "14004"    ,"InviteFrdUrl  "         },
	{    LT_InviteFrdLvGiftSend       ,    "14005"    ,"InviteFrdLvGiftSend  "  },
	{    LT_InviteFrdLvGiftGet        ,    "14006"    ,"InviteFrdLvGiftGet   "  },
	{    LT_InviteFrdCouponGet        ,    "14007"    ,"InviteFrdCouponGet   "  },
	{    LT_BldAddBuff                ,    "15000"    ,"buildingaddbuff"        },
	{    LT_PlayerAddBuff             ,    "15001"    ,"playeraddbuff"          },
	{    LT_PLAT_REFRESH_YELLOW       ,    "16000"    ,"platrefreshyellow"      },
	{    LT_SERVER_REFRESH_YELLOW     ,    "16001"    ,"serverrefreshyellow"    },
	{    LT_PLAT_REFRESH_YELLOW_REBATE,    "16002"    ,"platrefreshyellowrebate"},
	{    LT_DAILY_GIFT_POINT          ,    "17000"    ,"dailygiftpoint"         },
	{    LT_DAILY_GIFT_POINT_RECORD   ,    "17001"    ,"dailygiftpointrecord"   },
	{    LT_ATK_DEFENCE_DAMAGE        ,    "18000"    ,"atkdefencedamage"       },
	{    LT_COMBAT_POWER_LOG          ,    "19000"    ,"combatpowerlog"         },
	{    LT_DAILY_YELLOW_RES          ,    "20000"    ,"dailyyellowres"         },
	{    LT_COST_GIFT_GET             ,    "20001"    ,"costgiftget"            },
	{    LT_INVITE_FRD_GIFT           ,    "20002"    ,"invitefrdgift"          },
	{    LT_COST_GIFT_CUSTOM_FLAG     ,    "20003"    ,"costgiftcustomflag"     },
	{    LT_COST_GIFT_ADDARMY		  ,    "20004"    ,"costgiftaddarmy   "     },
	{    LT_PLAYER_USE_WAIGUA_CNT     ,    "21000"    ,"usewaigua_cnt"          },
	{    LT_PLAYER_USE_WAIGUA_HONOR   ,    "21001"    ,"usewaigua_honor"        },
	{    LT_PLAYER_USE_WAIGUA_CHECK   ,    "21002"    ,"usewaigua_check"        },
	{    LT_PLAYER_RC4_KEY            ,    "22000"    ,"playerrc4key"           },
	{    LT_SHOP_FOR_GIFT             ,    "22100"    ,"shopforgift"            },
	{    LT_SHOP_FOR_GIFTGET          ,    "22101"    ,"shopforgiftget"         },
	{    LT_TIME_LIMIT_GIFT           ,    "22200"    ,"timelimitgift"          },
	{    LT_LUCKY_BOX                 ,    "22500"    ,"luckybox"               },
	{    LT_STRATEGIC_ADDARMY         ,    "23000"    ,"strategicaddarmy"       },
	{    LT_STRATEGIC_DELARMY         ,    "23001"    ,"strategicdelarmy"       },
	{    LT_STRATEGIC_OPT_ERROR       ,    "23002"    ,"strategicerrors"        },
	{    LT_STRATEGIC_TREAT           ,    "23003"    ,"strategictreat"         },
	{    LT_STRATEGIC_DISMISS         ,    "23004"    ,"strategicdismiss"       },
	{    LT_STRATEGIC_GENERALADD      ,    "23005"    ,"strategicgeneraladd"    },
	{    LT_STRATEGIC_GENERALTREAT    ,    "23006"    ,"strategicgeneraltreat"  },
	{    LT_STRATEGIC_GENERALDISMISS  ,    "23007"    ,"strategicgeneraldissmiss"},
	{    LT_PVEFIGHT_BEGIN            ,    "23100"    ,"pvefightbegin"          },
	{    LT_PVEFIGHT_OPT_ERROR        ,    "23101"    ,"pvefightopterror"       },
	{    LT_PVEFIGHT_END              ,    "23102"    ,"pvefightend"            },
	{    LT_PVEFIGHT_REFRESH          ,    "23103"    ,"pvefightrefresh"        },
	{    LT_PVEFIGHT_BUYREFRESH       ,    "23104"    ,"pvefightbuyrefresh"     },
	{    LT_PVEFIGHT_PRODUCE          ,    "23105"    ,"pvefightproduce"        },
	{    LT_PVEFIGHT_SELF_ATKDATA     ,    "23106"    ,"pvefightselfdatkata"    },
	{    LT_PVEFIGHT_ENEMY_ATKDATA    ,    "23107"    ,"pvefightenemyatkdata"   },
	{    LT_LUCKYNUM_COST			  ,    "24000"    ,"luckynumcost"			},
	{    LT_LUCKYNUM_GET			  ,    "24001"    ,"luckynumget"			},
	{    LT_LUCKYNUM_GETNUM			  ,    "24002"    ,"luckynumgetnum"			},
	{    LT_PRIVILEGE				  ,    "25000"    ,"privilege"				},
	{    LT_ADDCOUPON				  ,    "26000"    ,"addcoupon"				},
	{    LT_COSTCOUPON				  ,    "26001"    ,"costcoupon"				},
	{    LT_BASE_EXPLORE			  ,    "26002"    ,"baseexplore"			},
	{    LT_LUCKYWHEEL_RESET		  ,    "27000"    ,"luckywheelreset"		},
	{    LT_LUCKYWHEEL_GET			  ,    "27001"    ,"luckywheelget"			},
	{    LT_REWARD_GET				  ,    "28000"    ,"rewardget"				},
	{    LT_REWARD_GET_WEAPON		  ,    "28001"    ,"rewardgetweapon"		},
	{    LT_REWARD_GET_EMBLEM		  ,    "28002"    ,"rewardgetemblem"		},
	{    LT_REWARD_GET_BOOK			  ,    "28003"    ,"rewardgetbook"			},
	{    LT_REWARD_GET_ADMIRAL		  ,    "28004"    ,"rewardgetadmiral"		},
	{    LT_REWARD_GET_ADMIRAL_T_EXP  ,    "28005"    ,"rewardgetadmiraltexp"	},
	{    LT_REWARD_GET_ARMY			  ,    "28006"    ,"rewardgetarmy"			},

	{    LT_DAILYCOST_CREDIT		  ,    "29000"    ,"dailycostcredit"		},
	{    LT_DAILYCOST_TOKEN			  ,    "29001"    ,"dailycosttoken"			},

	{    LT_DAILYCOST_DAILY_GET		  ,    "29002"    ,"dailycostdailyget"		},
	{    LT_DAILYCOST_ALL_GET		  ,    "29003"    ,"dailycostallget"		},
	{    LT_DAILYCOST_BUY_STAR		  ,    "29004"    ,"dailycostbuystar"		},


	{	 LT_ARENA_COUNTRY_BEGIN		  ,	   "30000"	  ,"arenacountrybegin"		},
	{	 LT_ARENA_COUNTRY_END		  ,	   "30001"	  ,"arenacountryend"		},
	{	 LT_ARENA_COUNTRY_BUYREFRESH  ,	   "30002"	  ,"arenacountrybuy"		},
	{	 LT_ARENA_COUNTRY_RANKSTART	  ,	   "30003"	  ,"arenacountryrankst"		},
	{	 LT_ARENA_COUNTRY_DONEACHIEVE ,	   "30004"	  ,"arenadoneachieve"		},
	{	 LT_ARENA_COUNTRY_GAINACHIEVE ,	   "30005"	  ,"arenagainachieve"		},
	{	 LT_ARENA_COUNTRY_GAINRANK	  ,	   "30006"	  ,"arenagainrank"			},
	{	 LT_ARENA_COUNTRY_GAINRANK2	  ,	   "30007"	  ,"arenagain2rank"			},
	{	 LT_ARENA_COUNTRY_SHOP		  ,	   "30008"	  ,"arenashopbuy"			},
	{	 LT_ARENA_COUNTRY_RELOADDATA  ,	   "30009"	  ,"arenareloaddata"		},
	{	 LT_ARENA_COUNTRY_NEWSCORELIST  ,  "30010"	  ,"arenanewscorelist"		},
	{	 LT_ARENA_COUNTRY_GAINWEEKGIFT  ,  "30011"	  ,"arenagainweekfift"		},
	{	 LT_ARENA_COUNTRY_DEBUG			,  "30012"	  ,"arenagaindebug"		},
	{	 LT_ARENA_COUNTRY_DAYUPDATE     ,  "30013"	  ,"arenadayupdate"		    },
	{	 LT_ARENA_COUNTRY_RANKERRO     ,  "30014"	  ,"arenarankerr"		    },
	{	 LT_ARENA_COUNTRY_RANKEXCHANGE     ,  "30015"	  ,"arenarankchange"		    },
	{	 LT_ARENA_COUNTRY_RANKLAST     ,  "30016"	  ,"arenaranklast"		    },
	{	 LT_ARENA_COUNTRY_RANKSET     ,  "30017"	  ,"arenarankset"		    },
	{	 LT_ARENA_COUNTRY_FIGHT_END     ,  "30018"	  ,"arenafightend"		    },

	{	 LT_ANNIVERSARY_DRAW		  ,	   "31000"	  ,"annniversarydraw"		},
	{	 LT_ANNIVERSARY_GET_WORD	  ,	   "31001"	  ,"annniversarygetword"	},
	{	 LT_ANNIVERSARY_GET_ALL		  ,	   "31002"	  ,"annniversarygetall"		},

	{	 LT_QSHOP_BUY				  ,	   "32000"	  ,"qshopbuy	"			},
	{	 LT_RANK_GIFT_GET			  ,	   "33000"	  ,"rankgiftget	"			},
    {    LT_WORLCCUP_BET              ,    "34000"    ,"worldcupbet"            },
    {    LT_WORLDCUP_REWARD           ,    "34001"    ,"worldcupreward"         },
	{    LT_WORLDCUP_REWARD_CREDIT           ,    "34002"    ,"worldcuprewardcredit"         },

	{	 LT_EQUIP_Add		          ,	   "40000"	  ,"equipadd"			    },
	{	 LT_EQUIP_Destroy		      ,	   "40001"	  ,"equipdestroy"			},
	{	 LT_EQUIP_UpGrade		      ,	   "40002"	  ,"equipupgrade"			},
	{	 LT_EQUIP_Strength		      ,	   "40003"	  ,"equipstrength"			},
	{	 LT_EQUIP_Merge		          ,	   "40004"	  ,"equipmerge"			},

	{	 LT_ARENA_WORLD_BEGIN		  ,	   "41000"	  ,"worldarenabegin"			    },
	{	 LT_ARENA_WORLD_END		      ,	   "41001"	  ,"worldarenaend"			        },
	{	 LT_ARENA_WORLD_BUYREFRESH	  ,	   "41002"	  ,"worldarenabuyrefresh"			},
	{	 LT_ARENA_WORLD_RANKSTART	  ,	   "41003"	  ,"worldarenarankstart"			},
	{	 LT_ARENA_WORLD_GAINRANK	  ,	   "41004"	  ,"worldarenagainrank"			    },
	{	 LT_ARENA_WORLD_RELOADDATA	  ,	   "41005"	  ,"worldarenareloaddata"			},
	{	 LT_ARENA_WORLD_RERANK	      ,	   "41006"	  ,"worldarenarerank"			    },
	{	 LT_ARENA_WORLD_RANKERRO	  ,	   "41007"	  ,"worldarenarankerr"			    },
	{	 LT_ARENA_WORLD_JION	      ,	   "41008"	  ,"worldarenajion"			    },
	{	 LT_ARENA_WORLD_RANKUPDATE	  ,	   "41009"	  ,"worldarenaindexupdate"			    },
	{	 LT_ARENA_WORLD_RANKEXCHANGE  ,	   "41010"	  ,"worldarenaindexchange"			    },
	{	 LT_ARENA_WORLD_DAYUPDATE  ,	   "41011"	  ,"worldarenadayupdate"			    },
	{	 LT_ARENA_WORLD_RANKLAST  ,	   "41012"	  ,"worldarenaranklast"			    },

	{	 LT_CATHECTIC		          ,	   "42000"	  ,"cathectic"				},
	{	 LT_CATHECTIC_BUY		      ,	   "42001"	  ,"cathecticbuy"			},
	{	 LT_CATHECTIC_GET		      ,	   "42002"	  ,"cathecticget"				},
	{	 LT_CATHECTIC_CLEAR		      ,	   "42003"	  ,"cathecticbuyclear"			},

	{	 LT_ACTIVE_SHOP				  ,	   "43000"	  ,"activeshop	"			},

	{	 LT_ADDICTION				  ,	   "44000"	  ,"addiction	"			},

	{	 LT_ZHONGQIU_UID				  ,	   "45000"	  ,"zhongqiuuid	"			},
	{	 LT_ZHONGQIU_SEND				  ,	   "45001"	  ,"zhongqiusend	"		},
	{	 LT_ZHONGQIU_GET				  ,	   "45002"	  ,"zhongqiuget	"			},

	{	 LT_SEVENDAYS_LOGON				  ,	   "46000"	  ,"sevendayslogon	"		},
	{	 LT_SEVENDAYS_GET				  ,	   "46001"	  ,"sevendaysget	"		},

	{	 LT_CONTINUE_LAND_NEW_LOG		  ,	   "47000"	  ,"continuelandnewlog	"		},
	{	 LT_CONTINUE_LAND_NEW_LOGON		  ,	   "47001"	  ,"continuelandnewlogon	"	},

	{	 LT_WORLD_GRAIN_DAY_BATTLE		  ,	   "48000"	  ,"worldgraindaybattle	"		},
	{	 LT_WORLD_GRAIN_DAY_GET			  ,	   "48001"	  ,"worldgraindayget	"		},

	{	 LT_GUILD_ACTIVE				,	   "49000"	  ,"guildactive			"		},

	{	 LT_PASSWORD_SET_PASSWORD		,	   "50000"	  ,"passwordset			"		},
	{	 LT_PASSWORD_UNLOCK				,	   "50001"	  ,"passwordunlock		"		},
	{	 LT_PASSWORD_WRONG				,	   "50002"	  ,"passwordwrong		"		},
	{	 LT_PASSWORD_FREEZE				,	   "50003"	  ,"passwordfreeze		"		},
	{	 LT_PASSWORD_RESET				,	   "50004"	  ,"passwordreset		"		},
	{	 LT_PASSWORD_RELEASE			,	   "50005"	  ,"passwordrelease		"		},
	{	 LT_PASSWORD_RELEASE_CANCLE		,	   "50006"	  ,"passwordreleasecancle"		},
	{	 LT_PASSWORD_RELEASE_SUCCESS	,	   "50007"	  ,"passwordreleasesuc	"		},

	{	 LT_YELLOW_REFRESH				,	   "51000"	  ,"yellowrefresh		"		},
	{	 LT_YELLOW_GET					,	   "51001"	  ,"yellowget			"		},


	{	 LT_OFFICER_CREATE			      ,	   "51101"	  ,"officercreate	"		},
	{	 LT_OFFICER_POSITION_UPDATE		  ,	   "51102"	  ,"officerpositionupdate	"		},
	{	 LT_OFFICER_POSITION_CLEAR		  ,	   "51103"	  ,"officerpositionclear	"		},
	{	 LT_OFFICER_USE_RIGHT		      ,	   "51104"	  ,"officeruseright	"		},
	{	 LT_OFFICER_POSITION_DEL		      ,	   "51105"	  ,"officerdel	"		},
	{	 LT_OFFICER_POSITION_CHANGE		      ,	   "51106"	  ,"officerchange	"		},
	{	 LT_OFFICER_USE_RIGHT_EFFECT		      ,	   "51107"	  ,"officerrighteffect	"		},

	{	 LT_PLAYER_COMEBACK_GIFT		  ,	   "51108"	  ,"playercomebackgift	"	},

    {	 LT_LEVEL_BUY					  ,	   "51109"	  ,"levelbuy			"	},
	

	{	 LT_VIP_BUYCARD			          ,	   "51201"	  ,"vipbucard"		},
	{	 LT_VIP_REWARD		              ,	   "51202"	  ,"vipreward"		},
    {	 LT_VIP_DAILYFREEGIFT		      ,	   "51203"	  ,"vipfreegift"		},

	{	 LT_Trap_AddArmy			      ,	   "51301"	  ,"trapaddarmy"		},
	{	 LT_Trap_SellArmy		          ,	   "51302"	  ,"trapsellarmy"		},
	{	 LT_Trap_CaptureArmy		      ,	   "51303"	  ,"trapcapturearmy"		},

	{	 LT_SEVENDAYS_TARGET		      ,	   "52000"	  ,"sevendaystarget"		},
	{	 LT_SEVENDAYS_CREDIT		      ,	   "52001"	  ,"sevendayscredit"		},

	{	 LT_ARMY_UP_GRADE			          ,	   "52201"	  ,"armygradeup"		},
	{	 LT_ARMY_TURN_GRADE		              ,	   "52202"	  ,"armygradeturn"		},
	{	 LT_ARMY_HP_DEBUG		              ,	   "52203"	  ,"armyhpdebug"		},

	{	 LT_ZHAOMU_BIND			          ,	   "52301"	  ,"zhaomubind"		},
	{	 LT_ZHAOMU_GET		              ,	   "52302"	  ,"zhaomuget"		},
	{	 LT_ZHAOMU_FRD_GET		          ,	   "52303"	  ,"zhaomufrdget"		},

	{	 LT_NEWYEAR_GIFT		          ,	   "52401"	  ,"newyeargift"		},

	{	 LT_WPCCOM_OPT		          ,	   "60000"	  ,"wpccomopt"		},
    {	 LT_WPCCOM_OPEN_EXTRA		  ,	   "60001"	  ,"wpccomopenextra"		},

	{	 LT_QQTASK_RECORD		          ,	   "60101"	  ,"qqtaskrecord"		},
	{	 LT_QQTASK_GET					  ,	   "60102"	  ,"qqtaskget	"		},

	{	 LT_COUPON_MSG					  ,	   "60201"	  ,"couponmsg	"		},
	{	 LT_BATTLE_ARMY_ERROR			,	   "60501"	  ,"battlearmyerror	"		},
	{	 LT_BOOK_COLLECTION			,	   "60601"	  ,"bookcollection	"		},

	{	 LT_CHANNEL					,	   "60701"	  ,"channel	"		},

	{	 LT_EQUIP_ACTIVE			,	   "60801"	  ,"equipactive	"		},

	{	 LT_ARENA_REGION_BEGIN		  ,	   "61000"	  ,"regionarenabegin"			    },
	{	 LT_ARENA_REGION_END		      ,	   "61001"	  ,"regionarenaend"			        },
	{	 LT_ARENA_REGION_BUYREFRESH	  ,	   "61002"	  ,"regionarenabuyrefresh"			},
	{	 LT_ARENA_REGION_RANKSTART	  ,	   "61003"	  ,"regionarenarankstart"			},
	{	 LT_ARENA_REGION_GAINRANK	  ,	   "61004"	  ,"regionarenagainrank"			    },
	{	 LT_ARENA_REGION_RELOADDATA	  ,	   "61005"	  ,"regionarenareloaddata"			},
	{	 LT_ARENA_REGION_RERANK	      ,	   "61006"	  ,"regionarenarerank"			    },
	{	 LT_ARENA_REGION_RANKERRO	  ,	   "61007"	  ,"regionarenarankerr"			    },
	{	 LT_ARENA_REGION_JION	      ,	   "61008"	  ,"regionarenajion"			    },
	{	 LT_ARENA_REGION_RANKUPDATE	  ,	   "61009"	  ,"regionarenaindexupdate"			    },
	{	 LT_ARENA_REGION_RANKEXCHANGE  ,	   "61010"	  ,"regionarenaindexchange"			    },
	{	 LT_ARENA_REGION_DAYUPDATE  ,	   "61011"	  ,"regionarenadayupdate"			    },
	{	 LT_ARENA_REGION_RANKLAST  ,	   "61012"	  ,"regionarenaranklast"			    },
	{	 LT_REGION_SERVER_ERROR  ,	   "61013"	  ,"regionservererror"			    },
	{	 LT_ARENA_REGION_WAIGUA  ,	   "61014"	  ,"regionarenawaigua"			    },
	{	 LT_ARENA_REGION_LEAVE	      ,	   "61015"	  ,"regionarenaleave"			    },

	{	 LT_ADDJUNLING			,	   "61101"	  ,"addjunling	"		},
	{	 LT_COSTJUNLING			,	   "61102"	  ,"costjunlilng	"		},

	{	 LT_PVEBATTLE_START			,	   "61201"	  ,"pvebattlestart	"		},
	{	 LT_PVEBATTLE_END			,	   "61202"	  ,"pvebattleend	"		},
	{	 LT_PVEBATTLE_VALUE			,	   "61203"	  ,"pvebattlevalue	"		},
	{	 LT_PVEBATTLE_ACTIVE		,	   "61204"	  ,"pvebattleactive	"		},
	{	 LT_PVEBATTLE_CREDIT_ACTIVE	,	   "61205"	  ,"pvebattlecredit	"		},
	{	 LT_PVEBATTLE_REFRESH		,	   "61206"	  ,"pvebattlerefresh	"	},
	{	 LT_PVEBATTLE_SAODANG		,	   "61207"	  ,"pvebattlesaodang	"	},
	{	 LT_PVEBATTLE_BUY			,	   "61208"	  ,"pvebattlebuy		"	},

    {    LT_POKER_DEAL          ,      "61301"    ,"pokerdeal"      },
    {    LT_POKER_REDEAL        ,      "61302"    ,"pokerredeal"    },
    {    LT_POKER_CHANGE        ,      "61303"    ,"pokerchange"    },
    {    LT_POKER_SHOW          ,      "61304"    ,"pokershow"      },
    {    LT_POKER_EXCHANGE      ,      "61305"    ,"pokerexchange"  },
    {    LT_POKER_GETPOKER      ,      "61306"    ,"pokergetpoker"  },
    {    LT_POKER_REFRESH       ,      "61307"    ,"pokerrefresh"   },
	
	{    LT_RCNTR_Sign          ,      "62101"    ,"rcntrsign"      },
	{    LT_RCNTR_Attack        ,      "62102"    ,"rcntrattack"    },
	{    LT_RCNTR_CaptureCity   ,      "62103"    ,"rcntrcapturecity"    },
	{    LT_RCNTR_CityChg       ,      "62104"    ,"rcntrcitychg"      },
	{    LT_RCNTR_Spy			,      "62105"    ,"rcntrspy"  },
	{    LT_RCNTR_Over			,      "62106"    ,"rcntrover"  },
	{    LT_RCNTR_AddCoin		,      "62107"    ,"rcntraddcoin"  },
	{    LT_RCNTR_CostCoin		,      "62108"    ,"rcntrcostcoin"  },

	{    LT_RCNTR_ERROR			,      "62109"    ,"rcntrerror"  },
	{    LT_RCNTR_RELOADDATA	,      "62110"    ,"rcntrreloaddata"  },

	{    LT_MIDDLEYEAR_GIFT ,      "62111"    ,"middleyeargift"  },
	{    LT_MIDDLEYEAR_COST ,      "62112"    ,"middleyearcost"  },

	{    LT_AddHeroScore ,      "63000"    ,"addheroscore"  },
	{    LT_CostHeroScore ,      "63001"    ,"costheroscore"  },

	{	 LT_AddHero	              ,	   "70000"	  ,"addhero"			    },
	{	 LT_DelHero	              ,	   "70001"	  ,"delhero"			    },
	{	 LT_AddHeroLetter	              ,	   "70002"	  ,"addheroletter"			    },
	{	 LT_CostHeroLetter	              ,	   "70003"	  ,"costheroletter"			    },
	{	 LT_AddHeroLevelExp	              ,	   "70004"	  ,"addherolevelexp"			    },
	{	 LT_AddHeroGradeExp	              ,	   "70005"	  ,"addherogradeexp"			    },
	{	 LT_VisitHero2Hero	      ,	   "70006"	  ,"visitHero2hero"			    },
	{	 LT_VisitHero2Letter	  ,	   "70007"	  ,"visitHero2letter"			    },
	{	 LT_VisitHeroError	      ,	   "70008"	  ,"visitHeroerror"			    },
	{	 LT_VisitHeroExchange	  ,	   "70009"	  ,"visitHeroexchange"			    },
	{	 LT_HeroSelFree	          ,	   "70010"	  ,"herosellfree"			    },
	{	 LT_HeroTurnOn       	  ,	   "70011"	  ,"heroturnon"			    },
	{	 LT_HeroSell        	  ,	   "70012"	  ,"herosell"			    },
	{	 LT_HeroTrain       	  ,	   "70013"	  ,"herotrain"			    },
	{	 LT_HeroChangeExp	      ,	   "70014"	  ,"herochangeexp"			    },
	{	 LT_AddHeroHPError	      ,	   "70015"	  ,"addherohperror"			    },
	{	 LT_HeroChangeIndex	      ,	   "70016"	  ,"herochangeindex"			    },
	{	 LT_ChangeHero	          ,	   "70017"	  ,"changehero"			    },
	{	 LT_HeroDie	          ,	   "70018"	  ,"herodie"			    },
	{	 LT_HeroUpLevel	          ,	   "70019"	  ,"herouplevel"			    },
	{	 LT_HeroTreat	          ,	   "70020"	  ,"herotreat"			    },
	{	 LT_HeroAccTrain	          ,	   "70021"	  ,"heroacctrain"			    },
	{	 LT_HeroHPUpdate	          ,	   "70022"	  ,"herohpupdate"			    },
	{	 LT_HeroUpgrade	          ,	   "70023"	  ,"heroupgrade"			    },
	{	 LT_HeroTreatAll	          ,	   "70024"	  ,"herotreatall"			    },


	/*{    LT_RCNTR_Sign          ,      "62101"    ,"rcntrsign"      },
	{    LT_RCNTR_Attack        ,      "62102"    ,"rcntrattack"    },
	{    LT_RCNTR_CaptureCity   ,      "62103"    ,"rcntrcapturecity"    },
	{    LT_RCNTR_CityChg       ,      "62104"    ,"rcntrcitychg"      },
	{    LT_RCNTR_Spy			,      "62105"    ,"rcntrspy"  },
	{    LT_RCNTR_Over			,      "62106"    ,"rcntrover"  },
	{    LT_RCNTR_AddCoin		,      "62107"    ,"rcntraddcoin"  },
	{    LT_RCNTR_CostCoin		,      "62108"    ,"rcntrcostcoin"  },

	{    LT_RCNTR_ERROR			,      "62109"    ,"rcntrerror"  },
	{    LT_RCNTR_RELOADDATA	,      "62110"    ,"rcntrreloaddata"  },

    {    LT_MIDDLEYEAR_GIFT ,      "62111"    ,"middleyeargift"  },
    {    LT_MIDDLEYEAR_COST ,      "62112"    ,"middleyearcost"  },*/

	{    LT_AUTO_COM_LEVEL_UP ,    "70101"    ,"autocomlevelup"  },
    {    LT_QQ_OPENSNS_GIFT   ,    "70102"    ,"qqopengift"  },

    {    LT_VALENTINES_DAY_GIFT   ,    "70103"    ,"valentinesdaygift"  },
	{    LT_Property_Upgrade   ,    "70201"    ,"PropertyUpgrade"  },
	{    LT_Property_Reset   ,    "70202"    ,"PropertyReset"  },

	{    LT_GVE_Fight	   ,    "70301"    ,"gvefight"  },
	{    LT_GVE_GetBox	   ,    "70302"    ,"gvegetbox"  },
	{    LT_GVE_GetRankBox ,    "70303"    ,"gverankbox"  },
	{    LT_GVE_AddPoint   ,    "70304"    ,"gveaddpoint"  },
	{    LT_GVE_UseBuff    ,    "70305"    ,"gveusebuff"  },
	{    LT_GVE_AddCoin    ,    "70306"    ,"gveaddcoin"  },
	{    LT_GVE_CostCoin   ,    "70307"    ,"gvecostcoin"  },
	{    LT_GVE_GetPersonalBox   ,    "70308"    ,"gvegetpersonalbox"  },
	

	{    LT_GVE_COUNGRY_Reset    ,    "70401"    ,"gvecountryreset"  },
	{    LT_GVE_COUNGRY_Step   ,    "70402"    ,"gvecountrystep"  },
	{    LT_GVE_COUNGRY_FirstDown   ,    "70403"    ,"gvecountryfirstdown"  },
	{    LT_GVE_COUNGRY_GVELIST   ,    "70404"    ,"gvecountrygvelist"  },
	/*{    LT_AddHeroScore ,      "63000"    ,"addheroscore"  },
	{    LT_CostHeroScore ,      "63001"    ,"costheroscore"  },*/

	{	 LT_ARENA_HERO_BEGIN		  ,	   "71000"	  ,"heroarenabegin"			    },
	{	 LT_ARENA_HERO_END		      ,	   "71001"	  ,"heroarenaend"			        },
	{	 LT_ARENA_HERO_BUYREFRESH	  ,	   "71002"	  ,"heroarenabuyrefresh"			},
	{	 LT_ARENA_HERO_RANKSTART	  ,	   "71003"	  ,"heroarenarankstart"			},
	{	 LT_ARENA_HERO_GAINRANK	  ,	   "71004"	  ,"heroarenagainrank"			    },
	{	 LT_ARENA_HERO_RELOADDATA	  ,	   "71005"	  ,"heroarenareloaddata"			},
	{	 LT_ARENA_HERO_RERANK	      ,	   "71006"	  ,"heroarenarerank"			    },
	{	 LT_ARENA_HERO_RANKERRO	  ,	   "71007"	  ,"heroarenarankerr"			    },
	{	 LT_ARENA_HERO_JION	      ,	   "71008"	  ,"heroarenajion"			    },
	{	 LT_ARENA_HERO_RANKUPDATE	  ,	   "71009"	  ,"heroarenaindexupdate"			    },
	{	 LT_ARENA_HERO_RANKEXCHANGE  ,	   "71010"	  ,"heroarenaindexchange"			    },
	{	 LT_ARENA_HERO_DAYUPDATE  ,	   "71011"	  ,"heroarenadayupdate"			    },
	{	 LT_ARENA_HERO_RANKLAST  ,	   "71012"	  ,"heroarenaranklast"			    },


	{    LT_RESOURCE_SEARCH  ,    "71501"    ,"resourcesearch"  },
	{    LT_RESOURCE_GET	 ,    "71502"    ,"resourceget"  },
	{    LT_RESOURCE_LEAVE   ,    "71503"    ,"resourceleave"  },
	{    LT_RESOURCE_ATK	 ,    "71504"    ,"resourceatk"  },
	{    LT_RESOURCE_DEF	 ,    "71505"    ,"resourcedef"  },
	{    LT_RESOURCE_GETRES,    "71506"    ,"resourcegetres"  },
	{	 LT_EXPLORE_GIFT,		"71057"	,	"exploregift"},
    {	 LT_WPCAddCom,			"71058"	,	"WPCAddCom"},
    {	 LT_RENT_WEAPONCOMP,	"71059"	,	"rentweaponcomp"},

	{	 LT_GUILDTASK_COMPLETE , "72020"	, "guildtaskcomplete"},
	{	 LT_GUILDTASK_COSTCOMPLETE , "72021" , "guildtaskcostcomplete"},
	{	 LT_GUILDTASK_FLUAH	,	"72022"		,	"guildtaskflush"},
	{	 LT_GUILDTASK_RAND,		"72023"		,	"guildtaskrand"},

	{	 LT_GVG_SIGN,			"73000"	,	"gvgsign"},
	{	 LT_GVG_BRK,			"73001"	,	"gvgbrk"},
	{	 LT_GVG_DEF,			"73002"	,	"gvgdef"},
	{	 LT_GVG_ENTER,			"73003"	,	"gvgenter"},
	{	 LT_GVG_LEAVE,			"73004"	,	"gvgleave"},
	{	 LT_GVG_GET_REWARD,			"73005"	,	"gvgreward"},
	{	 LT_GVG_ADD_PROP,			"73006"	,	"gvgprop"},
	{	 LT_GVG_ADD_STREAK,			"73007"	,	"gvgstreak"},
	{	 LT_GVG_CONTRIBUTE_RECORD,	"73008"	,	"gvgcontributerecord"},
	{	 LT_GVG_OFFLINEENTER,		"73009"	,	"gvgofflineenter"},
	{	 LT_GVG_OFFLINELEAVE,		"73010"	,	"gvgofflineleave"},
	
	{	 LT_CNTGVG_SIGN,			"74000"	,	"gvgcntsign"},
	{	 LT_CNTGVG_BTL_SEND,		"74001"	,	"gvgcntbtlsend"},
	{	 LT_CNTGVG_BTL_GET,			"74002"	,	"gvgcntbtlget"},

	{	 LT_FIGHTGVG_BTL_GET,			"74003"	,	"gvgfightbtlget"},

	{	 LT_CNTGVG_GET_CITY,			"74004"	,	"gvgcntgetcity"},

    {    LT_EXPLORE_ARSENAL,        "75000" ,   "explorearsenal"},
    {    LT_ALLMEN_LOTTERY_GIFT,    "75001" ,   "allmenlottery"},

	{    LT_WPCRANK_RECORD,			"76001" ,   "wpcrankrecord"},

	{	 LT_PUT_IDENT_INFO,			"76100"	,	"putidentinfo"},
	{	 LT_GET_IDENT_INFO,			"76100"	,	"getidentinfo"},
	{	 LT_GUILD_7DAY_CONTRIBUTE,	"76200"	,	"7dayguildcontribute"},

	{	 LT_GUILD_7DAY_CONTRES   ,	"76201" ,   "7dayguildcontres"},
	{	 LT_GUILD_CHG_LEADER	 ,	"76202" ,	"GuildChgLeader"},

    {	 LT_ADIMN_DelEquip,	"77200"	,	"admindelequip"},
    {	 LT_VIP_SuperList,	"77201"	,	"vipsuperlist"},
    {	 LT_ADMIN_DELBOOKEXP,	"77202"	,	"delbookexp"},
    {	 LT_ADMIN_DELWPCCOMEXP,	"77203"	,	"delwpccomexp"},
    {	 LT_ADMIN_DELEMBLEMEXP,	"77204"	,	"delembelmexp"},
	{	 LT_ADIMN_DEL_ADMIRAL_SPECIAL,	"77205"	,	"deladmiralspecial"},

	{	 LT_ADIMN_DEL_HERO_SPECIAL,	"77206"	,	"delherospecial"},
	{	 LT_ADIMN_DEL_HERO_EXP_SPECIAL,	"77207"	,	"delheroexpspecial"},

	{	 LT_ADIMN_DEL_WPC_EXP_SPECIAL,	"77208"	,	"delwpcexpspecial"},
	{	 LT_ADIMN_DEL_EMBLEM_EXP_SPECIAL,	"77209"	,	"delemblemexpspecial"},
	{	 LT_ADIMN_DEL_BOOK_EXP_SPECIAL,	"77210"	,	"delbookexpspecial"},

	{	 LT_ADIMN_ADD_EXPWPC_SPECIAL,	"77211"	,	"addexpwpcspecial"},
	{	 LT_ADIMN_ADD_EXPEMBLEM_SPECIAL,	"77212"	,	"addexpemblemspecial"},

    {	 LT_EQUIP_StrengthExtra		  ,	   "77213"	  ,"equipstrengthextra"			},

	{	LT_WARCOLLEGE_UPSTRATEGY,	"76300"	,	"warcollege_upstrategy"},
	{	LT_WARCOLLEGE_PROMOTE,		"76301"	,	"warcollege_promote"},
	{	LT_WARCOLLEGE_TRAINSKILL,	"76302"	,	"warcollege_trainskill"},
	{	LT_WARCOLLEGE_UPSKILL,		"76303"	,	"warcollege_upskill"},
	{	LT_WARCOLLEGE_RESETSTTIMES,	"76304"	,	"warcollege_resetskilltraintimes"},
    {	LT_WARCOLLEGE_BUYSKILLTRAINTIMES , "76305" , "warcollege_buyskilltraintimes"},
    {	LT_REMOVE_EXTRASPEEDWPC , "76306" , "removeextraspeedwpc"},

    {	LT_PREPAY_NEWORDER , "76320" , "prepay_neworder"},
    {	LT_PREPAY_OUTTIMEORDER , "76321" , "prepay_outtimeorder"},
    {	LT_PREPAY_BRUSHORDER , "76322" , "prepay_brushorder"},
    {	LT_PREPAY_PAYORDER , "76323" , "prepay_payorder"},

    {	LT_DAILYSIGNIN_SIGGNIN , "76324" , "signin_signin"},
    {	LT_DAILYSIGNIN_GETGIFT , "76325" , "signin_getgift"},
    {	LT_DAILYSIGNIN_REPLENISH , "76326" , "signin_replenish"},
	{	LT_SECARMSDEALER_GETAWARD , "76330" , "secarmsdealer_getreward"},
	{	LT_SECARMSDEALER_REWARD , "76331" , "secarmsdealer_reward"},
	{	LT_ZONE_TENYEAR_COSTGIFT , "76332" , "zone_tenyear_costgift"},

    {	LT_WARGAME_OCCUPY , "76340" , "wargame_occupy"},
    {	LT_WARGAME_LOOT , "76341" , "wargame_loot"},
    {	LT_WARGAME_COUNTERATTACK , "76342" , "wargame_counterattack"},
    {	LT_WARGAME_DELAY , "76343" , "wargame_delay"},
    {	LT_WARGAME_LEAVE , "76344" , "wargame_leave"},
    {	LT_WARGAME_USETOKEN , "76345" , "wargame_usetoken"},
    {	LT_WARGAME_USEREPORT , "76346" , "wargame_usereport"},
    {	LT_WARGAME_ADDTOKEN , "76347" , "wargame_addtoken"},
    {	LT_WARGAME_ADDREPORT , "76348" , "wargame_addreport"},
    {	LT_WARGAME_BUYITEM , "76349" , "wargame_buyitem"},
    {	LT_WARGAME_BELOOT , "76350" , "wargame_beloot"},
    {	LT_WARGAME_TRUCE , "76351" , "wargame_truce"},


	{	LT_LEAGUEBATTLE_ADDPOINT,	 "76401" , "leaguebattle_addpoint"},
	{	LT_LEAGUEBATTLE_GETREWARD,	 "76402" , "leaguebattle_getreward"},
	{	LT_LEAGUEBATTLE_REFRESH,	 "76403" , "leaguebattle_refresh"},
	{	LT_LEAGUEBATTLE_RESULT,		 "76404" , "leaguebattle_result"},
	{	LT_LEAGUEBATTLE_DEBUG,		 "76405" , "leaguebattle_debug"},

	{	LT_HAPPYLIB_EXPLORE		, "76450" , "happylib_explore"},
	{	LT_HAPPYLIB_AWARD		, "76451" , "happylib_award"},
	{	LT_HAPPYLIB_AOTUAWARD	, "76452" , "happylib_autoaward"},

    {	LT_SUPERSTORM_USETTOKEN	, "76453" , "superstorm_usetoken"},
    {	LT_SUPERSTORM_USETTOKENRESULT	, "76454" , "superstorm_usetokenresult"},
    {	LT_SUPERSTORM_BEATK	, "76455" , "superstorm_beatk"},
    {	LT_SUPERSTORM_REFUSE	, "76456" , "superstorm_refuse"},
    {	LT_SUPERSTORM_BEREFUSE	, "76457" , "superstorm_berefuse"},

	{	LT_GOLD_GUN_DEBUG	, "80000" , "gold_gun_debug"},
	
	{	LT_HAPPYBUY_AWARD		, "80001" ,	"happybuy_award"},

	{	LT_COUNTRY_CHAT_WORLD	, "80002" , "countrychat_world"},
	{	LT_COUNTRY_CHAT_MASK	, "80003" , "countrychat_mask"},
	{	LT_COUNTRY_CHAT_UNMASK	, "80004" , "countrychat_unmask"},

    {	LT_MILITARYSOUL_ACTIVESOUL	, "80010" , "militarysoul_activesoul"},
    {	LT_MILITARYSOUL_UPDATESOUL	, "80011" , "militarysoul_updatesoul"},
    {	LT_MILITARYSOUL_ACTIVESKILL	, "80012" , "militarysoul_activeskill"},
    {	LT_MILITARYSOUL_UPDATESKILL	, "80013" , "militarysoul_updateskill"},
    {	LT_MILITARYSOUL_RESETSKILL	, "80014" , "militarysoul_resetskill"},
    {	LT_MILITARYSOUL_LOCKSKILL	, "80015" , "militarysoul_lockskill"},
    {	LT_MILITARYSOUL_COSTPOINT	, "80016" , "militarysoul_costpoint"},
    {	LT_MILITARYSOUL_ADDPOINT	, "80017" , "militarysoul_addpoint"},
	{	LT_WallPct					, "80018" , "sotre_buy_wall_pct"},
	{	LT_REBATE_AWARD				, "80020" , "rebate_award"},
    {	LT_AdmiralReduceProp		, "80021" , "admiral_reduceprop"},
	{	LT_TOWER_ENHANCE			, "80022" , "tower_enhance"},
	{	LT_TOWER_ENHANCE_END		, "80023" , "tower_enhance_end"},

    {	LT_GUILDREDENVELOPE_ISSUE				, "80200" , "guildredenvelope_issue"},
    {	LT_GUILDREDENVELOPE_SNAPPE				, "80201" , "guildredenvelope_snappe"},
    {	LT_GUILDREDENVELOPE_REFUND				, "80202" , "guildredenvelope_refund"},
    {	LT_GUILDREDENVELOPE_REMAINDER			, "80203" , "guildredenvelope_remainder"},
    {	LT_GUILDREDENVELOPE_ADDYASUIQIAN		, "80204" , "guildredenvelope_addyasuiqian"},
    {	LT_GUILDREDENVELOPE_COSTYASUIQIAN		, "80205" , "guildredenvelope_costyasuiqian"},
    {	LT_GUILDREDENVELOPE_SNAPPEOVER		    , "80206" , "guildredenvelope_snappeover"},
    {	LT_GUILDREDENVELOPE_CLEARDATA		    , "80207" , "guildredenvelope_cleardata"},
    {	LT_WPCAddJammer		, "80024" , "wpcaddjammer"},
    {	LT_Jammer_TurnOn		, "80025" , "jammer_turnon"},
    {	LT_Jammer_TurnOff		, "80026" , "jammer_turnoff"},
    {	LT_Jammer_AddExp		, "80027" , "jammer_addexp"},
    {	LT_Jammer_Combine		, "80028" , "jammer_combine"},
    {	LT_Jammer_QuickCombine		, "80029" , "jammer_quickcombine"},
    {	LT_Jammer_Lock		, "80030" , "jammer_lock"},
    {	LT_Jammer_Del		, "80031" , "jammer_del"},
	
    {	LT_BOSSBATTLE_ADMIRE				, "80100" , "bossbattle_admire"},
    {	LT_BOSSBATTLE_GETREWARD				, "80101" , "bossbattle_gerreward"},
    {	LT_BOSSBATTLE_EMBRAVE				, "80102" , "bossbattle_embrave"},
    {	LT_BOSSBATTLE_SETWORD				, "80103" , "bossbattle_setword"},
    {	LT_BOSSBATTLE_REPROTWORD			, "80104" , "bossbattle_report"},
    {	LT_BOSSBATTLE_ATACK				    , "80105" , "bossbattle_attack"},
    {	LT_BOSSBATTLE_CLEARCD				, "80106" , "bossbattle_clearcd"},
    {	LT_BOSSBATTLE_COUNTRY_DMGRECORD		, "80107" , "bossbattle_country_dmgrecord"},
    {	LT_BOSSBATTLE_COUNTRY_BOSSDEAD		, "80108" , "bossbattle_country_bossdead"},
    {	LT_ITEMPAY_PAYITEM		, "80109" , "itempay_payitem"},

    {   LT_ARMRACE_REWARD		,  "80110" , "armrace_reward" },
    {	LT_TOLEVEL_REWARD		,	"80111",  "tolevel_reward"	},

    {	LT_CNTGUILD_BTL_SEND	,	"80102",  "guildcntbtlsend"	},
    {	LT_CNTGUILD_BTL_GET		,	"80103",  "guildcntbtlget"	},
    {	LT_BLUE_GROW_GIFT					, "80820" , "blue_grow_gift"},

	{	LT_STC_AWARD			,	"80821",	"stcreditaward"},
	{	LT_STC_SYSAWARD			,	"80822",	"stcreditsysaward"},
	{	LT_STL_AWARD			,	"80823",	"stloginaward"},
	{	LT_STL_DAYS				,	"80824",	"stlogindays"},

	{	LT_CITYBUFF_FLAGSTATE_CHANGE		, "80208" , "citybuff_flagstate_change"},

    {	LT_MedalHonor_TurnOn		, "80112" , "medalhonor_turnon"},
    {	LT_MedalHonor_Lock		, "80113" , "medalhonor_lock"},
    {	LT_MedalHonor_Combine		, "80114" , "medalhonor_combine"},
    {	LT_MedalHonor_QuickCombine		, "80115" , "medalhonor_quickcombine"},
    {	LT_MedalHonor_Cast		, "80116" , "medalhonor_cast"},
    {	LT_MedalHonor_QuickCast		, "80117" , "medalhonor_quickcast"},
    {	LT_MedalHonor_BuyCastTime		, "80118" , "medalhonor_buycasttime"},
    {	LT_MedalHonor_Decorate		, "80119" , "medalhonor_decorate"},
    {	LT_MedalHonor_QuickDecorate		, "80120" , "medalhonor_quickdecorate"},
    {	LT_MedalHonor_GetMedalHonor		, "80121" , "medalhonor_getmedalhonor"},
    {	LT_MedalHonor_AddExp		, "80122" , "medalhonor_addexp"},
    {	LT_MedalHonor_AddMH		, "80123" , "medalhonor_addmedalhonor"},
    {	LT_MedalHonor_DelMH		, "80124" , "medalhonor_delmedalhonor"},
    {	LT_MedalHonor_AddCastToken		, "80125" , "medalhonor_addcasttoken"},
    {	LT_MedalHonor_CostCastToken		, "80126" , "medalhonor_costcasttoken"},
    {	LT_MedalHonor_AdminOpt		, "80126" , "medalhonor_adminopt"},

    {	LT_ZHAOCAIJINBAO_ZHAOCAI		, "80127" , "zhaocaijinbao"},
	{	LT_ONE_YUAN_PURCHASE_BUY_INFO		, "80209" , "one_yuan_purchase_buy_info"},
	{	LT_FETCH_ONE_YUAN_PURCHASE_PRIZE		, "80210" , "fetch_one_yuan_prize"},
	{	LT_ONE_YUAN_WINNER_RECORD		, "80211" , "one_yuan_winner_record"},

	{	LT_StaticTrapCreditUpgrade	, "80212" , "static_trap_credit_upgrade"},	
	{	LT_ExplosTrapCreditUpgrade	, "80213" , "explosive_trap_credit_upgrade"},
	{	LT_StaticTrapUpgrade		, "80214" , "static_trap_update"},	
	{	LT_ExplosiveTrapUpgrade		, "80215" , "explosive_trap_update"},
	{	LT_StaticTrapUnupgrade		, "80216" , "static_trap_unupgrade"},
	{	LT_ExplosiveTrapUnupgrade	, "80217" , "explosive_trap_unupgrade"},
	{	LT_TrapCreditProduce		, "80218" , "trap_credit_produce"},
	{	LT_TrapCreditAccUpgrade		, "80219" , "trap_credit_acc_produce"},
};

const int MAX_LOG_SMG_LENGTH = 1024*512;
class CSysLog
{
public:

private:
	CSysLog(void);
	~CSysLog(void);
public:
	static CSysLog* GetInstance();
	void Quit();
	void SetLogInfo(bool bGameLog,int nSrvID,string strLogDir,string strLogName,string strAddr,string strPort,bool bShowLog,int nSendLogLv,int nModul,int nModulVal);
	bool CreateLog();
	bool CreateDir(const char* szDir);
	void ChgLogFile();

	void WriteCurTime();

	ofstream* GetSysLogOF(){return m_pLogSys;}


	bool IsStatUser(int64 nUserID);
	int	 GetSrvID() {return m_nSrvID;}
	void BeginMsg();
	void EndMsg(LOG_TYPE emType,int nDmd);
	void CallShell();
	void SendMsg();
	bool InUse();
	bool NeedSend(int64 nUserID,LOG_TYPE emType,int nDmd);
#ifdef _WIN32
	inline void LogLock() {
		EnterCriticalSection( &m_Section ); 
	}
	inline void LogUnLock() {
		LeaveCriticalSection(&m_Section);
	}
#else
	inline void LogLock() {
		pthread_mutex_lock(&m_mutex);
	}
	inline void LogUnLock() {
		pthread_mutex_unlock(&m_mutex);
	}
#endif

	template <class T> CSysLog& operator << (const T &value)
	{
		sprintf(m_szBuf+m_nPos,"%d,",value);
		m_nPos = strlen(m_szBuf);

		return *this;
	}
	CSysLog& operator << (int64 value);
	CSysLog& operator << (char value);
	CSysLog& operator << (double value);
	CSysLog& operator << (float value);
	CSysLog& operator << (char* szBuf);
	CSysLog& operator << (const char* szBuf);
	CSysLog& operator << (string& str);
	CSysLog& operator << (const string& str);
private:
	
private:
	CSysLogNet	m_SysLogNet;
	bool		m_bShowLog;
	int			m_nSendLogLv;
	int			m_nModul;
	int			m_nModulVal;
	bool		m_bInUse;
	int			m_nSrvID;
	string		m_strLogDir;
	string		m_strLogName;
	bool		m_bGameLog;		//true:gamelog false:halllog

	string		m_strLogDay;
	ofstream*	m_pLogSys;	
	time_t		m_lastCheck;
	int			m_nPos;
	char		m_szBuf[MAX_LOG_SMG_LENGTH];
#ifdef _WIN32
	CRITICAL_SECTION m_Section; 
#else
	pthread_mutex_t m_mutex;
#endif

};

template <class T1,class T2,class T3,class T4>
void SYS_STAT(int64 uid,string strType,int nLV,int nGender,bool bYellowDmd,int nYellowDmdLV,bool bYearYellowDmd,int64 nTotalRecharge,int nRegDays,int64 nCredits,int nRegion,int vipType,int vipLevel,
			  bool bSendSome,T1 subTp1,T2 subTp2,T3 subTp3,T4 val1,int nVal2=0,int nVal3=0,int nVal4=0,int nVal5=0,int nVal6=0,int nVal7=0)
{
	CSysLog* pLog = CSysLog::GetInstance();
	if(!pLog->InUse())
		return;

	if(bSendSome&&!pLog->IsStatUser(uid))
	{
		return;
	}
	char szVip[8];
	sprintf(szVip,"%d:%d",vipType,vipLevel); 
	pLog->LogLock();
	pLog->BeginMsg();
	//time,serverid,uid,type,level,gender,yellowdmd,yellowdmdlv,yearyellowdmd,TotalRecharge,RegDays,obligate1,obligate2,obligate3,
	//subtype1,subtype2,subtype3,value1,value2,value3,value4,value5
	pLog->WriteCurTime();
	*pLog	<< pLog->GetSrvID()<<uid<<strType<<nLV<<nGender<<bYellowDmd<<nYellowDmdLV<<bYearYellowDmd<<nTotalRecharge<<nRegDays<<nCredits<<nRegion<<szVip<<0
		<< subTp1 << subTp2 << subTp3 << val1 << nVal2 << nVal3 << nVal4 << nVal5 << nVal6 << nVal7;

	pLog->SendMsg();
	pLog->LogUnLock();
}

template <class T1,class T2,class T3,class T4>
void SYS_StatisticsStat(int nRegion,string strType,T1 subTp1,T2 subTp2,T3 subTp3,T4 val1)
{
	SYS_STAT(0,strType,0,0,false,0,0,0,0,0,nRegion,0,0,false,subTp1,subTp2,subTp3,val1);
}


template <class T1,class T2,class T3,class T4>
void SYS_STAT_PLAT(const string& pid,string strType,const string& name,int gender,const string& profile,bool bYellowDmd,int nYellowDmdLV,bool bYearYellowDmd,bool bQQDmd,int nQQDmd,bool bQQDmdYear,
					T1 subTp1,T2 subTp2,T3 subTp3,T4 val1,int nVal2=0,int nVal3=0,int nVal4=0,int nVal5=0,int nVal6=0,int nVal7=0)
{
	CSysLog* pLog = CSysLog::GetInstance();
	if(!pLog->InUse())
		return;

	pLog->LogLock();
	pLog->BeginMsg();
	pLog->WriteCurTime();
	*pLog	<< pLog->GetSrvID()<<pid<<strType<<name<<gender<<profile<<bYellowDmd<<nYellowDmdLV<<bYearYellowDmd<<bQQDmd<<nQQDmd<<bQQDmdYear<<0<<0
		<< subTp1 << subTp2 << subTp3 << val1 << nVal2 << nVal3 << nVal4 << nVal5 << nVal6 << nVal7;

	pLog->SendMsg();
	pLog->LogUnLock();
}


#define CHG_LOG_FILE()	{ CSysLog::GetInstance()->ChgLogFile();}
#define SYS_LOG(uid,logType,region,dmd,msg) \
{\
	{\
	CSysLog* pLog = CSysLog::GetInstance();\
	if(pLog->InUse())\
	{\
		pLog->LogLock();\
		pLog->BeginMsg();\
		pLog->WriteCurTime();\
		*pLog << pLog->GetSrvID()<<uid<<LOG_MSG[logType].szId<<LOG_MSG[logType].szWords<<region<<msg;\
		pLog->EndMsg(logType,dmd);\
		pLog->LogUnLock();\
	}\
	}\
}

