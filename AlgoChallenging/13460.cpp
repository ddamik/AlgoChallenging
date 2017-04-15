#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

char map[15][15];
int visited[15][15];

int n, m;
int bx, by, bxx, byy, rx, ry, rxx, ryy, hx, hy;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0, };
 
int dir[1001];
int index = 0;

bool result = true;
int lastDir = -1;
int currentDir = 0;
int dirCount = 0;
int minValue = 99999;

void rDfs(int rx, int ry, int bx, int by) {

	if (rx == hx && ry == hy) {
		dirCount = 0;
		for(int i=0;i<index;i++){
			currentDir = dir[i];
			if (currentDir != lastDir) dirCount++;
			lastDir = currentDir;
		}
		while (true) {
			bxx = bx + dirX[lastDir];
			byy = by + dirY[lastDir];

			if (bxx == hx && byy == hy) {
				result = false;
				break;
			}
			if (bxx < 1 || byy < 1 || bxx >(n - 1) || byy >(m - 1) || map[bxx][byy] == '#') break;
		}
		minValue = min(dirCount, minValue);
		return;
	}

	for (int i = 0; i < 4; i++) {
		rxx = rx + dirX[i];
		ryy = ry + dirY[i];

		bxx = bx + dirX[i];
		byy = by + dirY[i];

		if (rxx == bx && ryy == by && map[bxx][byy] == '#') continue;
		if (map[bxx][byy] == 'O') continue;
		if (map[bxx][byy] == '#' || bxx < 1 || byy < 1 || bxx >(n - 1) || byy > (m - 1) || ((bxx == rx && byy == ry) && map[rxx][ryy] == '#')) {
			bxx = bx;
			byy = by;
		}
		if (rxx < 1 || ryy < 1 || rxx > (n - 1) || ryy > (m - 1) || map[rxx][ryy] == '#') continue;

		if (visited[rxx][ryy] == 0 || (visited[rxx][ryy] >= visited[rx][ry] + 1)) {
			visited[rxx][ryy] = visited[rx][ry] + 1;
			dir[index++] = i;
			rDfs(rxx, ryy, bxx, byy);
			dir[index--];
		}
	}
}

int main() {

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("\n%1c", &map[i][j]);
			if (map[i][j] == 'R') {
				rx = i;
				ry = j;
				visited[i][j] = 1;
			}
			if (map[i][j] == 'B') {
				bx = i;
				by = j;
			}
			if (map[i][j] == 'O') {
				hx = i;
				hy = j;
			}
		}
	}

	rDfs(rx, ry, bx, by);
	if (!result) printf("%d", -1);
	else if (minValue > 10) printf("%d", -1);
	else printf("%d", minValue);
	return 0;
}