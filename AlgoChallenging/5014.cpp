#include <cstdio>
#include <queue>
using namespace std;

int visited[10000001];
int dirX[2];

int main() {

	int f, s, g, u, d;
	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);

	dirX[0] = u;
	dirX[1] = -d;

	queue<int> que;
	que.push(s);
	visited[s] = 1;

	int x, xx, result;
	while (que.size()) {
		x = que.front();
		que.pop();

		for (int i = 0; i < 2; i++) {
			xx = x + dirX[i];

			if (xx<1 || xx>f) continue;
			if (visited[xx] == 0 || visited[xx] > visited[x] + 1) {
				que.push(xx);
				visited[xx] = visited[x] + 1;
			}
		}
	}

	if (visited[g] == 0) printf("use the stairs");
	else printf("%d", visited[g]-1);
	return 0;
}