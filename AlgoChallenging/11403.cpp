#include <cstdio>
using namespace std;

int n;
int map[111][111];
int result[111][111];

void dfs(int cur) {
	
	for (int i = 1; i < n; i++) {
		if (map[cur][i] == 1) {
			
		}
	}
}

int main() {
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &map[i][j]);


	return 0;
}