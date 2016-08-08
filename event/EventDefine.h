#ifndef _EVENTDEFINE_H_
#define _EVENTDEFINE_H_

#pragma once

#include "../gamed/event/MessageDef.h"

#ifndef EVENT_BASE
#define EVENT_BASE 0

enum WEB_HTTP_REQUEST_TYPE
{
	WEBREQ_Unknow = 0,
	WEBREQ_CountryRank,
	WEBREQ_ChickenRank,
	WEBREQ_FamousPersonHall,
	WEBREQ_TomorrowStar = 4,
	WEBREQ_TomorrowRank = 5,
	WEBREQ_ServerStat = 6,
	WEBREQ_Cathectic = 7,
	WEBREQ_SiteCreditQZone = 8,
	WEBREQ_SiteCreditQHall = 9,
};

enum EVENT_DEFINE
{
	EVENT_UPDATE_WORKING_STATUS	= EVENT_BASE + 1,
	EVENT_USER_LOGIN,
	EVENT_USER_LOGOUT,
	EVENT_USER_AUTH,
	EVENT_TIMER,
	EVENT_SEND_REMOTE_USER,
	EVENT_GWG_FRIEND_REQUEST,
	EVETN_GWG_GAMESTAR_REQUEST,
	EVENT_UPDATE_FRIEND_CACHE,
	EVENT_UPDATE_STARINFO,	
	EVENT_GWG_CHECK_ATTACK,
	EVENT_STAR_STATE,	
	EVENT_USER_PRELOGIN,	//�û�Ԥ����
	EVENT_USER_BRAODCAST,
	EVENT_USER_HOURMETER_BRAODCAST,
	EVENT_USER_HOURMETER_BRAODCAST_START,
	EVENT_UPDATE_BROADCAST_ROBOT,
	EVENT_WEB_GETREGION,
	EVENT_UPDATE_PLATINFO,
	EVENT_TIMER_5_TICK,		//�������Ϣ
	EVENT_LUCKY_NUM,		//��������

	EVENT_GF_FIGHT_REQUEST_PVE,		//PVE����ս��
	EVETN_G2G_GAMEHTTP_REQUEST,		//HTTP����
	EVENT_GF_FIGHT_REQUEST_ARENA,	//����������ս��
	EVENT_COUNTRY_LITE,				//�������� 
	EVENT_COUNTRY_USERLIST,			//��������б�
	EVENT_LOADUSER_4LITE,			//�������lite����
	EVENT_GF_COUNTRY_FIGHT,			//��ս����
	EVENT_COUNTRY_FORCECHGCITY,		//ǿ���л�����
	EVENT_COUNTRY_CHECKCAPTURECITY,	//�жϳ����Ƿ񱻹�ռ
	EVENT_SENDCOUNTRY_REPORT,		//���͹���ս��
	EVENT_UPDATE_COUNTRY_USER,		//����ҷ��������������Ϣ
	EVENT_COSTGIFT_INVITE_FRD,		//��������plat��������
	EVENT_ARENA_USERLIST,			//����������б�
	EVENT_INVITED_FRD_LV_GIFT,		//������ѵȼ�����
	EVENT_CALLBACKFRRD_GIFT,
	EVENT_WEB_QPOINT_SHOP,
	EVENT_REPAIR_BASE,
	EVENT_PVE_RECORD_REQUEST,		//�鿴PVEս������
	EVENT_ARENA_RECORD_REQUEST,		//�鿴������ս������
	EVENT_COUNTRY_BLOODBTL_INFO,	//Ѫս��Ϣ 
	EVENT_COUNTRY_TIMER,			//���Ҽ�ʱ��
	EVENT_COUNTRY_BLOODBTL_BALLANCE,//Ѫս����
	EVENT_COUNTRY_BLOODBTL_OVER,	//Ѫս����
	EVENT_COUNTRY_BLOODBTL_REWARD,	//Ѫսʤ��������
	EVENT_COUNTRY_BLOODBTL_LAUNCHREWARD,//Ѫս������ʤ������
	EVENT_WEB_QPOINT_SHOP_COUNT,

	EVENT_WORLDARENA_RECORD_REQUEST,	//�鿴���羺����ս������
	EVENT_GF_FIGHT_REQUEST_WORLDARENA,	//���羺��������ս��
	EVENT_WORLDARENA_USERLIST,	//���羺��������б�
	EVENT_UPDATE_COUNTRY_WORLDARENA,	//���¾�����
	EVENT_GUILD_USERLIST,	//��������б�
	EVENT_GUILD_BELEADER,	//���Ὣ���Ϊ�᳤
	EVENT_GUILD_STAT,		//����ͳ��
	EVENT_OFFICER_USERLIST,	//��Ա�û���Ϣ�б�
	EVENT_OFFICER_RIGHT_USE_INFO,	//��Աʹ��Ȩ����Ϣ
	EVENT_OFFICER_RIGHT_CITY_ALL,	//���г��еĹ�Ա��Ϣ
	EVENT_COUNTRY_USER_LITE,				//�����û���Ϣ�仯


	EVENT_WEB_ADDICTION, //��������Ϣ
	EVENT_FRIEND_GIFT,

	EVENT_GUILDBTL_CACU,	//����ս����
	EVENT_GUILDBTL_SEEREPORT,	//��ս
	EVENT_COUNTRY_BROADCAST,	//���ҷ��͵Ĺ㲥

	EVENT_WEB_CALL,

	EVENT_COUNTRY_BLOODBTL_LOSE,	//Ѫսʧ�ܣ��߻��ϼ�
	EVENT_COUNTRY_UPDATEUSERNAMEDATA,//����������ֵ�����

	EVENT_WEB_QQTASK,	//������ʾ
	EVENT_REGION_TIMER,			//ȫ����������ʱ��
	EVENT_REGIONARENA_RECORD_REQUEST,	//�鿴����������ս������
	EVENT_REGIONARENA_USERLIST,	        //��������������б�
	EVENT_GF_FIGHT_REQUEST_REGIONARENA,	//��������������ս��
	EVENT_REGION_USER_LITE,				//�����û���Ϣ

	EVENT_WEB_ASKACROSS,	//�����ƹ�ѯ��

	EVENT_GF_FIGHT_BATTLE_PVE,		//Battle����ս��

	EVENT_INVITED_FRD_LV_GIFT_RECORD,	//������ѵȼ����������¼

    EVENT_WORLDCUP_BET,                 //���籭����


	//�����ս���
	EVENT_REGION_COUNTRY_LITE,				//�������� 
	EVENT_REGION_COUNTRY_USERLIST,			//��������б�
	EVENT_REGION_GF_COUNTRY_FIGHT,			//��ս����
	EVENT_REGION_COUNTRY_FORCECHGCITY,		//ǿ���л�����
	EVENT_REGION_COUNTRY_CHECKCAPTURECITY,	//�жϳ����Ƿ񱻹�ռ
	EVENT_REGION_SENDCOUNTRY_REPORT,		//���͹���ս��
	EVENT_REGION_UPDATE_COUNTRY_USER,		//����ҷ��������������Ϣ
	EVENT_REGION_COUNTRY_USER_LITE,			//�����û���Ϣ�仯

	EVENT_REGIONCOUNTRY_TIMER,			//ȫ�������ս��ʱ��
	EVENT_REGION_COUNTRY_FIGHT_RESULT,	//�����ս���

    EVENT_OPENSNS_GIFT,                 //����ƽ̨���

    EVENT_VALENTINES_DAY_GIFT,          //���˽�����

	EVENT_HEROARENA_RECORD_REQUEST,	    //�鿴Ӣ�۾�����ս������
	EVENT_GF_FIGHT_REQUEST_HEROARENA,	//Ӣ�۾���������ս��
	EVENT_HEROARENA_USERLIST,	        //Ӣ�۾���������б�

    EVENT_RENT_WEAPONCOMPONENT,         //�����������
	EVENT_GVGBTL_CACU,	//GVG����
	EVENT_GVGBTL_SEEREPORT,	//GVG��ս

	EVENT_FIGHT_TIMER,			//ս����������ʱ��

	EVENT_GVG_STAT,		//GVGͳ��

	EVENT_WPCRANK,		//��������̽������
	EVENT_UPDATE_COUNTRY_WPCRANK,		//����ҷ��������������Ϣ

	EVENT_GET_IDENT_INFO,//web������֤��Ϣ
	EVENT_PUT_IDENT_INFO,//web������֤�ɹ�

	EVENT_GUILD_ACCUM_CONTRIBUTE,//һ���ڹ���ֵ��ߵ�
	//���а������
	EVENT_RANK_TIMER,			//���Ҽ�ʱ��
	EVENT_RANK_ZHANGONG,		//ս�����а�
	EVENT_RANK_GETLASTDAY_ZHANGONG,//

	EVENT_COUNTRYCHAT_BROAD,	//��ս����,�㲥һ��

    EVNT_REDENVELOPE_RANK,				//������а�

    EVENT_BOSSBTL_LITE,				//BOSSսս����¼

	EVENT_HALL_QUERY_USER_INFO,			//idip������ѯ�û���Ϣ
	EVENT_HALL_QUERY_USER_CREDIT,		//idip��ѯ�û���ֵ�ܶ�
	EVENT_HALL_QUERY_USER_COST,			//idip��ѯ�û�����ѫ���ܶ�
	EVENT_HALL_ADD_ITEM,				//idip���򵥵���
	//����Ա����
	EVENT_ADMIN = 2048,
	EVENT_ADMIN_PROFILE,
	EVENT_ADMIN_ADDEXP,
	EVENT_ADMIN_ADDCASH,
	EVENT_ADMIN_SETLEVEL,
	EVENT_ADMIN_BANCHAT,
	EVENT_ADMIN_BANLOGIN,
	EVENT_ADMIN_RELOAD,
	EVENT_ADMIN_CANATTACK,
	EVENT_WEB_INVITEFRIEND,
	EVENT_WEB_SENDGIFT,
	EVENT_WEB_SENDGIFTPLATID,
	EVENT_ADMIN_BANDWGUSER,
	EVENT_ADMIN_OPT,
	EVENT_WEB_PHOTO,
	EVENT_WEB_CALLBACKFRIEND,
	EVENT_WEB_CALLBACKFRIENDPLATID,
	EVENT_ADMIN_ADDHONOR,
	EVENT_WEG_GIFT,
	EVENT_WEB_GIFTSEND,
	EVENT_WEB_GIFT2FRD,
	EVENT_WEB_BROADCAST,
	EVENT_ADMIN_CLEARDEFENSE,
	EVENT_WEB_SETALARMCLOCK,
	EVENT_ADMIN_SETNEWCOMERGIFT,
	EVENT_ADMIN_SETCONTINUELANDDAY,
	EVENT_WEB_INVITEFRIEND_PLAT,
	EVENT_ADMIN_SETPLATINVITEID,
	EVENT_WEB_YELLOWGUNGOLD,
	EVENT_WEB_REFRESHYELLOW,
	EVENT_WEB_TXMISSIONOPERATE,
	EVENT_WEB_SHARE,
	EVENT_GET_DAILY_YELLOW_RES,
	EVENT_WEB_REFRESHYELLOW_REBATE,
	EVENT_SELF_ADDGIFTTOPLAT,
	EVENT_WEB_TRYINVITE_FRIEND,
	EVENT_ADMIN_GETBLDCNT,
	EVENT_AD_SET,
	EVENT_WEB_ADDQQPANLE,
	EVENT_ADMIN_RELOADCHICKENRANK,
	EVENT_WEB_REQUEST_LEVEL,
	EVENT_ADMIN_ADDGUILDBTLREWARD,
	EVENT_ADMIN_RESETWHOLECOUNTRY,
	EVENT_ADMIN_GVELIST,
    EVENT_ADMIN_RESETGUILDPKSCORE,
    EVENT_ADMIN_OUTPUTGUILDUSERLIST,
	EVENT_ADMIN_SITECREDITRELOAD,

	EVENT_QUERY_STAR_INFO,
};

enum Status_UpdateWorkingStatus 
{
	UpdateWorkingStatus_GW_Disconn = 0,
	UpdateWorkingStatus_WG_Disconn,
	UpdateWorkingStatus_GW_Conn,
	UpdateWorkingStatus_WG_Sync,
	UpdateWorkingStatus_GW_Sync,
	UpdateWorkingStatus_WG_Fin,

	UpdateWorkingStatus_GH_Disconn,
	UpdateWorkingStatus_HG_Disconn,
	UpdateWorkingStatus_GH_Conn,
	UpdateWorkingStatus_HG_Sync,
	UpdateWorkingStatus_GH_Sync,
	UpdateWorkingStatus_HG_Fin,

};

enum Status_UserLogin 
{
	UserLogin_WW_Req = 0,
	UserLogin_WG_Req,
	UserLogin_GW_Rsp,

	UserLogin_GP_Req,
	UserLogin_PG_Rsp,

	UserLogin_GCo_Req,
	UserLogin_CoG_Rsp,
};

enum Status_NormalStats
{
	Status_Normal_WW_Req = 0,
	Status_Normal_Game,
	Status_Normal_To_World,
	Status_Normal_Logic_Game,
	Status_Normal_Back_World,
	Status_Normal_Back_Game,

	Status_Normal_To_Star,
	Status_Normal_Star_Back,
	Status_Normal_StarSlf,

	Status_Normal_WG_UPBROADCAST,
	
	Status_World_To_Plat,
	Status_Plat_To_World,
	Status_Game_To_Plat,
	Status_Plat_To_Game,

	Status_Normal_To_Fight,
	Status_Normal_Back_Fight,

	Status_Game_To_Country,
	Status_Country_To_Game,

	Status_UserLite_To_Game,

	Status_Game_To_Region,
	Status_Region_To_Game,

    Status_Game_To_World,

	Status_Game_To_Rank,
	Status_Rank_To_Game,

	Status_Game_To_Stat,
	Status_Stat_To_Game,

	Status_Game_To_Monitor = 100,
	Status_Monitor_To_Game,

};

enum EventState
{
	EVENTSTATE_CG = 0,
	EVENTSTATE_CGW,
	EVENTSTATE_CGWG,
	EVENTSTATE_CGWGW,
	EVENTSTATE_CGWGWG,
};

enum Status_UserAuth 
{
	UserAuth_CG_Req = 0,
	UserAuth_GC_Rsp
};

enum Status_SendRemoteUser 
{
	SendRemoteUser_GW_Req = 0,
	SendRemoteUser_WG_Req
};

enum Status_Admin 
{
	Admin_AG_Req = 0,
	Admin_GW_Req,
	Admin_WG_Req,
	Admin_GW_Rsp,
	Admin_WG_Rsp,
	Admin_GA_Rsp,
	Admin_WW_Req,
	Admin_CG_Rsq,
};

#endif

#endif
