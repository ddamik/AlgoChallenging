#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> P;
int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int main() {

	//	1. 2<= n, m <=100
	//	2. 1: 이동칸 / 0: 이동불가
	//	3. 1,1부터 n,m 까지의 최소


	int board[111][111] = { 0, };
	int visited[111][111] = { 0, };
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &board[i][j]);
			if (board[i][j] == 1) board[i][j] = 999;
		}
	}

	queue<P> que;
	que.push(P(1, 1));
	visited[1][1] = 1;

	int x, y, xx, yy;
	while (que.size() > 0) {
		x = que.front().first;
		y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++) {
			xx = x + dirX[i];
			yy = y + dirY[i];

			if (xx < 1 || yy < 1 || xx > n || yy > m) continue;
			if (board[xx][yy] == 0) continue;
			if (visited[xx][yy] == 0 || visited[xx][yy] > visited[x][y] + 1) {
				visited[xx][yy] = visited[x][y] + 1;
				que.push(P(xx, yy));
			}
		}
	}

	printf("%d", visited[n][m]);
	return 0;
}