#pragma once

#include<iostream>

using namespace std;

class Object 
{
public:

	Object() {

		init();

		printf("Create Obj\n");
	}

	virtual ~Object(){

		printf("Delete Obj\n");
	}

	void init() {

		//cin cout init
		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		printf("init success\n");
	}

	virtual void main() = 0;
};
