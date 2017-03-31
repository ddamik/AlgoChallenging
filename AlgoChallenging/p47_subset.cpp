#include <cstdio>
using namespace std;

const int MAX_N = 10000;
int n, k;
int num[MAX_N];

bool dfs(int i, int sum) {
	if (i == n) return sum == k;
	if (dfs(i + 1, sum + num[i])) return true;
	if (dfs(i + 1, sum)) return true;
	return false;
}

int main() {
	
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	if (dfs(0, 0)) printf("True");
	else printf("False");
	return 0;
}