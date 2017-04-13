#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int visited[1001][1001];
int fireVisited[1001][1001];
char map[1001][1001];

typedef pair<int, int> P;

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int main() {

	queue<P> fireQue;
	queue<P> que;

	int t;
	scanf("%d", &t);

	int w, h;

	while (t--) {
		scanf("%d %d", &w, &h);

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				scanf("\n%1c", &map[i][j]);
				if (map[i][j] == '*') {
					fireQue.push(P(i, j));
					fireVisited[i][j] = 1;
				}
				if (map[i][j] == '@') {
					que.push(P(i, j));
					visited[i][j] = 1;
				}
			}
		}


		int x, y, xx, yy;
		while (fireQue.size()) {
			x = fireQue.front().first;
			y = fireQue.front().second;
			fireQue.pop();

			for (int i = 0; i < 4; i++) {
				xx = x + dirX[i];
				yy = y + dirY[i];

				if (map[xx][yy] == '#') continue;
				if (xx < 0 || yy < 0 || xx >= h || yy >= w) continue;
				if ((fireVisited[xx][yy] > fireVisited[x][y] + 1) || (map[xx][yy] != '#' && fireVisited[xx][yy] == 0)) {
					fireQue.push(P(xx, yy));
					fireVisited[xx][yy] = fireVisited[x][y] + 1;
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

				if (xx < 0 || yy < 0 || xx >= h || yy >= w) continue;
				if (map[xx][yy] == '#' || map[xx][yy] == '*') continue;
				if ((visited[x][y] + 1 >= fireVisited[xx][yy]) && fireVisited[xx][yy] != 0) continue;
				if (visited[xx][yy] == 0 || ((visited[x][y] + 1) < visited[xx][yy])) {
					que.push(P(xx, yy));
					visited[xx][yy] = visited[x][y] + 1;
				}
			}
		}

		int minValue = 9999999;
		for (int i = 0; i < w; i++) {
			if (visited[0][i] != 0) minValue = min(minValue, visited[0][i]);
			if (visited[h - 1][i] != 0) minValue = min(minValue, visited[h - 1][i]);
		}

		for (int i = 0; i < h; i++) {
			if (visited[i][0] != 0) minValue = min(minValue, visited[i][0]);
			if (visited[i][w - 1] != 0) minValue = min(minValue, visited[i][w - 1]);
		}

		if (minValue == 9999999) printf("IMPOSSIBLE\n");
		else printf("%d\n", minValue);

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				fireVisited[i][j] = 0;
				visited[i][j] = 0;
			}
		}
	}
	return 0;
}