#include "NoCategory.h"

void NoCategory::run()
{
	//_2016Year();
	//getInMiddleOfChar();
	//hateSameNumber();
	dividedNumberArray();
}

string NoCategory::_2016Year()
{
	// init
	int a = 5;	// 월
	int b = 24;	// 일

	// logic
	vector<int> daysOfMonth = { 31, 29, 31, 30, 
								31, 30, 31, 31, 
								30, 31, 30, 31 };

	vector<string> dayOfWeek = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

	int days = 0;

	for (int i = 0; i < a-1; i++) {

		//printf("%d ", daysOfMonth[i]);
		days += daysOfMonth[i];
	}

	days += (b-1);

	printf("%s",dayOfWeek[days % 7]);

	return dayOfWeek[days % 7];
}

string NoCategory::getInMiddleOfChar()
{
	// init
	string s = "abcd";
	
	// logic
	string answer = "";
	int sp = 0;
	int cnt = 1;

	// 홀수
	if (s.size() % 2 == 1) {
		sp = s.size() >> 1;
	}
	else {
		sp = (s.size() >> 1) - 1;
		cnt = 2;
	}

	//printf("%d %d\n", sp, cnt);

	answer = s.substr(sp, cnt);
	//printf("%s", answer);
	return answer;
}

vector<int> NoCategory::hateSameNumber()
{
	// init
	// 각 원소 e = { e | 0 <= e <= 9 }
	vector<int> arr = { 1, 1, 3, 3, 0, 1, 1 };
	
	// logic
	vector<int> answer;
	int tmp = -1;

	for (int i = 0; i < arr.size(); i++) {
		if (tmp != arr[i]) {
			answer.push_back(arr[i]);
			tmp = arr[i];
		}
	}

	/*
	for (int i = 0; i < answer.size(); i++) {
		printf("%d ", answer[i]);
	}
	*/

	return answer;
}

vector<int> NoCategory::dividedNumberArray()
{
	// init
	vector<int> arr = { 2, 36, 1, 3 };
	int divisor = 1;
	
	// logic
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % divisor == 0)
			answer.push_back(arr[i]);
	}

	if (answer.size() == 0) {
		answer.push_back(-1);
	}
	else {
		sort(answer.begin(), answer.end());
	}

	return answer;
}


