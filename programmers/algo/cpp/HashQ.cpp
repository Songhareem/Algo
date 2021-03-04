#include "HashQ.h"

void HashQ::run()
{
	this->incompletePlayer();
}

string HashQ::incompletePlayer()
{
	// test Data
	vector<string> participant;
	vector<string> completion;

	participant.push_back("Oracle");
	participant.push_back("MicroSoft");
	participant.push_back("Apple");

	completion.push_back("Apple");
	completion.push_back("MicroSoft");

	//printf("[");
	//for (iter = participant.begin(); iter != participant.end(); ++iter) {
	//	printf("%s ",*iter);
	//}
	//printf("]\n");

	//printf("[");
	//for (iter = completion.begin(); iter != completion.end(); ++iter) {
	//	printf("%s ", *iter);
	//}
	//printf("]\n");

	// logic
	string result = "err";
	map<string, int> m;

	for (auto iter = participant.begin(); iter != participant.end(); ++iter) {

		string key = *iter;
		if (m.count(key) == 0) {
			m.insert(make_pair(key, 1));
		} 
		else {
			auto mapIter = m.find(key);
			mapIter->second += 1;
		}
	}

	for (auto iter = completion.begin(); iter != completion.end(); ++iter) {

		string key = *iter;
		if (m.count(key) == 0) {
			m.insert(make_pair(key, 1));
		}
		else {
			auto mapIter = m.find(key);
			mapIter->second += 1;
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++) {

		//printf("%s ", iter->first);
		//printf("%d ", iter->second);
		if(iter->second % 2 != 0)
			printf("%s ", iter->first);
	}

	return result;
}
