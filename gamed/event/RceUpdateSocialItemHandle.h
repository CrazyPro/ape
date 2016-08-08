#ifndef _RCEUPDATESOCIALITEMHANDLE_H_
#define _RCEUPDATESOCIALITEMHANDLE_H_
#pragma once
//���ļ���.cpp�ļ�Ϊʹ�ù��ߴ����������ļ����޸ģ�����������ָ��ļ������������´�����
#include "BaseEvent.h"
class RceUpdateSocialItemHandle : public CBaseEvent
{
public:
	RceUpdateSocialItemHandle();
	~RceUpdateSocialItemHandle();
	RegistEvent(RceUpdateSocialItemHandle,C2S_RceUpdateSocialItem)
	void SendRet2User(User* pUser,int nRet,RseUpdateSocialItem& rseUpdateSocialItem);
	vector<string> split( string str, string pattern);

	enum
	{
		RseUpdateSocialItemRet_Success = 0,
		RseUpdateSocialItemRet_ResNotEnough = 1,
		RseUpdateSocialItemRet_SocialItemNotEnough = 2,
		RseUpdateSocialItemRet_AddSocialItemFailed = 3,
		RseUpdateSocialItemRet_AddDroidFailed = 4,
		RseUpdateSocialItemRet_ApplyCraftingFailed = 5,
		RseUpdateSocialItemRet_AddToWishListFailed = 6,
		RseUpdateSocialItemRet_RemoveItemFromWishListFailed = 7,
	};

private:
	void handle(Event* e);
};
#endif

