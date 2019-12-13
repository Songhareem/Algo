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
				cout << ch;	// '<' ���
			}
			else if(ch == '>') {
				tag = false;
				cout << ch; // '>'���
			}
			// �׳� ���
			else if (tag) {
				cout << ch;
			}
			// ����� ���
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

	// ���� stack ���ο� �ִ°� ����Ʈ �� pop
	void print(stack<char> &s) {

		while (!s.empty()) {

			cout << s.top();
			s.pop();
		}
	}
};

