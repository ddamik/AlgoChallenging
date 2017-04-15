#include <cstdio>
using namespace std;

int color[1001];
int map[1001][1001];
int n;

bool dfs(int index, int num) {
	
	color[index] = num;
	for (int i = 1; i <= n; i++) {
		if (map[index][i] == 0) continue;
		if (color[i] == num) return false;
		if (color[i] == 0 && !dfs(i, -num)) return false;
	}
	return true;	
}


int main() {

	int t; scanf("%d", &t);

	for (int i = 1; i <= t; i++) {

		int l;
		scanf("%d", &n);
		scanf("%d", &l);

		int x, y;
		for (int i = 1; i <= l; i++) {
			scanf("%d %d", &x, &y);
			map[x][y] = 1;
		//	map[y][x] = 1;
		}

		bool result = true;
		for (int i = 1; i <= n; i++) {
			if (color[i] == 0) {
				result = dfs(i, 1);
				if (result) break;
			}
		}

		for (int i = 1; i <= l; i++) {
			for (int j = 1; j <= l; j++) {
				map[i][j] = 0;
			}
			color[i] = 0;
		}

		if (result) printf("%d\n", 1);
		else printf("%d\n", 0);
	}
	 
	return 0;
}