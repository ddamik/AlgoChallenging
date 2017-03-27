#include <cstdio>
#include <queue>
using namespace std;

int main() {

	//	1. 2<= n, m <=100
	//	2. 1: 이동칸 / 0: 이동불가
	//	3. 1,1부터 n,m 까지의 최소


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