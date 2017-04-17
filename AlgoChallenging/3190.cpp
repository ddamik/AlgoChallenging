#include <cstdio>
#include <queue>
using namespace std;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };
int dir[4][2] = {
	{3, 2},	// ���������� ���ٰ� ����(����), ������(�Ʒ�)
	{1, 0},	//	�������� ���ٰ� ����(����), ������(������)
	{2, 3},	//	�������� ���ٰ� ����(�Ʒ�), ������(����)
	{0, 1}	//	�Ʒ������� ���ٰ� ����(������), ������(����)
};

int map[111][111];
int visited[111][111];

typedef pair<int, int> P;
int main() {

	//	����� ������ �� �� ���̰� �����.
	//	���� �ε�ġ�ų� �ڱ� �ڽ��̶� �ε�ġ�� ������ ����.
	//	�����¿�� ��
	//	���� (1, 1) ���̴� 1, �� ó������ ����������
	
	//	�����̸� �÷� �Ӹ��� ����ĭ����
	//	�̵��� ĭ�� ����� ������ �״��
	//	�̵��� ĭ�� ����� ������ ������ �����.

	//	n, k(���)
	//	1, 1���� ����� ����, K���� ��ġ�� �־���.
	
	//	L ���� �� ����
	//	X�� ��, L, D(������)

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
		//	queue �� �Ű����� ��ġ�� �ִ´�.
		//	visited = 1
		//	�ش� ĭ�� ����� ������ continue
		//	�ش� ĭ�� ����� ������ pop
		//	pop �ϸ鼭 visited = 0
		//	visited == 1 || map[xx][yy] == # �̸� ���� queue.size()

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