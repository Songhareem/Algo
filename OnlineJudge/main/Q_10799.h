#pragma once

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include "App.h"

using namespace std;

class Q_10799 : public App {

public:
	Q_10799() {
		cout << "quest constructor" << endl;
	}

	virtual ~Q_10799() {
		cout << "quest destructor" << endl;
	}


	virtual void run() {

		string str;
		cin >> str;
		int n = str.size();

		stack<char> s;
		int stick = 0;

		for (int i = 0; i < n; i++) {

			if (str[i] == '(') {
				s.push(i);
			}
			else {
				if (i - s.top() == 1) {
					s.pop();
					stick += s.size();
				}
				else {
					stick += 1;
					s.pop();
				}
			}
		}
		cout << stick;
		cout << '\n';
	}

	void solve() {

		string a;
		cin >> a;
		int n = a.size();
		stack<int> s;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == '(') {
				s.push(i);
			}
			else {
				if (s.top() + 1 == i) {
					s.pop();
					ans += s.size();
				}
				else {
					s.pop();
					ans += 1;
				}
			}
		}
		cout << ans << '\n';
	}

};