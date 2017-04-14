#include <cstdio>
#include <queue>
using namespace std;

int map[1001][1001];
int visited[1001];
int n, m, v;

void dfs(int x) {
	printf("%d ", x);

	for (int i = 1; i <= n; i++) {
		if (visited[i] == 1 || map[x][i] == 0) continue;
		visited[i] = 1;
		dfs(i);
	}
}

void bfs() {
	
	queue<int> que;
	que.push(v);
	visited[v] = 1;
	
	int x;
	while (que.size()) {
		x = que.front();
		que.pop();
		printf("%d ", x);

		for (int i = 1; i <= n; i++) {
			if (visited[i] == 1 || map[x][i] == 0) continue;
			que.push(i);
			visited[i] = 1;
		}
	}
}

int main() {

	scanf("%d %d %d", &n, &m, &v);

	int a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[b][a] = 1;
	}

	visited[v] = 1;
	dfs(v);

	printf("\n");
	for (int i = 1; i <= n; i++) visited[i] = 0;
	bfs();
	return 0;
}