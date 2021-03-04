#pragma once
#include "Object.h"
#include <vector>
#include <algorithm>

using namespace std;

class SortQ : public Object
{
public:
	virtual void run();

	vector<int> kthNumber();
};

