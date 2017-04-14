#include <cstdio>
#include <algorithm>
using namespace std;

int map[22][22];
int alpha[30];
char alphabet;
int r, c, x, y, xx, yy;
int maxLength = 0;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

void dfs(int x, int y, int length) {
	
	maxLength = max(maxLength, length);
	alpha[map[x][y] - 'A']++;
	
	for (int i = 0; i < 4; i++) {
		xx = x + dirX[i];
		yy = y + dirY[i];

		if (xx < 1 || yy < 1 || xx > r || yy > c) continue;
		if (alpha[map[xx][yy] - 'A'] > 0) continue;
		dfs(xx, yy, length + 1);
		
	}
	alpha[map[x][y]- 'A']--;
	return;
}


int main() {

	scanf("%d %d", &r, &c);
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			scanf("\n%1c", &map[i][j]);
		}
	}
	dfs(1, 1, 1);	
	printf("%d", maxLength);
	return 0;
}