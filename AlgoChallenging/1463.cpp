#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> P;
int main() {

	queue<P> que;
	int x;
	scanf("%d", &x);
	que.push(P(x, 0));

	int y, yy, visited;
	while (que.size()) {
		y = que.front().first;
		visited = que.front().second;
		que.pop();

		if (y == 1) {
			printf("%d", visited);
			break;
		}

		if (y % 3 == 0) que.push(P(y / 3, visited + 1));
		if (y % 2 == 0) que.push(P(y / 2, visited + 1));
		if (y - 1 > 0) que.push(P(y - 1, visited + 1));
		
	}
	return 0;
}