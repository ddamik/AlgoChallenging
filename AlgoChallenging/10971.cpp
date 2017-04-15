#include <cstdio>
#include <algorithm>
using namespace std;

int map[15][15];
int visited[11];
int result[11];
int minValue = 9999999;

int n;
void dfs(int cur, int visitCount, int sum) {
	
	if (sum > minValue) return;
	if (visitCount == n) {
		if (map[cur][1] != 0) {
			minValue = min(minValue, sum + map[cur][1]);
		}
		return;
	}

	for (int i = 2; i <= n; i++) {
		if (i == cur) continue;
		if (map[cur][i] != 0 && visited[i] == 0) {
			visited[i] = 1;
			dfs(i, visitCount + 1, sum + map[cur][i]);
		}
	}
}

int main() {

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 11; j++) visited[j] = 0;
		dfs(1, i, 0);
	}

	printf("%d\n", minValue);
	return 0;
}