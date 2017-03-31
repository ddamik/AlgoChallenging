#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int map[26][26] = { 0, };
int visited[26][26] = { 0, };
int result[26] = { 0, };

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

int xx, yy;

void dfs(int x, int y, int res) {
	map[x][y] = 0;
	visited[x][y] = res;
	result[res]++;

	for (int i = 0; i < 4; i++) {
		xx = x + dirX[i];
		yy = y + dirY[i];

		if (0 <= xx && xx < n && 0 <= yy && yy < n) continue;
		if (map[xx][yy] == 0) continue;
		dfs(xx, yy, res);
	}	
}
int main() {

	int n;
	scanf("%d", &n);

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);			
		}
	}
	
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			if (map[i][j] == 1) dfs(i, j, ++res);
	
	
	sort(result, result + res);
	printf("%d\n", res);
	for (int i = 1; i <= res; i++) printf("%d\n", result[i]);
	return 0;
}