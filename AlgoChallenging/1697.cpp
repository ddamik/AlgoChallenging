#include <cstdio>
#include <queue>
using namespace std;

int visited[100001];
int dir[3] = { -1,0,1 };

int main() {
	 
	int n, k;
	scanf("%d %d", &n, &k);
 
	queue<int> que;
	que.push(n);
	visited[n] = 1;

	int x, xx;
	while (que.size() > 0) {
		x = que.front();
		que.pop();

		if (x == k) break;

		for (int i = 0; i < 3; i++) {
			if (dir[i] == 0) xx = x * 2;
			else xx = x + dir[i];

			if (xx < 0 || xx > 100000) continue;
			if (visited[xx] == 0 || visited[xx] > visited[x] + 1) {
				que.push(xx);
				visited[xx] = visited[x] + 1;
			}
		}
	}

	printf("%d", visited[k]-1);
	return 0;
}