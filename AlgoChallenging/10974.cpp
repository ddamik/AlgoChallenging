#include <cstdio>
using namespace std;

int num[9];
int visited[9];
int n;

void dfs(int index) {
	if (index == n+1) {
		for (int i = 1; i <= n; i++) printf("%d ", num[i]);
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			num[index] = i;
			visited[i] = 1;
			dfs(index + 1);
			visited[i] = 0;
		}
	}
	return;
}
int main() {
	
	scanf("%d", &n);
	dfs(1);
	return 0;
}