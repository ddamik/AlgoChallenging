#include <cstdio>
using namespace std;

int que[2222];
int front = -1, rear = 0;

int visited[2222];
int dirX[2] = { -1,0 };

int main() {

	int s;
	scanf("%d", &s);

	que[rear++] = 1;
	visited[1] = 1;
	
	int x, xx;
	while (front != rear) {
		x = que[++front];
		if (x == s) break;
		if (x == 0) continue;

		for (int i = 0; i < 2; i++) {
			if (i == 1) {
				xx = x * 2;
				if (visited[xx] == 0 || (visited[xx] > visited[x] + 2)) {
					que[rear++] = xx;
					visited[xx] = visited[x] + 2;
				}
			}
			else {
				xx = x - 1;
				if (visited[xx] == 0 || (visited[xx] > visited[x] + 1)) {
					que[rear++] = xx;
					visited[xx] = visited[x] + 1;
				}
			}
		}
	}

	printf("%d", visited[s]);
	return 0;
}