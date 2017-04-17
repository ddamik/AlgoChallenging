#include <cstdio>
using namespace std;

int n, s;
int result = 0;
int num[22];

void dfs(int index, int sum) {
	
	if (index == n) return;
	if (sum == s) {
		result++;
		return;
	}

	dfs(index + 1, sum + num[index]);
	dfs(index + 1, sum);
	return;
}

int main() {

	scanf("%d %d", &n, &s);
	for (int i = 1; i <= n; i++) scanf("%d", &num[i]);
	dfs(0, 0);

	printf("%d", result);
	return 0;
}