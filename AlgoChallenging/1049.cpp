#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int main() {


	int n, m;
	scanf("%d %d", &n, &m);

	queue<P> que;
	int a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		que.push(P(a, b));
	}

	int bResult = 2147483647;
	int result = 2147483647;
	int head, remain;

	head = n / 6;
	remain = n % 6;

	int set, indivi;
	while (que.size()) {
		set = que.front().first;
		indivi = que.front().second;
		que.pop();

		bResult = head * min(set, 6 * indivi);
		bResult += min(set, remain*indivi);

		result = min(result, bResult);
	}

	printf("%d", result);
	return 0;
}