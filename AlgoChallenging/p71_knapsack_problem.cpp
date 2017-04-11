#include <cstdio>
#include <algorithm>
using namespace std;

int dp[4][4] = { 0, };
int n=4, W=5;
int w[4] = { 2,1,3,2 };
int v[4] = { 3,2,4,2 };

int rec(int i, int j) {
	if (dp[i][j] >= 0) {
		return dp[i][j];
	}

	int res;
	if (i == n) res = 0;
	else if (j < w[i]) res = rec(i + 1, j);
	else res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
	return dp[i][j] = res;
}

int main() {

	memset(dp, -1, sizeof(dp));
	printf("%d", rec(0, W));
	return 0;
}