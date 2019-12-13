#pragma once

#include<iostream>

using namespace std;

class App {

public:
	App() {
		iostreamSetting();
		printf("========= App Start =======\n");
	}
	virtual ~App() { 
		printf("========= App End =========\n");
	};
	virtual void run() = 0;

private:
	void iostreamSetting() {

		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		cout << "iostream setting done" << endl;
	}
};