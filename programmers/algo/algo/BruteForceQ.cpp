#include "BruteForceQ.h"

void BruteForceQ::run()
{
	this->mockTest();
}

vector<int> BruteForceQ::mockTest()
{
	// Q setting
	vector<int> answers = { 1,2,3,4,5 };
	vector<int> result;

	// logic 
	vector<vector<int>> tester = { { 1, 2, 3, 4, 5 },
							{ 2, 1, 2, 3, 2, 4, 2, 5 },
							{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 } };
	
	vector<int> score = { 0,0,0 };
	
	int testIndex[3] = { 0,0,0 };

	for (int i = 0; i < answers.size(); i++) {
		
		for (int j = 0; j < 3; j++) {

			// tester part
			testIndex[j] = i % tester[j].size();
			if (answers[i] == tester[j][testIndex[j]]) {
				score[j]++;
			}
		}
	}

	int max = -1;
	for (int i = 0; i < score.size(); i++) {
		max = max < score[i] ? score[i] : max;
	}

	for (int i = 0; i < score.size(); i++) {

		if (max == score[i])
			result.push_back(i+1);
	}

	for (int i = 0; i < result.size(); i++) {
		printf("%d ", result[i]);
	}

	return result;
}
