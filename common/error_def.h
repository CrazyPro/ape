#ifndef _ERROR_DEF_H_
#define _ERROR_DEF_H_


enum    ERROR_CODE
{
        SUCCESS = 0,                                    //�ɹ�
        ERR_UNKNOWN = 1,                                //δ֪
        ERR_CONFIG_MISS = 2,                            //δ�ҵ�����
        ERR_CONFIG_WRONG = 3,                           //��������
        ERR_WRONG_PARAMTER = 4,                         //����Ĳ���

        ERR_LOADUSER_FAILED = 101,                      //�����û�ʧ��
        ERR_CREATEUSER_FAILED = 102,                    //�����û�ʧ��
        ERR_ALREADY_REGIST = 103,                       //��ע��
        ERR_OPENID_NOT_LOCAL = 104,                     //�ǵ�ǰ����

        ERR_PLAYER_LEVEL = 201,                         //��ҵȼ�����
        ERR_PLAYER_GEM = 202,                           //��ʯ����
        ERR_PLAYER_NOTFOUND = 203,                      //���δ�ҵ�

        ERR_CONSTRUCTION_NOT_FOUND = 1001,              //δ�ҵ�����
        ERR_CONSTRUCTION_CASTLE_LEVEL_TO_LOW = 1002,    //�Ǳ��ȼ�����
        ERR_CONSTRUCTION_POS = 1003,                    //����λ�ô���
        ERR_CONSTRUCTION_BUILD_TYPE = 1004,             //�������ʹ���
        ERR_CONSTRUCTION_TOO_MANY = 1005,               //����̫��
        ERR_DEPOT_TOO_MANY = 1006,                      //̫��ֿ�
        ERR_TAVERN_LEVEL = 1007,                        //�ƹݿƼ�����

        ERR_RESOURCE_NOT_ENOUGH = 2001,                 //��Դ����
        ERR_GOLD_NOT_ENOUGH = 2002,                     //��Ҳ���
        ERR_ITEM_NOT_ENOUGH = 2003,                     //��Ʒ����

        ERR_ACTION_LIST_FULL = 3001,                    //����������
        ERR_ACTION_HAS_SAME_TARGET = 3002,              //������ͬĿ��Ķ���
        ERR_WAITACTION_LIST_FULL = 3003,                //�ȴ�������
        ERR_ACTION_NOT_FOUND = 3004,                    //����δ�ҵ�
        ERR_ACTION_NOT_FULL = 3005,                     //��������δ��
        ERR_ACTION_NOT_COUNTING = 3006,                 //����δ����
        ERR_ACTION_CANNOT_SPEED = 3007,                 //�޷�����

        ERR_ACADEMY_LEVEL = 4001,                       //��ѧ�ȼ�����

        ERR_BARRACK_LEVEL = 5001,                       //��Ӫ�ȼ�����
        ERR_SOILDER_NOT_HURT = 5002,                    //ʿ��δ����
        ERR_SOILDER_NOT_ENOUGH = 5003,                  //ʿ������
        ERR_FORGE_LEVEL = 5004,                         //������

        ERR_GENERAL_NOT_WAIT = 6001,                    //���첻���ڵȴ��ٻ�״̬
        ERR_GENERAL_NOT_FOUND = 6002,                   //����δ�ҵ�
        ERR_GENERAL_NOT_IDLE = 6003,                    //���첻����
        ERR_GENERAL_CMD_SOILDER_NUM = 6004,             //���������������
        ERR_GENERAL_REFRESH_TIME = 6005,                //ˢ��ʱ��δ��
        ERR_GENERAL_TOO_MANY = 6006,                    //��������̫��

        ERR_BATTLE_GRID_NOT_FOUND = 7001,               //ս��δ�ҵ�
        ERR_BATTLE_GRID_STATE = 7002,                   //ս��״̬����
        ERR_BATTLE_GRID_SELF_CITY = 7003,               //ս�����Լ�ռ��
        ERR_ATTACK_IMUNITY = 7004,                      //��������ս
        ERR_MARCH_NOT_FOUND = 7005,                     //�ɱ�δ�ҵ�
        ERR_MARCH_STATE = 7006,                         //�ɱ�״̬����
        ERR_MARCH_ALREADY_DEFEND = 7007,                //�Ѿ�����
        ERR_MARCH_CANNOT_DETECT = 7008,                 //�޷����

        ERR_PROP_NOT_ENOUGH = 8001,                     //���߲���
        ERR_PROP_CANNOT_DIRECT_USE = 8002,              //���߲���ֱ��ʹ��
        ERR_PROP_NOT_IN_SHOP = 8003,                    //���߲����̵��г���
        ERR_PROP_EFFECT = 8004,                         //����ʹ��Ч������
        ERR_PROP_ALREADY_AWARD = 8005,                  //�����Ѿ��ν�

        ERR_UNION_ALREADY_APPLY = 9001,                 //������
        ERR_UNION_ALREADY_MEMBER = 9002,                //�Ѿ��ǳ�Ա
        ERR_UNION_AUTHORITY = 9003,                     //Ȩ�޲���
        ERR_UNION_NOT_APPLY = 9004,                     //δ������û�
        ERR_UNION_MEMBER_NOT_FOUND = 9005,              //��Աδ�ҵ�
        ERR_UNION_APPLY_LENGTH = 9006,                  //���������
        ERR_UNION_NAME_LEN = 9007,                      //���ֹ���
        ERR_UNION_APPLY_NUM = 9008,                     //ͬʱ�������˹���
        ERR_UNION_NOT_FOUND = 9009,                     //����δ�ҵ�
        ERR_UNION_LEAVE_CD = 9010,                      //������ȴʱ��δ��
        ERR_UNION_HALL_LEVEL = 9011,                    //�����ȼ�����
        ERR_UNION_CONSTRUCTION_NOT_FOUND = 9012,        //����δ�ҵ�
        ERR_UNION_PROP_LOCK = 9013,                     //���߱�����
        ERR_UNION_SOILDER_LOCK = 9014,                  //ʿ��������
        ERR_UNION_CONTRIBUTE_NOT_ENOUGH = 9015,         //���׶Ȳ���
        ERR_UNION_MEMBER_NUM = 9016,                    //������������
        ERR_UNION_CONTRIBUTE_NUM = 9017,                //���״����ﵽ����
        ERR_UNION_HELP_NOT_FOUND = 9018,                //δ�ҵ���������
        ERR_UNION_ALREADY_HELP = 9019,                  //�Ѿ���������
        ERR_UNION_HELP_SEND_NUM = 9020,                 //����������������޶�
        ERR_UNION_NOTICE_LEN = 9021,                    //����֪ͨ����

        ERR_AFFAIR_NOT_WAIT = 10001,                    //�ճ�����û�б�ˢ��
        ERR_AFFAIR_TIME_NOT_ENOUGH = 10002,             //�ճ�����ʱ��δ��
        ERR_AFFAIR_REWARD_NUM = 10003,                  //��ȡ�ճ�������������
        ERR_AFFAIR_REFRESH_TIME = 10004,                //ˢ��ʱ��δ��
        ERR_MISSION_NOT_ACCEPT = 10005,                 //����δ����
        ERR_MISSION_NOT_COMPLETE = 10006,               //�����������δ���

        ERR_DRAMA_CHAPTER_NOT_FOUND = 11001,            //�½�δ�ҵ�
        ERR_DRAMA_CHAPTER_ALREADY_REWARD = 11002,       //�½ڽ�������ȡ
        ERR_DRAMA_CHAPTER_NOT_FINISH = 11003,           //�½�δ���
        ERR_DRAMA_CHAPTER_LOCK = 11004,                 //�½�����
        ERR_DRAMA_FIGHTPOINT_LOCK = 11005,              //ս��������

        ERR_CHAT_CD = 12001,                            //����CD
        ERR_CHAT_USER_OFFLINE = 12002,                  //�û�������

        ERR_LOTTERY_ALREADY_TAKE = 13001,               //��������ȡ
        ERR_LOTTERY_TAKE_NUM = 13002,                   //��ȡ��������

        ERR_ENERGY_NOT_ENOUGH = 14001,                   //��������
        ERR_ENERGY_FULL = 14002,                         //��������
        ERR_ENERGY_FILL_TOO_MUCH = 14003,                //����������������
};

#endif

