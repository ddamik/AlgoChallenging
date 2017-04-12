#include <cstdio>
using namespace std;

int count = 0;
void dfs(int n, int sum) {
	if (sum > n) return;
	if (sum == n) {
		count++;
		return;
	}
	for (int i = 1; i <= 3; i++) {
		dfs(n, sum + i);
	}

	return;
}
int main() {

	int t; scanf("%d", &t);
	int num;
	while (t--) {
		scanf("%d", &num);
		dfs(num, 0);
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}