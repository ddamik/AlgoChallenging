#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int map[1001][1001] = { 0, };
int visited[1001][1001] = { 0, };

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	int zeroCount = 0;
	int oneCount = 0;
	queue<P> que;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				que.push(P(i, j));
				visited[i][j] = 1;
			}
			if (map[i][j] == 0) zeroCount++;
			if (map[i][j] == 1) oneCount++;
		}
	}


	if (oneCount == 0) {
		printf("%d", -1);
		return 0;
	}

	if (zeroCount == 0) {
		printf("%d", zeroCount);
		return 0;
	}

	int x, y, xx, yy;
	while (que.size()) {
		x = que.front().first;
		y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++) {
			xx = x + dirX[i];
			yy = y + dirY[i];

			if (xx < 1 || yy < 1 || xx > n || yy > m) continue;
			else if (map[xx][yy] == -1) continue;
			else if( visited[xx][yy] == 0 || visited[xx][yy] > visited[x][y] + 1 ){
				que.push(P(xx, yy));
				visited[xx][yy] = visited[x][y] + 1;
			}
		}
	}

	int resultCount = 0;
	int minValue = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (map[i][j] == 0 && visited[i][j] == 0) resultCount++;
			minValue = max(minValue, visited[i][j]);
		}
	}

	if (resultCount == 0) printf("%d", minValue - 1);
	else printf("%d", -1);

	return 0;
}