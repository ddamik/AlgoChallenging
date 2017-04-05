#include <cstdio>
#include <queue>
using namespace std;

int map[55][55] = { 0, };
int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

typedef pair<int, int> P;

int main() {

	int t;
	scanf("%d", &t);

	int m, n, k;
	int tx, ty;
	queue<P> que;

	while (t--) {

		scanf("%d %d %d", &m, &n, &k);
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				map[i][j] = 0;


		for (int i = 0; i < k; i++) {
			scanf("%d %d", &tx, &ty);
			map[tx][ty] = 1;
			que.push(P(tx, ty));
		}

		int result = 0;
		int x, y;
		while (que.size()) {
			x = que.front().first;
			y = que.front().second;
			que.pop();
			

		}
		printf("%d\n", result);
	}
	return 0;
}