#include <cstdio>
#include <queue>
using namespace std;

int dirX[8] = { -1,-2,-2,-1,1,2,2,1 };
int dirY[8] = { -2,-1,1,2,2,1,-1,-2 };

int map[333][333];
int visited[333][333];

typedef pair<int, int> P;

int main() {

	
	int n;
	int t;

	scanf("%d", &t);
	
	while (t--) {
	
		queue<P> que;
		scanf("%d", &n);

		int x, y, xx, yy, nx, ny, dx, dy, result = 0;
		scanf("%d %d", &nx, &ny);
		scanf("%d %d", &dx, &dy);

		que.push(P(nx, ny));
		visited[nx][ny] = 1;

		while (que.size()) {
			x = que.front().first;
			y = que.front().second;
			que.pop();

			if (x == dx && y == dy) {
				result = visited[x][y] - 1;

			}

			for (int i = 0; i < 8; i++) {
				xx = x + dirX[i];
				yy = y + dirY[i];

				if (xx<0 || yy<0 || xx >= n || yy >= n) continue;
				if (visited[xx][yy] == 0 || visited[xx][yy] > visited[x][y] + 1) {
					que.push(P(xx, yy));
					visited[xx][yy] = visited[x][y] + 1;
				}
			}
		}

		printf("%d\n", result);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				visited[i][j] = 0;
	}
	
	return 0;
}