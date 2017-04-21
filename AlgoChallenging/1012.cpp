#include <cstdio>
#include <queue>
using namespace std;

int map[55][55];
int visited[55][55];

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

typedef pair<int, int> P;

int main() {

	int n, m, k;
	int x, y, xx, yy;


	scanf("%d %d %d", &n, &m, &k);

	for (int i = 0; i < k; i++) {
		scanf("%d %d", &x, &y);
		map[x][y] = 1;
	}

	queue<P> que;
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 1 && visited[i][j] == 0) {
				que.push(P(i, j));
				visited[i][j] = 1;
				result++;
			}
		}
	}


	while (que.size()) {
		x = que.front().first;
		y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++) {
			xx = x + dirX[i];
			yy = y + dirY[i];

			if (xx < 0 || yy < 0 || xx >= n || yy >= m) continue;
			if (visited[xx][yy] == 0 || (visited[xx][yy] > visited[x][y] + 1)) {
				que.push(P(xx, yy));
				visited[xx][yy] = visited[x][y] + 1;
			}
		}
	}

	printf("%d", result);

	return 0;
}