#include <cstdio>
#include <queue>
using namespace std;

int check[10001] = { 0, };
int visited[10001];

int main() {

	int a, b, n;
	scanf("%d", &n);

	int count = 1;
	int x, xx;

	for (int i = 2; i <= 10000; i++) {
		if (check[i] == 0) {
			for (int j = i*i; j <= 10000; j += i) {
				check[j] = 1;
			}
		}
	}


	while (n--) {
		scanf("%d %d", &a, &b);

		queue<int> que;
		que.push(a);
		visited[a] = 1;

		while (que.size()) {
			x = que.front();
			que.pop();
			if (x == b) break;
			for (int i = 1; i <= 1000; i = i * 10) {
				for (int j = 0; j <= 9; j++) {
					
					if (i == 1) xx = (x / 10) * 10 + (j * 1);
					else if (i == 10) xx = (x / 100) * 100 + (j*i) + (x % 10);
					else if (i == 100) xx = (x / 1000) * 1000 + (j*i) + (x % 100);
					else if (i == 1000) xx = (x % 1000) + (j*i);

					if (xx < 1000 || xx > 10000) continue;
					if (check[xx] == 1) continue;

					if (visited[xx] == 0 || (visited[xx] > visited[x] + 1)) {
						que.push(xx);
						visited[xx] = visited[x] + 1;
					}
				}
			}
		}
		printf("%d\n", visited[b] - 1);
		for (int i = 1; i <= 10000; i++) visited[i] = 0;
	}
	return 0;
}