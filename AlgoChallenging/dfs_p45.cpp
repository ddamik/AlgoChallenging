#include <cstdio>
using namespace std;

int n, k;
int a[20];

bool dfs(int index, int sum) {

	if (index == n) return sum == k;

	if (dfs(index + 1, sum)) return true;
	if (dfs(index + 1, sum + a[index])) return true;

	return false;
}


int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	scanf("%d", &k);

	if (dfs(0, 0)) printf("YES");
	else printf("NO");
	return 0;
}