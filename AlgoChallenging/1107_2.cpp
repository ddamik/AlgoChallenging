#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int num[10];
int button[10];
int visited[1000001];

typedef pair<int, int> P;
int main() {

	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);

	int tmp;
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		num[tmp]++;
	}

	queue<P> que;
	//	button
	for (int i = 0; i < 10; i++) {
		if (num[i] > 0) continue;
		button[i] = 1;
		que.push(P(i, 1));
	}

	int x, xx, vValue;
	int minValue = 5000000;
	minValue = min(minValue, abs(n-100));

	while (que.size()) {
		x = que.front().first;
		vValue = que.front().second;
		que.pop();

		minValue = min(minValue, vValue + abs(x - n));
		for (int i = 0; i < 10; i++) {
			xx = x * 10 + i;
			if (button[i] == 0) continue;
			if (xx < 0 || xx > 1000000) continue;
			if (visited[xx] == 0 || (visited[xx] > visited[x] + 1)) {
				visited[xx] = visited[x] + 1;
				que.push(P(xx, vValue + 1));
			}
		}
	}

	printf("%d", minValue);
	return 0;
}