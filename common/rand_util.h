#ifndef _RAND_UTIL_H_
#define _RAND_UTIL_H_

#include <vector>

double get_rand(); //����[0,1)�����
bool rand_by_percent(double percent);
int rand_by_weight(const std::vector<int>& val, const std::vector<int>& rnd);


#endif
