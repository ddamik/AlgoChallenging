#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int m, n, k;
int map[111][111];
int visited[111][111];

int main() {

	scanf("%d %d %d", &m, &n, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	int sx, sy, ex, ey;
	int tmp;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
		tmp = sx;
		sx = sy;
		sy = sx;

		int lx = abs(ex - sx);
		int ly = abs(ey - sy);

	}
	return 0;
}
