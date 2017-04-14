#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int map[101][101];
int visited[101][101];
int searchVisited[101][101][101];
typedef pair<int, int> P;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

int minLength = 111111;
int n, x, y, xx, yy;

int main() {

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	queue<P> que;
	queue<P> searchQue[100];
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] != 0 && visited[i][j] == 0) {
				count++;
				que.push(P(i, j));
				visited[i][j] = 1;
				map[i][j] = count;

				while (que.size()) {
					x = que.front().first;
					y = que.front().second;
					que.pop();

					searchQue[count].push(P(x, y));
					searchVisited[count][x][y] = 1;

					for (int i = 0; i < 4; i++) {
						xx = x + dirX[i];
						yy = y + dirY[i];

						if (xx < 1 || yy < 1 || xx > n || yy > n) continue;
						if (map[xx][yy] == 0 || visited[xx][yy] != 0) continue;
						que.push(P(xx, yy));
						visited[xx][yy] = 1;
						map[xx][yy] = count;
					}
				}
			}
		}
	}
	
	for (int island = 1; island <= count; island++) {
		
		while (searchQue[island].size()) {
			x = searchQue[island].front().first;
			y = searchQue[island].front().second;
			searchQue[island].pop();

			for (int i = 0; i < 4; i++) {
				xx = x + dirX[i];
				yy = y + dirY[i];

				if (xx < 1 || yy < 1 || xx > n || yy > n) continue;
				if (map[xx][yy] != 0 && map[xx][yy] != island) {
					minLength = min(minLength, searchVisited[island][x][y]);
					continue;
				}
				if ((map[xx][yy] != island) && (searchVisited[island][xx][yy] == 0 || searchVisited[island][xx][yy] > searchVisited[island][x][y] + 1)) {
					searchQue[island].push(P(xx, yy));
					searchVisited[island][xx][yy] = searchVisited[island][x][y] + 1;
				}
			}
		}
	}
	  
	printf("%d", minLength-1);
	return 0;
}