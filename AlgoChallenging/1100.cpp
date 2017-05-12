#include <cstdio>
using namespace std;

char map[10][10];
int main() {

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("\n%1c", &map[i][j]);
		}
	}

	//	Â¦¼öÀÏ¶© count == 0
	//	È¦¼öÀÏ¶© count == 1

	int row = 0;
	int count = 0;
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((row % 2 == 0) && (count % 2 == 0) && (map[i][j] == 'F')) result++;
			if ((row % 2 == 1) && (count % 2 == 1) && (map[i][j] == 'F')) result++;
			count++;
		}
		row++;
	}

	printf("%d", result);
	return 0;
}