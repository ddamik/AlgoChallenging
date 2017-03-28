#include <cstdio>
#include <queue>
using namespace std;

int arr[100001];
int dir[3] = { -1,0,1 };

int main() {
	 
	int n, k;
	scanf("%d %d", &n, &k);
 
	queue<int> que;
	que.push(n);

	int x, xx;
	while (que.size() > 0) {
		x = que.front();
		que.pop();
		for (int i = 0; i < 3; i++) {
			if (dir[i] == 0) xx = x * 2;
			else xx = x + dir[i];

			if (xx < 0 || xx > 100001) continue;
			if (arr[xx] == 0 || arr[xx] > arr[x] + 1) {
				que.push(xx);
				arr[xx] = arr[x] + 1;
			}
		}
	}

	printf("%d", arr[k]);
	return 0;
}