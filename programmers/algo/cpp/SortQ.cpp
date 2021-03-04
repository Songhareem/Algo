#include "SortQ.h"

void SortQ::run()
{
	this->kthNumber();
}

vector<int> SortQ::kthNumber()
{
	vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> commands = { {2, 5, 3},{4, 4, 1},{1, 7, 3} };

	
	/*for (int i = 0; i < array.size(); i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	for (int i = 0; i < commands.size(); i++) {
		for (int j = 0; j < commands[i].size(); j++) {
			printf("%d ", commands[i][j]);
		}
	}
	printf("\n");*/

	// logic
	vector<int> answer;

	for (int row = 0; row < commands.size(); row++) {
		
		int i, j, k, col = 0;
		i = commands[row][col++] - 1;
		j = commands[row][col++] - 1;
		k = commands[row][col] -1;
	
		//printf("%d %d %d\n", i, j, k);

		vector<int> tmp;
		for (int index = i; index <= j; index++) {
			tmp.push_back(array[index]);
		}
		sort(tmp.begin(), tmp.end());
		/*for (int index = 0; index < tmp.size(); index++) {
			printf("%d ", tmp[index]);
		}
		printf("\n");*/

		answer.push_back(tmp[k]);
	}

	/*for (int index = 0; index < answer.size(); index++) {
		printf("%d ", answer[index]);
	}
	printf("\n");*/

	return answer;
}
