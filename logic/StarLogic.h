#ifndef _STAR_LOGIC_H
#define _STAR_LOGIC_H

#include "../common/Singleton.h"
#include "../logic/dbinterface.pb.h"
#include "../common/const_def.h"

using namespace std;
typedef struct{
	int x;
	int y;
	int newX;
	int newY;
	int hx;
	int hy;
	int wx;
	int wy;
	bool left;
}Area;

typedef struct{
	int64 uid;
	string planetId;
}PlanetLiteInfo;

class Star
{
public:
	Star():id(0),x(0),y(0),type(0),name(0){pli.clear();}

	int id;
	int x;
	int y;
	int type;
	int name;
	vector<PlanetLiteInfo> pli;
};

class StarLoigc
{
public:
	StarLoigc();
	enum{
		STAR_ALLOCATE_OCCUPIED = 5,
		STAR_TYPE_MAX = 6,
		STAR_SEED = 50,	// һ���������ɵķ�Χ��С
		STAR_MAX_WEIGHT = 1000,	// �������ɵ������
	};
	
	int GetStarName();
	int GetNewPlayerStar(int64 uid);
	Star GetNearbyStar(int x, int y);
	Area GetArea(int x, int y);
	Area GetNewPoint(int x, int y, Area hwxy);
	bool unserialize(DB_GlobalStarInfo db);
	void serizlize(DB_GlobalStarInfo &db);
private:
	map<int, Star> m_mGlobalStarInfo;
	map<int, int> m_FindStarKeyVal;
};

typedef Singleton<StarLoigc> StarLogicInst;

#endif