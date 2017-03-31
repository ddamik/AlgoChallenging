#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

typedef pair<int, int> P;

int map[1001][1001] = { 0, };
int visited[1001][1001] = { 0, };

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	queue<P> que;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
			if (map[i][j] == 1) {
				que.push(P(i, j));
				visited[i][j] = 1;
			}
		}
	}

	if (que.size() == 0) printf("%d", 0);
	else {
		int x, y, xx, yy;
		while (que.size() > 0) {
			x = que.front().first;
			y = que.front().second;
			que.pop();

			for (int i = 0; i < 4; i++) {
				xx = x + dirX[i];
				yy = y + dirY[i];

				if (xx < 0 || yy < 0 || xx > n || yy > m) continue;
				if (map[xx][yy] == 1 || map[xx][yy] == -1) continue;
				if (visited[xx][yy] == 0 || visited[xx][yy] > visited[x][y] + 1) {
					que.push(P(xx, yy));
					visited[xx][yy] = visited[x][y] + 1;
				}
			}
		}		

		int result = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (visited[i][j] == 0) {
					result = 0;
					break;
				}
				else result = max(result, visited[i][j]);
			}
		}
		printf("%d", result - 1);
	}
		
	
	return 0;
}