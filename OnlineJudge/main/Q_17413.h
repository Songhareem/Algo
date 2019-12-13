#pragma once

#include <iostream>
#include <string>
#include <stack>
#include "App.h"

using namespace std;

class Q_17413 : public App {

public:	
	Q_17413() {
		cout << "quest constructor" << endl;
	}

	virtual ~Q_17413() {
		cout << "quest destructor" << endl;
	}

	virtual void run() {

		string str;
		getline(cin, str);

		bool tag = false;
		stack<char> s;

		for (char ch : str) {
			if (ch == '<') {
				print(s);
				tag = true;
				cout << ch;	// '<' 출력
			}
			else if(ch == '>') {
				tag = false;
				cout << ch; // '>'출력
			}
			// 그냥 출력
			else if (tag) {
				cout << ch;
			}
			// 뒤집어서 출력
			else {
				if (ch == ' ') {
					print(s);
					cout << ch;
				}
				else {
					s.push(ch);
				}
			}
		}

		print(s);
		cout << '\n';
	}

	// 현재 stack 내부에 있는거 프린트 및 pop
	void print(stack<char> &s) {

		while (!s.empty()) {

			cout << s.top();
			s.pop();
		}
	}
};

