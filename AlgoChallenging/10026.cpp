#include <cstdio>
#include <queue>
using namespace std;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

int map[111][111];
int rgbMap[111][111];

int visited[111][111];
int rgbVisited[111][111];

typedef pair<int, int> P;
int main() {

	int n;
	scanf("%d", &n);

	char tmp;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("\n%1c", &tmp);
			map[i][j] = tmp;
			if (tmp == 'R') tmp = 'G';
			rgbMap[i][j] = tmp;
		}
	}

	int result = 0, rgbResult = 0;
	queue<P> que;
	queue<P> rgbQue;

	char word, rgbWord;
	int x, y, xx, yy;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			
			//	map
			if (visited[i][j] == 0) {
				result++;
				word = map[i][j];

				que.push(P(i, j));
				while (que.size()) {
					x = que.front().first;
					y = que.front().second;
					que.pop();

					for (int i = 0; i < 4; i++) {
						xx = x + dirX[i];
						yy = y + dirY[i];

						if (xx<1 || yy<1 || xx>n || yy>n) continue;
						if (visited[xx][yy] == 0 && map[xx][yy] == word) {
							que.push(P(xx, yy));
							visited[xx][yy] = 1;
						}
					}	//	for
				}	//	while
			}

			//	rgb map
			if (rgbVisited[i][j] == 0) {
				rgbResult++;
				rgbWord = rgbMap[i][j];

				rgbQue.push(P(i, j));
				while (rgbQue.size()) {
					x = rgbQue.front().first;
					y = rgbQue.front().second;
					rgbQue.pop();

					for (int i = 0; i < 4; i++) {
						xx = x + dirX[i];
						yy = y + dirY[i];

						if (xx<1 || yy<1 || xx>n || yy>n) continue;
						if (rgbVisited[xx][yy] == 0 && rgbMap[xx][yy] == rgbWord) {
							rgbQue.push(P(xx, yy));
							rgbVisited[xx][yy] = 1;
						}
					}
				}
			}
		}
	}

	printf("%d %d", result, rgbResult);
	return 0;
}