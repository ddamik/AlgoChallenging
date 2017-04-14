#include <cstdio>
#include <queue>
using namespace std;

int map[1001][1001];
int visited[1001];

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int u, v;
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &u, &v);
		map[u][v] = 1;
		map[v][u] = 1;
	}

	queue<int> que;
	int x, result = 0;

	
	for (int i = 1; i <= n; i++) {
		if (visited[i] == 1) continue;
		que.push(i);
		visited[i] = 1;
		result++;

		while (que.size()) {
			x = que.front();
			que.pop();

			for (int i = 1; i <= n; i++) {
				if (visited[i] == 0 && map[x][i] == 1) {
					que.push(i);
					visited[i] = 1;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}