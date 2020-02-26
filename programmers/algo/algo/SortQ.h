#pragma once
#include "Object.h"
#include <vector>
#include <algorithm>

using namespace std;

class SortQ : public Object
{
public:
	void run();

	vector<int> kthNumber();
};

