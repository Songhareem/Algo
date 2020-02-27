#include "Greedy.h"

void Greedy::run()
{
	this->gymSuit();
}

int Greedy::gymSuit()
{
	// �־����� ���� ��
	int n = 8;
	vector<int> lost = { 4,5 };
	vector<int> reserve = { 5,6 };

	// logic
	// 1. �� ����
	// 2. ������ �˻�
	// 3. �� �˻�
	
	// 0. lost�� ���� ���ٸ� �Ѵ� ����
	// 1. reserve���� ������ ���� �̰� ����
	// 2. lost�� ������ ��ȸ�ϸ鼭 �ش��ϴ°� �ִٸ� ����
	// 3. reserve.size() == 0 �϶� ���� �ݺ�
	// 2. n - lost.size() = answer

	int answer = 0;

	// �����ִ� ��� = �������� ����� �� �迭���� ����
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

	// !(�����ִ� ��� = �������� ���)�����
	// ���� ����� ���� reserve�� �� �� index���� ����
	while (reserve.size()>0) {

		int lastIndex = reserve.size() - 1;

		int dequeData = reserve[lastIndex];

		//printf("%d\n",dequeData);

		reserve.pop_back();

		for (auto iter = lost.begin(); iter != lost.end();) {

			// �տ� �ִ°� ���� Ȯ��
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