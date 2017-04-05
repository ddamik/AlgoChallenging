#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int map[33][33] = { 0, };
int visited[33][33] = { 0, };
int result[33] = { 0, };

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int n;
int xx, yy;

int dfs(int x, int y, int num) {
	map[x][y] = 0;
	num++;

	for (int i = 0; i < 4; i++) {
		xx = x + dirX[i];
		yy = y + dirY[i];

		if (xx < 1 || yy < 1 || xx > n || yy > n || map[xx][yy] == 0) continue;
		else num = dfs(xx, yy, num);
	}

	return num;
}


int main() {

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}


	int num = 0;
	int totalCount = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 1) {
				totalCount++;
				result[++num] = dfs(i, j, 0);
			}
		}
	}

	int tmp = 0;
	for (int i = 1; i <= totalCount; i++) {
		for (int j = 1; j <= totalCount - 1; j++) {
			if (result[j] > result[j + 1]) {
				tmp = result[j + 1];
				result[j + 1] = result[j];
				result[j] = tmp;
			}
		}
	}

	printf("%d\n", totalCount);
	for (int i = 1; i <= totalCount; i++) printf("%d\n", result[i]);
	return 0;
}