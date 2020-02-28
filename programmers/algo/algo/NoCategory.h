#pragma once
#include "Object.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class NoCategory :	public Object
{
public :
	virtual void run();

	string _2016Year();

	string getInMiddleOfChar();

	vector<int> hateSameNumber();

	vector<int> dividedNumberArray();
};

