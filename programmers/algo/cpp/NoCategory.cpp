#include "NoCategory.h"

void NoCategory::run()
{
	//_2016Year();
	//getInMiddleOfChar();
	//hateSameNumber();
	//dividedNumberArray();
	//sumBetweenTwoIntegers();
	stringSortHowIWant();
}

string NoCategory::_2016Year()
{
	// init
	int a = 5;	// ��
	int b = 24;	// ��

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

	// Ȧ��
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
	// �� ���� e = { e | 0 <= e <= 9 }
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

long long NoCategory::sumBetweenTwoIntegers()
{
	// init
	// a�� b�� -10,000,000 �̻� 10,000,000 ������ ����
	int a = 5;
	int b = 3;

	// logic
	long long answer = 0;

	if (a == b) {
		answer = a;
		return answer;
	}

	int big = a > b ? a : b;
	int sml = a < b ? a : b;

	while (sml <= big) {
		answer += sml;
		sml++;
	}

	//printf("%d", answer);

	return answer;
}

vector<string> NoCategory::stringSortHowIWant()
{
	// init
	vector<string> strings = { "abcd","abce" "cdx" }; //{ "sun", "bed", "car" };
	int n = 2;

	// logic
	vector<string> answer;

	// key�� �ߺ��� �Ͼ �� �����Ƿ� multimap
	// key = (int)char, value = string
	map<char, vector<string>> chStrMap;

	// 1.
	// �ε����� ���ڿ����� �ش� ���ڸ� char�� ����
	// -> key : char �� ������ ��
	// -> value : ���ڿ� ��ü

	// 2. ���� �̹� �ִ� Ű���̶��, ���������� ��
	// ������?
	// 1) abc vs abd ��� abc�� ��
	// 2) abcd vs abc ���, abc�� ��

	for (int i = 0; i < strings.size(); i++) {

		// char ����
		const char *tmp = strings[i].c_str();

		// ���� ���� �ʾҴ� ���̶��
		auto iter = chStrMap.find(tmp[n]);
		if (iter == chStrMap.end()) {
			vector<string> strList;
			strList.push_back(tmp);
			chStrMap.insert(make_pair(tmp[n], strList));
			continue;
		}
		
		// �񱳰��� �̹� �ִ� ������ ũ�ٸ�,
		// �̹� �ִ� �� ���� ��, �񱳰� �ְ� ���� �� �ֱ�
		// �ƴ϶��, �� �� �ֱ�
		//printf("%c %s %c %s\n", tmp[n], tmp, iter->first, iter->second.c_str());
		vector<string> vecStrTmp = iter->second;
		string strTmp = vecStrTmp[0];
		int result = strcmp(tmp, iter->second.c_str());
		//printf("result : %d\n", result);

		// result 1 ������ �ͱ��� Ȯ�� �Ʒ� ���� ���Կ��� ��������
		//printf("==================================================");

		if (result > 0) {
			char tmpCh = iter->first;
			string tmpStr = iter->second;
			
			chStrMap.erase(iter->first);

			string str = tmp;
			chStrMap.insert(make_pair(tmpCh, tmpStr));
			chStrMap.insert(make_pair(tmp[n], str));

			//printf("%c %s %c %s\n", tmp[n], tmp, tmpCh, tmpStr.c_str());
		}
		else {
			string str = tmp;
			chStrMap.insert(make_pair(tmp[n], str));
		}
	}

	int i = 0;
	/*for (auto iter = chStrMap.begin(); iter != chStrMap.end(); ++iter) {

		printf("%d : %s\n", ++i,iter->second.c_str());
	}*/

	return answer;
}


