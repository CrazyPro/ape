#include "StarLogic.h"
#include "CountryNameTbl.h"
#include "../common/rand_util.h"

StarLoigc::StarLoigc()
{
	m_FindStarKeyVal.clear();
	m_FindStarKeyVal.insert(make_pair(1,30));
	m_FindStarKeyVal.insert(make_pair(2,30));
	m_FindStarKeyVal.insert(make_pair(3,40));
}

int StarLoigc::GetStarName()
{
	int num = CountryNameTblInst::instance().GetTotalSize();
	return rand() % num + 1;
}

int StarLoigc::GetStarType()
{
	return rand()%STAR_TYPE_MAX;
}

void StarLoigc::GetNewStar(int x, int y, int &newx, int &newy)
{	
	int ran = rand() % 100;
	int totalProb = 0, number = 0;
	for(map<int,int>::iterator iter = m_FindStarKeyVal.begin(); iter != m_FindStarKeyVal.end(); iter++){
		number++;
		totalProb += iter->second;
		if(ran <= totalProb){
			break;
		}
	}
	
	Star newStar;
	for(int i = 0; i < number; i++){
		newStar = GetNearbyStar(x, y);
		x = newStar.x;
		y = newStar.y;
	}
	
	newx = newStar.x;
	newy = newStar.y;
}

Star StarLoigc::GetNearbyStar(int x, int y)
{
	Star newStar;
	Area area = GetNewPoint(x, y, GetArea(x, y));
	newStar.x = area.newX;
	newStar.y = area.newY;
	return newStar;
}

Area StarLoigc::GetArea(int x, int y) {
	int hx = 0, hy = 0, wx = 0, wy = 0;
	bool left = false;

	int offsetX = x / STAR_SEED;
	int offsetY = y / STAR_SEED;

	hx = offsetX * STAR_SEED;
	wx = (offsetX + 1) * STAR_SEED;

	hy = (offsetY + 1) * STAR_SEED;
	wy = offsetY * STAR_SEED;

	if ((x + y) <= (wx + wy)) {// �ж������߻����Ұ��
		left = true;
	}

	Area hwxy;
	hwxy.hx = hx;
	hwxy.hy = hy;
	hwxy.wx = wx;
	hwxy.wy = wy;
	hwxy.left = left;
	return hwxy;
}

Area StarLoigc::GetNewPoint(int x, int y, Area hwxy)
{
	int hx = hwxy.hx;
	int hy = hwxy.hy;
	int wx = hwxy.wx;
	int wy = hwxy.wy;
	bool left = hwxy.left;
	int newX = 0, newY = 0;

	if (x == hx && y == hy) {// �����ǰ����Ϊ(hx,hy)��
		newX = wx;
		newY = wy + 1;
	} else {
		if (left) {// ����
			if (x == hx) {// ���ߵ�����(0,0),(0,1),(0,2)
				if (y == wy) {// ��Ϊ�������ԭ��(0,0)
					newX = x + 1;
					newY = y;
				} else {
					newX = y + STAR_SEED - hy + hx + 1;
					newY = wy;
				}
			} else {
				newX = x - 1;
				newY = y + 1;
			}
		} else {// �Ұ��
			if (y == hy) {// �ұߵĺ���(0,0),(0,1),(0,2)
				if (x == wx) {// �ұߵ����յ�(10,10)
					if (x == STAR_MAX_WEIGHT) {// �Ѿ������е��յ�
						newX = 0;
						newY = y + 1;
					} else {
						newX = wx + 1;
						newY = wy;
					}
				} else {
					newX = wx;
					newY = x - hx + wy + 1;
				}
			} else {
				newX = x - 1;
				newY = y + 1;
			}
		}
	}
	hwxy.newX = newX;
	hwxy.newY = newY;

	while (newX == wx || newY == hy) {
		if (newX == wx && newY == hy) {// �ұߵ����һ����
			if (newX == STAR_MAX_WEIGHT) {// �����ɵ����ұ�,����һ�д�ͷ��ʼ
				newX = 0;
			} else {
				newY = wy;
			}
			hwxy = GetArea(newX, newY);
			hwxy.newX = newX;
			hwxy.newY = newY;
		} else {
			if ((newX + newY) <= (wx + wy)) {// �ж������߻����Ұ��
				hwxy.left = true;
			} else {
				hwxy.left = false;
			}
			hwxy = GetNewPoint(newX, newY, hwxy);
		}
		newX = hwxy.newX;
		newY = hwxy.newY;
		hx = hwxy.hx;
		hy = hwxy.hy;
		wx = hwxy.wx;
		wy = hwxy.wy;
	}
	return hwxy;
}

#if 0
void StarLoigc::serizlize(DB_GlobalStarInfo &db)
{
	db.Clear();
	for(map<int, Star>::iterator iter = m_mGlobalStarInfo.begin(); iter != m_mGlobalStarInfo.end(); iter++){
		DB_Galaxy *star = db.add_galaxys();
		if(star){
			star->set_id(iter->first);
			star->set_type(iter->second.type);
			star->set_name(iter->second.name);
			star->set_x(iter->second.x);
			star->set_y(iter->second.y);
			for(int i = 0; i < iter->second.pli.size(); i++){
				DB_PlanetLiteInfo* pLite = star->add_lite();
				if(pLite){
					pLite->set_uid(iter->second.pli[i].uid);
					pLite->set_planetid(iter->second.pli[i].planetId);
				}
			}
		}
	}
}

bool StarLoigc::unserialize(DB_GlobalStarInfo db)
{
	for (int i = 0; i < db.galaxys_size(); i++){
		const DB_Galaxy dbStar = db.galaxys(i);
		Star star;
		star.id = dbStar.id();
		star.type = dbStar.type();
		star.name = dbStar.name();
		star.x = dbStar.x();
		star.y = dbStar.y();
		for(int k = 0; k < dbStar.lite_size(); k++){
			PlanetLiteInfo lite;
			lite.uid = dbStar.lite(k).uid();
			lite.planetId = dbStar.lite(k).planetid();
			star.pli.push_back(lite);
		}
		map<int, Star>::iterator iter = m_mGlobalStarInfo.find(star.id);
		if(iter != m_mGlobalStarInfo.end()){
			return false;
		}
		m_mGlobalStarInfo.insert(make_pair(star.id, star));
	}
	return true;
}
#endif