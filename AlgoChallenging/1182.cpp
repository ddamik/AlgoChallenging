#include <cstdio>
#include <algorithm>
using namespace std;

int n, s;
int result = 0;
int num[22];
int visited[22];
int visitedCount = 0;

void dfs(int index, int sum) {
	
	if (sum > s) return;	
	if (sum == s && visitedCount != 0) {		
		for (int i = 0; i < n; i++) {
			if (visited[i] != 0) printf("[ %d ] ", num[i]);
		}
		printf("\n");
		printf("[ Index %d ] [ Sum %d ] [ S %d ]\n", index, sum, s);
		result++;
	}
	if (index == n) return;

	for (int i = 0; i < n; i++) {
		if (visited[i] == 0) {
			visited[i] = 1;
			visitedCount++;
			dfs(index + 1, sum + num[i]);
			visited[i] = 0;
			visitedCount--;
		}
	}
	return;
}

int main() {

	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);

	sort(num, num + n);

	dfs(0, 0);

	printf("%d", result);
	return 0;
}