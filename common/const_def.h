#ifndef _CONST_DEF_H_
#define _CONST_DEF_H_

typedef long long		time_d;
typedef long long       int64;
typedef unsigned char   byte;
typedef unsigned int    u_int;

#define BASE_RATE 10000.0
#define MAX_NUMBER 2100000000
#define WORLD_SPECIAL 88888
#define INVALID_VALUE -1

/** ÿ������ */
#define TIME_DAY_SECOND 86400

// --------------������һ�������--------------------
enum INIT_PLAYER_DATA
{
	INIT_PLAYER_COINS = 2800,
	INIT_PLAYER_MINERALS = 900,
	INIT_PLAYER_TOTALCOINS = 9000,
	INIT_PLAYER_TOTALMINERALS = 9000,
	INIT_PLAYER_CASH = 100,
	INIT_PLAYER_HQLEVEL = 0,
	INIT_PLAYER_DROIDS = 1,
	INIT_PLAYER_PLANETTYPE = 3,// ������3��
	INIT_PLAYER_DMGPROTECTIONTIMETOTAL = TIME_DAY_SECOND * 3 * 1000,// ��ʼ��ֳ�񱣻�ʱ��
};

enum GameWorkingStatus 
{
	NOT_CONNECTED	= 0,
	NOT_SYNC_USER	= 1,
	LOST_CONNECTION = 2,
	NORMAL			= 3
};

enum Gender_Type
{
    Gender_None     = 0,
    Gender_Boy      = 1,
    Gender_Girl     = 2,
    Gender_Both     = 3,
};

//ƽ̨���ͣ���ӦWEB��siteid
enum PLAT_TYPE
{
	PLAT_TYPE_MIN   = 0,
	PLAT_TYPE_TEST  = 1,
	PLAT_PP		    = 10,	//PP����
	PLAT_YINGYONGBAO,		//Ӧ�ñ�
	PLAT_UC,				//UCƽ̨
	PLAT_360,				//360ƽ̨
	PLAT_MI,				//С��ƽ̨
	PLAT_BAIDU,				//�ٶ�ƽ̨
	PLAT_WANDOUJIA,			//�㶹��ƽ̨
	PLAT_DANGLE,			//����ƽ̨
	PLAT_HUAWEI,			//��Ϊƽ̨
	PLAT_LENOVO,			//����ƽ̨
	PLAT_JINLI,	      		//����ƽ̨
	PLAT_OPPO,	      		//OPPOƽ̨
	PLAT_ANZHI,	      		//����ƽ̨
	PLAT_APPSTORE_CHINA,	//�й�APPSTORE
	PLAT_YINGYONGHUI,		//Ӧ�û�ƽ̨
	PLAT_GOOGLEPLAY_ENGLAND,//Ӣ��GooglePlay
	PLAT_JINSHAN,			//��ɽƽ̨
	PLAT_MEIZU,				//����ƽ̨
	PLAT_HTC,				//HTCƽ̨
	PLAT_YOUKU,				//�ſ�ƽ̨
	PLAT_SOUGOU,			//�ѹ�ƽ̨
	PLAT_MUZHIWAN,			//Ĵָ��
	PLAT_WARANDROID,		//��ս��׿
	PLAT_ENGFBGOOGLEPLAY,	//Ӣ��facebook��½googleplay֧��
	PLAT_ENGGFGOOGLEPLAY,   //Ӣ����˾�ٷ���½googleplay֧��
	PLAT_91,				//91
	PLAT_KUAIYONG,			//����
	PLAT_TONGBUTUI,			//ͬ����
	PLAT_ITOOLS,			//iTools
	PLAT_TWGOOGLEPLAY,		//̨��googleplay
	PLAT_OUPENG,			//ŷ��
	PLAT_PIPANET,			//������
	PLAT_KUPAI,				//����
	PLAT_AIBEICLOUD,		//�����ƼƷ�
	PLAT_WARIOS,			//��սIOS(�й�)
	PLAT_QQTOANDROID,		//QQ��Ȩ��׿
	PLAT_QQTOIOS,			//QQ��ȨIOS
	PLAT_SINAWEIBOTOANDROID,//����΢����Ȩ��׿
	PLAT_SINAWEIBOTOIOS,	//����΢����ȨIOS
	WORLDSHIP_ANDROID_CN,	//��ս��׿(�й�)
	CHANNEL_VIVO,			//VIVO
	CHANNEL_FACEBOOK_TW,	//Facebook��½̨���
	CHANNEL_WORLDSHIP_TW,	//�ٷ���½̨���
	CHANNEL_WEIXIN_ANDROID,	//΢����Ȩ��׿
	CHANNEL_WEIXIN_IOS,		//΢����ȨIOS
	FACEBOOK_US,			//Facebook��½������
	WORLDSHIP_US,			//�ٷ���½������
	FACEBOOK_JP 	 = 60,	//Facebook��½�ձ���
	WORLDSHIP_JP 	 = 61,	//�ٷ���½�ձ���
	FACEBOOK_IOS_JP  = 63,	//Facebook��½IOS�ձ���
	WORLDSHIP_IOS_JP = 64,	//�ٷ���½IOS�ձ���
	LoveApple_IOS_YY = 65,  //��½֧��_��ƻ��_iosԽ��
	SeaHorse_IOS_YY  = 66,  //��½_����_iosԽ��
	AiSi_IOS_YY		 = 67,	//��½֧��_��˼_iosԽ��
	XY_IOS_YY		 = 68,	//��½֧��_XY_iosԽ��
	SeaHorse_AIBEI	 = 69,	//֧��_����_����
	PLAT_XUNLEI		 = 70,	//��½֧��_Ѹ��
	PLAT_PPS		 = 71,  //��½֧��_pps
	PLAT_MOBILE		 = 72,  //��½֧��_�ƶ�
	PLAT_MOBILE_ZFB	 = 73, //֧��_�ƶ�֧����
	PLAT_LOGIN_9S_ANDROID	 = 74,    //��¼_9s_��׿ 
	PLAT_PAY_9S_GPLAY = 75,     //֧��_9s_GooglePlay 
	PLAT_PAY_9S_MyCard = 76,     //֧��_9s_MyCard 
	PLAT_LOGIN_9S_IOS = 77,     //��¼_9s_IOS 
	PLAT_PAY_9S_IOS = 78,     //֧��_9s_IOS 
	PLAT_PAY_9S_WEB = 79,     //֧��_9s������web֧��
	PLAT_LOGIN_FD_ANDROID = 80,    // ��¼_�ɶ�_��׿
	PLAT_LOGIN_FD_IOS = 81,     //��¼_�ɶ�_IOS
	PLAT_PAY_FD_ANDROID = 82,     //֧��_�ɶ�_GooglePlay
	PLAT_LOGIN_9S_ANDROID2 = 83,     //��¼_9s_��Ş�ۇ�_��׿
	PLAT_PAY_9S_GPLY2 = 84,     //֧��_9s_��Ş�ۇ�_GooglePlay
	PLAT_PAY_9S_MYCARD2 = 85,  //֧��_9s_��Ş�ۇ�_MyCard
	PLAT_LOGIN_9S_IOS2 = 86,     //��¼_9s_��Ş�ۇ�_IOS
	PLAT_PAY_9S_IOS2 = 87,     //֧��_9s_��Ş�ۇ�_IOS
	PLAT_PAY_9S_WEB2 = 88,     //֧��_9s_��Ş�ۇ�_������web֧��
	PLAT_LOGIN_9S_ANDROID3 = 89,     //��¼_9s_�������Ȥ�_��׿
	PLAT_PAY_9S_GPLY_3 = 90,     //֧��_9s_�������Ȥ�_GooglePlay
	PLAT_PAY_9S_MYCARD3 = 91,     //֧��_9s_�������Ȥ�_MyCard
	PLAT_LOGIN_9S_IOS3 = 92,     //��¼_9s_�������Ȥ�_IOS
	PLAT_PAY_9S_IOS3 = 93,     //֧��_9s_�������Ȥ�_IOS
	PLAT_PAY_9S_WEB3 = 94,     //֧��_9s_�������Ȥ�_������web֧��
	PLAT_LOGIN_9S_ANDROID4 = 95,     //��¼_9s_����ۇ�_��׿
	PLAT_PAY_9S_GPLY_4 = 96,     //֧��_9s_����ۇ�_GooglePlay
	PLAT_PAY_9S_MYCARD4 = 97,     //֧��_9s_����ۇ�_MyCard
	PLAT_LOGIN_9S_IOS4 = 98,     //��¼_9s_����ۇ�_IOS
	PLAT_PAY_9S_IOS4 = 99,     //֧��_9s_����ۇ�_IOS
	PLAT_PAY_9S_WEB4 = 100,   //֧��_9s_����ۇ�_������web֧��
	PLAT_TYPE_MAX
};

enum LOCALE_TYPE
{
    LOCALE_ZH_CN    = 1,
    LOCALE_ZH_TW,//̨��
    LOCALE_EN_US,//ŷ����
    LOCALE_TR_TR,//������ʹ��
	LOCALE_EN_EN,
	LOCALE_JP_JP,//�ձ�
	LOCALE_JP_JP2,//����ʹ��
	LOCALE_RUSSIA,//����˹
	LOCALE_GERMANY,//�¹�
	LOCALE_FRANCE,//����
	LOCALE_TUR_TUR,//������
	LOCALE_POR_POR,//������
	LOCAL_ITA_ITA,//�����
	LOCAL_MID_EAST,//�ж�Ӣ�İ�
	LOCAL_MID_EAST_ARAB,//�ж���������
};

enum CHANNEL_TYPE
{
    CHANNEL_APPSTORE    = 1,
    CHANNEL_UC,
	CHANNEL_YYB,
	CHANNEL_GPLAY,
};

enum Money_Type
{
	Money_Gold	= 1,
	Money_Cash,
	Money_Point,
	Money_Oil,
	Money_GuildPoint,
	Money_Electric,
	Money_CampBattleScore,
	Money_JuniorPaper,
	Money_SeniorPaper,
    Money_Prestige,
	Money_JuniorCaptain,
	Money_SeniorCaptain,
    Money_Exploit,
    Money_RemouldMaterial,
    Money_SeikoCoin,
};

enum BattleType
{//��ͻ���ͨ����
	BATTLE_TYPE_STAGE 	 = 1,//
	BATTLE_TYPE_ADVSTAGE = 2,//
	BATTLE_TYPE_ARENA 	 = 3,//
	BATTLE_TYPE_TREASURESTAGE = 4,//
	BATTLE_TYPE_ROBBERY = 8,
	BATTLE_TYPE_GUARD = 9,
	BATTLE_TYPE_CAMPBATTLE = 10,
	BATTLE_TYPE_CENTERCAMPBATTLE = 11,
	BATTLE_TYPE_GUILDBATTLE = 13,//12��˵�ͻ��� ����������
	BATTLE_TYPE_ARMADA = 14,//��ս�޵н���
	BATTLE_TYPE_STAGETOWER = 16
};

enum DropType
{
	DROP_TYPE_NULL  = -1,
	DROP_TYPE_PROP  = 1,//����
	DROP_TYPE_PARTS,	//���
	DROP_TYPE_GOLD,		//���
	DROP_TYPE_CASH,		//��ʯ
	DROP_TYPE_POINT,	//�Ƽ���
	DROP_TYPE_PAPER,	//ͼֽ
	DROP_TYPE_PAPERPIECE,//ͼֽ��Ƭ
	DROP_TYPE_VIRTUAL,	//�������
	DROP_TYPE_OIL,		//ԭ��
	DROP_TYPE_PARTPIECE,//�����Ƭ
	DROP_TYPE_SOUL,		//����
	DROP_TYPE_CAMPBATTLESCORE, //����
    DROP_TYPE_TOKEN,        //����
	DROP_TYPE_MILITARYRANKHONOUR, //����
	DROP_TYPE_FORMATION,//����
	DROP_TYPE_CAPTAIN,//����
	DROP_TYPE_CAPTAINPIECE,//������Ƭ
	DROP_TYPE_JUNIORCAPTAIN,//��ͨ����
	DROP_TYPE_SENIORCAPTAIN,//�߼�����
    DROP_TYPE_PRESTIGE = 20,    //����
	DROP_TYPE_SOULPIECE = 21,	//ѫ����Ƭ
	DROP_TYPE_EXPLOIT	= 22,	//��ѫ��
	DROP_TYPE_SEIKO		= 23,	//����
	DROP_TYPE_SEIKOPIECE	= 24,	//������Ƭ
	DROP_TYPE_SEIKOCOIN		= 25,	//������
	DROP_TYPE_SEIKOPOINT	= 26,	//������
	DROP_TYPE_GUILDPOINT	= 27,	
	DROP_TYPE_MAX,
};

enum ShipTokenType
{
    TOKEN_TYPE_NULL  = 0,
    TOKEN_TYPE_CHRITMAS_CANN,    //�Ʊ�
    TOKEN_TYPE_CHRITMAS_RING,    //��ָ
    TOKEN_TYPE_CHRITMAS_HEART,    //����֮��
    TOKEN_TYPE_CHRITMAS_CANVAS,    //�ͻ�
    TOKEN_TYPE_CHRITMAS_CROWN,    //�ʹ�
    TOKEN_TYPE_VALENTINE_ROSE,         //���˽ڻ��õ��
//    TOKEN_TYPE_CHALLENGE_PRESTIGE,  //��ս������
    TOKEN_TYPE_MAX,
};

enum ChristmasLotteryError
{
    CHRISTMAS_LOTTERY_INVAILD = -1,
    CHRISTMAS_LOTTERY_SUCCESS,
    CHRISTMAS_LOTTERY_NOT_CARSH,
    CHRISTMAS_LOTTERY_NOT_BEGIN,
    CHRISTMAS_LOTTERY_MAX,
};

enum ChristmasMineralError
{
    CHRISTMAS_MINERAL_INVAILD = -1,
    CHRISTMAS_MINERAL_SUCCESS,
    CHRISTMAS_MINERAL_NOT_CROWN,
    CHRISTMAS_MINERAL_NOT_CANVAS,
    CHRISTMAS_MINERAL_NOT_RING,
    CHRISTMAS_MINERAL_NOT_CANN,
    CHRISTMAS_MINERAL_NOT_HEART,
    CHRISTMAS_MINERAL_NOT_BEGIN,
    CHRISTMAS_MINERAL_TAKEN,
	CHRISTMAS_MINERAL_ERR_NUMBER,	//���ٶһ�һ��
    CHRISTMAS_MINERAL_ERROR_MAX,
};

enum VirtualPropType
{
	VIRTUALPROP_TYPE_NULL  = -1,
	VIRTUALPROP_TYPE_GOLD  = 1,
	VIRTUALPROP_TYPE_CASH,
	VIRTUALPROP_TYPE_POINT,
	VIRTUALPROP_TYPE_JUNIORPAPER,
	VIRTUALPROP_TYPE_SENIORPAPER,
	VIRTUALPROP_TYPE_ARENACOUNT,
	VIRTUALPROP_TYPE_ELECTRIC,
	VIRTUALPROP_TYPE_MILITARYHON,//��������
};

enum CHAT_TYPE
{
	CHAT_TYPE_WORLD,
	CHAT_TYPE_GUILD,
	CHAT_TYPE_PRIVATE,
	CHAT_TYPE_CAMP,
};

//Player����Ϸ����Դ�Ĳ���(���飬��Ǯ��)
enum PLAYER_ADD_EXP_OPTYPE
{
	EXP_AdvStageMgr_Attack,
	EXP_StageMgr_Attack,
	EXP_TreasureStageMgr_Attack,
	EXP_GM_Add,
};
enum PLAYER_ADD_MONEY_OPTYPE
{
	GM_AddMoney_Add = 0,
	Player_AddDropData_Add,
	PropMgr_sellProp_Add,
	User_setRole_Add,
	PropMgr_useVirtualProp_Add,
	AccBind_Add,
	Recharge_Add,
	First_Recharge_Add,
	Activity_Recharge_Add,
	Plyaer_MontCard_Add,
	AdvStageMgr_Attack_Add,
	BuildMgr_supply_Add,
	BuildMgr_cashSupply_Add,
	PartsMgr_DecomposeParts_Add,
	QuizMgr_checkFinish_Add,
	ShipMgr_RetireShip_Add,
	StageMgr_Attack_Add,
	TreasureStageMgr_Attack_Add,
	PartsMgr_sellProp_Add,
	Player_UpdateOil_Add,
	BuildMgr_buyOil_Add,
	ActivityMgr_Oil_Add,
	Player_LevelUp_Add,
	GuildMgr_Donate_Add,
	Player_UpdateElectric_Add,
	Activity_GROWUP_REWARD,
	FriendMgr_DrawElectric_Add,
	GuardMgr_StartBattle_Add,
	CampBattle_Award_Add,
	PaperMgr_SalePaper_Add,
	GM_Add,
	MilitaryRank_DailyReward_Add,
	Arena_MilitaryRankHonour_Add,
	ArenaMgr_UpdateScore_Add,
    LuckyCatMgr_Add,
	SpyPaer_EscapeBet,
	ShopBuy_EscapeBet,
	InviterReward_Add,
    BonusFly_Add,
	LoginPoker_Add,
	Reduction_Parts_Add,
	LuckyBox_PointExchange_Add,
	UserComBack_Reward_Add,
	Activity_SignIn_Add,
	Activity_Vip_Add,
	Activity_Level_Add,
	Activity_StartServer_Add,
	Activity_FirstRecharge_Add,
	Activity_ConsumeExchange_Add,
	Activity_RechargeReward_Add,
	Activity_LuckyWheel_Add,
	Activity_MisteryShop_Add,
	Activity_LuckyGoddnessFree_Add,
	Activity_LuckyGoddnessCharge_Add,
	Activity_LuckyGoddnessReward_Add,
	AwardCenter_GetAward_Add,
	GhostShip_Explore_Add,
	LimitShip_Add,
	LimitFight_Add,
	Christmas_Lottery_Add,
	Christmas_ScoreExchange_Add,
	Christmas_MineralExchange_Add,
	RechargeSeven_Award_Add,
	Robbery_Attack_Add,
	Prop_UseProp_Add,
	EscapeBet_Add,
	MonthSign_DistributeReward_Add,
	MonthSign_RedistributeReward_Add,
	Shop_Buy_Add,
	InviteUser_Add,
    Valentine_Add,
    OnearmedBandkit_Add,
	Richest_Award_Add,
	CampBattle_Add,
	CenterCampBattle_Add,
	Compensate_Add,
	HolidayGift_Add,
	IosLevel_Add,
	FirstPay_Recharge_Add,	
	FiveStarEvaluate_Add,
	IOSDownLoad_Add,
	IOSShare_Add,
	SubPackage_Add,
	OnearmBandit_Add,
	DayDayGift_Add = 84,
	BINDMAIL_Add = 85,//������
	OnearmBandit_60_Add,
	GM_Compensate,
	Activity_HandleRegist2DayPaper_Add,
    Challenge_Worship_Add,
    Challenge_Reward,
	Captain_RetireAdd,
	CaptainRecruit_Add,
	LIMITCAPTAIN_ADD,
	LIMITCAPTAIN_SOCRE_ADD,
	LIMITCAPTAIN_RANK_ADD,
	CAPTAINSOUL_GM_ADD,
	CAPTAINSOUL_CAPTAINRETIRE_ADD,//���
	SuperCaptain_Gift_ADD,
	LIMITSHIP_BUY_ADD,
	BuyLimitCaptain_Add,
	BuyGHostShip_Add,
    Decompose_Exploit_Add,
    Restore_Exploit_Add,
	GuildBattle_PersonalRank,
	GuildBattle_GuildRank,
	ArmadaMgr_Attack_Add,
	GoldIsland_Add,
	Armada_Award_Add,
	LimitTimeShop_Add,
	EveryDay_Task_Reward_Add,
	PlotCopy_Add,
	Stage_AddTalent,
	Guard_AddTalent,
	Military_AddTalent,
	INITSYS_ADDTalent,
	GM_ADDTalent,
	EveryDay_Task_ScoreReward_Add,
	Salute_ADD,
	Valentine_Award_Add,
	Valentine_Socre_Add,
	GlobalArena_UpdateTacBack,
	GlobalArena_EncourageBack,
	GlobalArena_Prostrate,
	GoldLeader_Rank_Add,
	GoldLeader_Gold_Add,
	GoldLeader_Explore_Add,
	Reduction_Seiko_Add,
	SeikoMgr_DecomposeSeiko_Add,
	StageTowerMgr_Attack_Add,
	Activity_SeikoShop_Add,
	AwardCenter_Recharge_Gift,
	TuanGou_BuyItem_Opt,
	TuanGou_GiftToUser,		
	TuanGou_JoinCashBack,
	SeiKo_Exchange_Add,		//�����һ�����
	NewWelfare_Add,   // ���ָ���
	RechargeBackGift_Add,	//��ֵ����λ������funcswitch.txt��
	GlobalGuildBattle_RankAdd,
	GlobalGuildPVP_Prostrate,
	WeChatShare_Add, //΢�ŷ���
};

enum PLAYER_COST_MONEY_OPTYPE
{
	Player_CostMoney_Cost,
	BuildMgr_cashSupply_Cost,
	BuildMgr_buyOil_Cost,
	PaperMgr_canSpyPaper_Cost,
	PartsMgr_DecomposeParts_Cost,
	ShipMgr_CanTrain_Cost,
	ShopMgr_BuyShop_Cost,
	StageMgr_resetStageCount_Cost,
	GuildMgr_Donate_Cost,
	GuildMgr_CreateGuild_Cost,
	BuildMgr_levelUp_Cost,
	PartsMgr_UpgradeParts_Cost,
	ScienceMgr_CanLevelUp_Cost,
	ShipMgr_CanCreateShip_Cost,
	ShipMgr_RemouldShip_Cost,
	ShipMgr_UpgradeShip_Cost,
	PartsMgr_RemouldParts_Cost,
	AdvStageMgr_Attack_Cost,
	GuardMgr_EnterGuard_Cost,
	StageMgr_canAttack_Cost,
	TreasureStageMgr_Attack_Cost,
	GuildMgr_ShopBuy_Cost,
	GuildMgr_SetMedal_Cost,
	ActivityMgr_GrowUpBuy_Cost,
	PartsMgr_CheckCanRobPartPiece_Cost,
	MedalMgr_GetMedal_Cost,
	GHOSTSHIP_COST,
	PaperMgr_SpyLimitShip_Cost,
	GuardMgr_BuyChance_Cost,
	GuardMgr_BuyResetCount_Cost,
	GuardMgr_BuySweepCD_Cost,
	SoulMgr_RandSoul_Cost,
	SoulMgr_ChooseScene_Cost,
	SoulMgr_RandAdvSoul_Cost,
	ShipMgr_Retire_Cost,
	CampBattleMgr_ClearCD_Cost,
	ActivityMgr_MisteryShop_Cost,
	PaperMgr_ChargePaperByWanNeng_Cost,
	ActivityMgr_MisteryShopRefresh_Cost,
	LUCKYGODDESS_COST,
	MilitaryRank_Upgrad_Cost,
    CHRISTMAS_LOTTERY,
    LuckyCatMgr_Cost,
	Reduction_Parts_Cost,
    Valentine_Cost,
    OnearmBandit_Cost,
	ReName_Role_Cost,
	ReName_Ship_Cost,
	ShipAdvanced_Cost,
	CampBattle_Detect_Cost,
	CampBattle_Blood_Cost,
	CenterCampBattle_Detect_Cost,
	CenterCampBattle_Blood_Cost,
	ShipFormation_LevelUP_Cost,
    Challenge_Worship_Cost,
    Challenge_Buy_Cost,
    Challenge_Refresh_Cost,
    Challenge_Action_Cost,
    Challenge_Revenge_Cost,
    Challenge_Worship_Duluxe_Cost,    //=60
	UpgradeCaptain_Cost,
	RemouldCaptain_Cost,
	CaptainRetire_cost,
	CaptainRecruitJunior_Cost,
	CaptainRecruitSenior_Cost,
	SpyLimitCaptain_Cost,
	UPGRADECAPTAIN_COST,
	EXCHANGECAPTAIN_COST,
	LIMITSHIP_BUY_COST,
    Promote_Exploit_Cost,
    Restore_Cash_Cost,
	GuildBattle_ClearCD_Cost,
	GuildBattle_Blood_Cost,
	Change_Role_Cost,
	OccupyIsland_Oil_Cost,
	GoldIsland_DelayTime_Cash_Cost,
	Challenge_Armada_Cost,
	PlotCopy_Roll_Cost,
	PlotCopy_SkipBattle_Cost,
	Talent_Activate_Cost,
	Talent_Upgrade_cost,
	GlobalArena_UpdateTacCost,
	GlobalArena_EncourageCost,
	GlobalArena_ProstrateCost,
	GlodLeader_ExploeCost,
	SeikoMgr_UpgradeSeiko_Cost,
	SeikoMgr_RemouldSeiko_Cost,
	SeikoMgr_Forge_Cost,
	Reduction_Seiko_Cost,
	Undo_Recharge_Cost,
	StageTowerMgr_BuyChallengeTimes_Cost,
	StageTowerMgr_Puschase_Cost,
	ActivityMgr_SeikoShopRefresh_Cost,
	ActivityMgr_SeikoShop_Cost,
	GM_Cost,
	Player_RenameGuild_Cost,
	ChatMgr_Chat_Cost,
	JoinTuanGou_Cost,			//�Ź�����
	JoinTuanGou_BuyItemCost,	//�Ź�����
	GlobalGuildBattleUpdateCost,
	GlobalGuildBattleCheerCost,
	PROMOTEREDCAPTAINCOST,		//����콢������
};

enum PLAYER_ADD_PROP_OPTYPE
{
	PROP_ARENA_ADD,			//������������Ʒ
	PROP_MAIL_ADD,			//�ʼ������Ʒ
	PROP_DROP_ADD,			//��������Ʒ
	PROP_RETIRESHIP_ADD,	//��ֻ���ۻ����Ʒ
	PROP_SHOPBUY_ADD,		//�̵깺����Ʒ
	PROP_GM_ADD,			//GM�����Ʒ
	PROP_ACTIVITY_SIGNIN_ADD,	//ǩ���
	PROP_ACTIVITY_VIP_ADD,	//VIP����
	PROP_ACTIVITY_LEVEL_ADD,//�ȼ�����
	PROP_INITDATA_ADD,		//��ʼ����
	PROP_GUILDSHOP_ADD,		//�����̵깺��
	PROP_ACTIVITY_SEVENDAYS_ADD,  //ʮһ������
	PROP_ACTIVITY_COST_REWARD_ADD,//���Ѻ���
	PROP_FREE_RECRUIT_ADD,//�����ļ
	PROP_CHARGE_RECRUIT_ADD,//������ļ
	PROP_BUYSPYITEM,
	PROP_FREE_LIMITCAPTAIN_ADD,
	PROP_CHARGE_LIMITCAPTAIN_ADD,
	PROP_FREE_GHOSTSHIP_ADD,
	PROP_CHARGE_GHOSTSHIP_ADD,
	PROP_LIMITSHIP_FREE_ADD,
	PROP_LIMITSHIP_CHARGE_ADD,
	PROP_GOLDLEADER_FREE_ADD,
	PROP_GOLDLEADER_CHARGE_ADD,
	PROP_GOLDLEADER_EXPLORE_ADD,
	PROP_LUCKYGOD_FREE_ADD, 
	PROP_LUCKYGOD_CHARGE_ADD,
	PROP_SEIKO_REDUCTION_ADD,
	PROP_SEIKO_DECOMPOSE_ADD,
};

enum PLAYER_COST_PROP_OPTYPE
{
	PROP_SELL_COST,			//������Ʒ
	PROP_USE_COST,			//ʹ����Ʒ
	PROP_SPYUSE_COST,		//��ǲ���������Ʒ
	PROP_UPGRADESCIENCE_COST,//�Ƽ�����������Ʒ
	PROP_TRAINSHIP_COST,	//ѵ����ֻ������Ʒ
	PROP_UPGRADESHIPSKILL_COST,	//������ֻ����������Ʒ
	PROP_RETIREHIP_COST,	//��ֻ����������Ʒ
	PROP_RENAMESHIP_COST,	//��������ֻ������Ʒ
	PROP_GM_COST,			//GMɾ����Ʒ
	PROP_STAGE_SWEEP_COST,	//�ؿ�ɨ��
	PROP_RENAMEROLE_COST,	//��������ɫ������Ʒ
	PROP_SOULCHOOSESCENE_COST,//ѡ��ս�곡��
	PROP_MISTERYSHOP_REFRESH_COST,	//�����̵�ˢ��
	PROP_MILITARYRANK_ORDER_COST,//������������
	PROP_USEPIECEGIFT_COST,//ʹ����Ƭ�������
	PROP_SHIPADVANCED_COST,		//ս����������
	PROP_SHIPFORMATIONLEVELUP_COST,//��������
    PROP_CHALLENGE_COST,
	PROP_RECRUITCAPTIAN_COST,//��ļ��������
	PROP_USESUPERCAPTAINGIFT_COST,//����������Ƭ��
	PROP_LIMITCAPTAIN_COST,
	PROP_GHOSTSHIP_COST,
	PROP_LIMITSHIPPROP_COST,//
	PROP_CHANGEROLE_COST,//ʹ��ͷ�������
	PROP_ACTIVATEORUPDATETALENT,
	PROP_GOLDLEADER_EXPLOE_COST,
	PROP_LUCKYGOD_FREE_COST, 
	PROP_LUCKYGOD_CHARGE_COST,
	PROP_SEIKO_UPGRADE_COST,
	PROP_SEIKO_FORGE_COST, //����ϴ������
	PROP_SEIKOSHOP_REFRESH_COST,	//�����̵�ˢ��
	PROP_RENAME_GUILD_COST,
	PROP_SOULGIFT_COST,
	PROP_PROMOTEREDCAPTAIN_COST,
};

enum PLAYER_ADD_PARTS_OPTYPE
{
	PARTS_DROP_ADD,			//�������
	PARTS_GM_ADD,			//GM������
	PARTS_INITDATA_ADD,		//��ʼ����
	PARTS_COMPOSE_ADD,
	PARTS_REDUCTION_ADD,
};

enum PLAYER_COST_PARTS_OPTYPE
{
	PARTS_DECOMPOSE_COST,	//�ֽ����
	PARTS_GM_COST,			//GMɾ�����
	PARTS_REDUCTION_COST,//��ԭ
};

enum PLAYER_ADD_PARTPIECE_OPTYPE
{
	PARTPIECE_DROP_ADD,		//����
	PARTPIECE_GM_ADD,
	PARTPIECE_GUIDE_ADD,
};

enum PLAYER_COST_PARTPIECE_OPTYPE
{
	PARTPIECE_DELETEALL_COST, //
	PARTPIECE_GM_COST,
	PARTPIECE_ROBBED_COST,
};

enum PLAYER_ADD_PAPER_OPTYPE
{
	PAPER_SPY_ADD,				//��ǲ������ͼֽ
	PAPER_CHARGE_ADD,			//�������ͼֽ
	PAPER_CHARGE_WANNENG_ADD,	//ʹ������ͼֽ�������ͼֽ
	PAPER_DROP_ADD,				//������ͼֽ
	PAPER_GM_ADD,				//GM���ͼֽ
	PAPER_INITDATA_ADD,			//��ʼ����
	PAPER_RECHARGE_REWARD_ADD,	//��ֵ��ͼֽ
};

enum PLAYER_COST_PAPER_OPTYPE
{
	PAPER_SELL_COST,			//����ͼֽ
	PAPER_CREATESHIP_COST,		//�촬����ͼֽ
	PAPER_REMOULDSHIP_COST,		//��������ͼֽ
	PAPER_GM_COST,				//GMɾ��ͼֽ
};

enum PLAYER_ADD_PAPERPIECE_OPTYPE
{
	PAPERPIECE_DROP_ADD,		//������ͼֽ��Ƭ
	PAPERPIECE_GM_ADD,			//GM���ͼֽ��Ƭ
};

enum PLAYER_COST_PAPERPIECE_OPTYPE
{
	PAPERPIECE_CHARGE_COST,		//��Ƭ�һ���ͼֽ
	PAPERPIECE_GM_COST,			//GMɾ��ͼֽ��Ƭ
};

enum PLAYER_ADD_SHIP_OPTYPE
{
	SHIP_CREATE_ADD,			//������ֻ
	SHIP_INIT_ADD,				//��ʼ�������ֵʱ�͵���ʼ��ֻ
	SHIP_GM_ADD,				//GM��Ӵ�ֻ
};

enum PLAYER_COST_SHIP_OPTYPE
{
	SHIP_RETIRE_COST,			//��ֻ����
	SHIP_GM_COST,				//GMɾ����ֻ
};

enum PLAYER_ADD_SOUL_OPTYPE
{
	SOUL_BUYSCENE_ADD,			//����ս�곡��
	SOULMGR_RANDSOUL_ADD,		//����ս��
	SOUL_GM_ADD,				//GM���ս��
	SOUL_DROP_ADD,				//����ս��
	SOULMGR_RAND50SOUL_ADD,		//����50��ս��
	SOULMGR_RAND50ADVSOUL_ADD,	//�߼�����50��ս��
    SOULMGR_DECOMPOSE_ADD,   //�ֽ�
    SOULMGR_RESOTRE_ADD,  //��ԭ
	SOUL_COMPOSEPIECE_ADD,
};

enum PLAYER_COST_SOUL_OPTYPE
{
	SOUL_EAT_COST,				//ս������
	SOUL_GM_COST,				//GMɾ��ս��
    SOUL_DECOMPOSE,        //�ֽ�
};

enum PLAYER_ADD_MAIL_OPTYPE
{
	MAIL_QUIZAWARD_ADD,
	MAIL_GM_ADD,
	MAIL_LOGINGIFT_ADD,
	MAIL_ARENA_ADD,
	MAIL_FUNCSWITCH_ADD,
	MAIL_GUILD_DISMISS_ADD,
	MAIL_GUILD_EXPEL_ADD,
	MAIL_ROBBERY_ADD,
	MAIL_RICHESTAWARD_ADD,
	MAIL_GHOSTSHIP_ADD,
	MAIL_RENAME_ADD,
	MAIL_LIMITSHIP_ADD,
	MAIL_LIMITSHIP_60AWRAD_ADD,
	MAIL_SETROLE_ADD,
	MAIL_PLAYER_SEND_ADD,
	MAIL_GUILD_AUTOCHANGECHIEF,
	MAIL_GOLDISLAND_INVITEHELP,
	MAIL_GOLDISLAND_APPLYHELP,
	MAIL_GOLDISLAND_BEATED,
	MAIL_VIP12_ADD,
	MAIL_VALENTINE_ADD,
	MAIL_LIMITCAPTION_ADD,
	MAIL_ONEARMEBANDIT_ADD,
	MAIL_GOLDISLAND_OCCUPY,	//��������ռ
};

enum PLAYER_DEL_MAIL_OPTYPE
{
	MAIL_GM_DEL,
	MAIL_POPFRONTMAIL_DEL,
};

enum SHOP_CLASS
{
	SHOP_CLASS_NORMAL = 1,
	SHOP_CLASS_VIP,
	SHOP_CLASS_GUILD,
	SHOP_CLASS_CAMPBATTLE,
};

enum PLAYER_ADD_JUNIORSTAR_OPTYPE
{
	StageMgr_addStageCount_AddJuniorStar,
	GM_AddJuniorStar,
};

enum PLAYER_COST_JUNIORSTAR_OPTYPE
{
	MedalMgr_GetMedal_CostJuniorStar,
};

enum PLAYER_ADD_SENIORSTAR_OPTYPE
{
	AdvStageMgr_addStageCount_AddSeniorStar,
	GM_AddSeniorStar,
};

enum PLAYER_COST_SENIORSTAR_OPTYPE
{
	MedalMgr_GetMedal_CostSeniorStar,
};

enum CountryID
{
	COUNTRY_US = 1,
	COUNTRY_DE,
	COUNTRY_UK,
	COUNTRY_JP,
	COUNTRY_FR,
	COUNTRY_IT,
	COUNTRY_SU,
	COUNTRY_MAX,
};

//�Ƽ�����ÿ��������������ֵ
#define SCIENCE_IRON_ADD 30
#define SCIENCE_AMMO_ADD 10
#define SCIENCE_AIR_ADD 10
#define SCIENCE_MACHINE_ADD 4
#define SCIENCE_ELEC_ADD 4

//��ֵ�ID
#define RECHARGE_FUNCSWITCH_ID (-1)

//�㲥����
#define BROADCAST_TYPE_SYSTEM 1		//��̨����
#define BROADCAST_TYPE_TRIGGER 2	//����

//��ʱ��ս����
#define LIMIT_FIGHT_DAY_COUNT 7		
//��ʱ��ս�콱����
#define LIMIT_FIGHT_REWARD_DAY_COUNT 9

//��Ӫ����
#define CAMP_TYPE_MAX 3

#define  MILITARYRANK_TYPE_BASE 10

enum CAMP_TYPE
{
	CAMP_TYPE_NONE,
	CAMP_TYPE_JUSTICE,
	CAMP_TYPE_PREDATOR,
	CAMP_TYPE_HONOUR,
};

enum LUCKY_BOX_TYPE
{
	LUCKY_BOX_TYPE_FREE = 1,//���
	LUCKY_BOX_TYPE_CHARGE = 2,//����
};

typedef enum
{
    LUCKY_GODDNESS_ERROR_INVAILED = -1,
    LUCKY_GODDNESS_ERROR_COMMON_SUCCESS,
    LUCKY_GODDNESS_ERROR_NOT_CASH,
    LUCKY_GODDNESS_ERROR_NOT_OPEN,
    LUCKY_GODDNESS_ERROR_UNKNOW,
    LUCKY_GODDNESS_ERROR_MAX
} LuckyGoddnessError;

typedef enum
{
    LUCKY_GODDNESS_TYPE_INVAILED = -1,
    LUCKY_GODDNESS_TYPE_COMMON, //��ͨ
    LUCKY_GODDNESS_TYPE_DELUXE, //ʮ����
    LUCKY_GODDNESS_TYPE_MAX,
} LuckyGoddnessType;

enum PLAYER_ADD_CAPTAIN_OPTYPE
{
	CAPTAIN_GM_Add = 0,
	CAPTAIN_RECRUIT_ADD = 1,//��ļ���
	CAPTAIN_COMPOSE_ADD = 2,
	CAPTAIN_DROP_ADD = 3,
	CAPTAIN_EXCHANGE_ADD = 4,
};

enum PLAYER_COST_CAPTAIN_OPTYPE
{
	CAPTAIN_GM_DEL = 1,
	CAPTAIN_FIRE_DEL = 2,//���
};
enum PLAYER_ADD_CAPTAINPIECE_OPTYPE
{
	CAPTAINPIECE_GM_Add = 0,
	CAPTAINPIECE_AUTOTURN_ADD = 1,//��ȡͬ������ת��
	CAPTAINPIECE_DROP_ADD,
};

enum PLAYER_COST_CAPTAINPIECE_OPTYPE
{
	CAPTAINPIECE_GM_COST = 0,
	CAPTAINPROMOTE_COST = 1,//��������
	CAPTAIN_COMPOSE,		//�ϳɽ���
	CAPTAIN_RETIRE,			//��ͽ���ɾ�������Ƭ
};

enum PLAYER_ADD_SOULPIECE_OPTYPE
{
	SOULPIECE_GM_ADD = 0,
	SOULPIECE_DROP_ADD,
};

enum PLAYER_COST_SOULPIECE_OPTYPE
{
	SOULPIECE_GM_COST = 0,
	SOULPIECE_COMPOSE_COST,
	SOULPIECE_BEROB_COST,
};

enum PLAYER_ADD_SEIKO_OPTYPE
{
	SEIKO_DROP_ADD,			//�������
	SEIKO_GM_ADD,			//GM������
	SEIKO_INITDATA_ADD,		//��ʼ����
	SEIKO_COMPOSE_ADD,
	SEIKO_REDUCTION_ADD,
	SEIKO_DECOMPOSE_ADD,
};

enum PLAYER_COST_SEIKO_OPTYPE
{
	SEIKO_DECOMPOSE_COST,	//�ֽ����
	SEIKO_GM_COST,			//GMɾ�����
	SEIKO_REDUCTION_COST,	//��ԭ
	SEIKO_REMOULD_COST,	//����
};

enum PLAYER_ADD_SEIKOPIECE_OPTYPE
{
	SEIKOPIECE_DROP_ADD,	//����
	SEIKOPIECE_GM_ADD,
};

enum PLAYER_COST_SEIKOPIECE_OPTYPE
{
	SEIKOPIECE_COMPOSE_COST, //
	SEIKOPIECE_GM_COST,
};

//���winsock��ͻ
#ifndef WIN32_LEAN_AND_MEAN
	#define WIN32_LEAN_AND_MEAN
#endif

#ifdef _WIN32
	#pragma warning(disable:4996)
#endif

#ifdef _WIN32
#define usleep Sleep
#endif

#endif
