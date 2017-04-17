#include <cstdio>
#include <queue>
using namespace std;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };
int dir[4][2] = {
	{3, 2},	// 오른쪽으로 가다가 왼쪽(위로), 오른쪽(아래)
	{1, 0},	//	위쪽으로 가다가 왼쪽(왼쪽), 오른쪽(오른쪽)
	{2, 3},	//	왼족으로 가다가 왼쪽(아래), 오른쪽(위로)
	{0, 1}	//	아래쪽으로 가다가 왼쪽(오른쪽), 오른쪽(왼쪽)
};

int map[111][111];
int visited[111][111];

typedef pair<int, int> P;
int main() {

	//	사과를 먹으면 뱀 몸 길이가 길어짐.
	//	벽에 부딪치거나 자기 자신이랑 부딪치면 게임이 끝남.
	//	상하좌우는 벽
	//	뱀은 (1, 1) 길이는 1, 맨 처음에는 오른쪽으로
	
	//	몸길이를 늘려 머리를 다음칸으로
	//	이동한 칸에 사과가 있으면 그대로
	//	이동한 칸에 사과가 없으면 꼬리를 비워줌.

	//	n, k(사과)
	//	1, 1에는 사과가 없고, K개의 위치가 주어짐.
	
	//	L 개의 뱀 정보
	//	X초 후, L, D(오른쪽)

	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	
	int x, y;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d %d", &x, &y);
			map[x][y] = 1;
		}
	}

	int l;
	scanf("%d", &l);

	//	D: 3, L: 11
	queue<P> dirQue;
	int second;
	char direction;
	for (int i = 1; i <= l; i++) {
		scanf("%d %c", &second, &direction);
		dirQue.push(P(second, direction - 'A'));
	}

	bool result = false;
	int resultCount = 0;
	int dirValue = 0;
	int xx, yy;
	queue<P> que;
	que.push(P(1, 1));
	visited[1][1] = 1;
	while (que.size()) {
		//	queue 에 옮겨지는 위치를 넣는다.
		//	visited = 1
		//	해당 칸에 사과가 있으면 continue
		//	해당 칸에 사과가 없으면 pop
		//	pop 하면서 visited = 0
		//	visited == 1 || map[xx][yy] == # 이면 게임 queue.size()

		x = que.front().first;
		y = que.front().second;
		resultCount++;

		for (int i = 0; i < dirQue.front().first; i++) {
			xx = x + dirX[dirValue];
			yy = y + dirY[dirValue];

			printf("[ xx %d ] [ yy %d ] \n", xx, yy);

			if (map[xx][yy] == 1) {
				que.push(P(xx, yy));
				visited[xx][yy] = 1;
			}
			if (map[xx][yy] == 0) {
				que.pop();
				visited[x][y] = 1;
			}
			if (xx < 1 || yy < 1 || xx > n || yy > n || visited[xx][yy] == 1) {
				result = true;
				break;
			}
		}
		if (result) break;
		if (dirQue.front().second == 3) dirValue = dir[dirValue][2];
		else dirValue = dir[dirValue][1];
		dirQue.pop();
	}

	printf("%d", resultCount);
	return 0;
}