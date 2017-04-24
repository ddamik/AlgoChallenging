#include <cstdio>
#include <algorithm>
using namespace std;

int visited[10001];

int main() {
	
	int n, m;
	scanf("%d", &m);
	scanf("%d", &n);

	visited[0] = 1;
	visited[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (visited[i] == 0) {
			for (int j = i+i; j <= n; j = j + i) visited[j] = 1;
		}
	}

	int sum = 0;
	int minValue = 100001;
	for (int i = m; i <= n; i++) {
		if (visited[i] == 0) {
			minValue = min(i, minValue);
			sum += i;
		}
	}

	if (sum == 0) printf("%d", -1);
	else printf("%d\n%d", sum, minValue);
	return 0;
}