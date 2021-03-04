#include "Greedy.h"

void Greedy::run()
{
	this->gymSuit();
}

int Greedy::gymSuit()
{
	// 주어지는 문제 값
	int n = 8;
	vector<int> lost = { 4,5 };
	vector<int> reserve = { 5,6 };

	// logic
	// 1. 해 선택
	// 2. 적설성 검사
	// 3. 해 검사
	
	// 0. lost와 여벌 같다면 둘다 삭제
	// 1. reserve에서 마지막 값을 뽑고 삭제
	// 2. lost의 역방향 순회하면서 해당하는게 있다면 삭제
	// 3. reserve.size() == 0 일때 까지 반복
	// 2. n - lost.size() = answer

	int answer = 0;

	// 여벌있는 사람 = 도난당한 사람은 각 배열에서 삭제
	for (auto reserveIter = reserve.begin(); reserveIter != reserve.end();) {
	
		bool eraseFlag = false;
		for (auto lostIter = lost.begin(); lostIter != lost.end(); ++lostIter) {

			if (*reserveIter == *lostIter) {
				lost.erase(lostIter);
				eraseFlag = true;
				break;
			}
		}

		if (eraseFlag) {
			reserveIter = reserve.erase(reserveIter);
			continue;
		}

		++reserveIter;
	}

	// !(여벌있는 사람 = 도난당한 사람)사람들
	// 성능 향상을 위해 reserve의 맨 뒤 index부터 뽑음
	while (reserve.size()>0) {

		int lastIndex = reserve.size() - 1;

		int dequeData = reserve[lastIndex];

		//printf("%d\n",dequeData);

		reserve.pop_back();

		for (auto iter = lost.begin(); iter != lost.end();) {

			// 앞에 있는거 먼저 확인
			int preLost = dequeData - 1;
			int postLost = dequeData + 1;
			
			//printf("pre : %d\t",preLost);
			//printf("post: %d\n", postLost);

			if (preLost == *iter || postLost == *iter) {
				iter = lost.erase(iter);
				break;
			}

			++iter;
		}
	}

	answer = n - lost.size();
	printf("%d\n", answer);

	return answer;
}