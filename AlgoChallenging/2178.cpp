#include <cstdio>
#include <queue>
using namespace std;

int main() {

	//	1. 2<= n, m <=100
	//	2. 1: �̵�ĭ / 0: �̵��Ұ�
	//	3. 1,1���� n,m ������ �ּ�


	int board[111][111];
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &board[i][j]);
			if (board[i][j] == 1) board[i][j] = 999;
		}
	}


	return 0;
}