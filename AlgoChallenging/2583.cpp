#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int m, n, k;
int map[111][111];
int visited[111][111];

int result[111111];
typedef pair<int, int> P;

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int main() {

	scanf("%d %d %d", &m, &n, &k);
	
	int sx, sy, ex, ey;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &sy, &sx, &ey, &ex);
		for (int i = sx; i < ex; i++) {
			for (int j = sy; j < ey; j++) {
				map[i][j] = 1;
			}
		}
	}

	queue<P> que;
	int x, y, xx, yy;
	int index = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 0 && visited[i][j] == 0) {
				++index;				
				que.push(P(i, j));
				visited[i][j] = index;

				while (que.size()) {
					x = que.front().first;
					y = que.front().second;
					que.pop();

					for (int l = 0; l < 4; l++) {
						xx = x + dirX[l];
						yy = y + dirY[l];

						if (xx<0 || yy<0 || xx>=m || yy>=n) continue;
						if (map[xx][yy] == 0 && visited[xx][yy] == 0) {
							que.push(P(xx, yy));
							visited[xx][yy] = index;
						}
					}
				}
			}
		}
	}


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) continue;
			result[visited[i][j]]++;
		}		
	}

	sort(result, result + (index+1));
	printf("%d\n", index);
	for (int i = 1; i <= index; i++) printf("%d ", result[i]);
	return 0;
}
