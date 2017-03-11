#include <cstdio>
using namespace std;


// N x M
//	�� ������ ���� 8���� ������ ������, ���� ����Ǿ� �ִٰ� ����
//	�ϳ��� �� �����̷� ����
//	���� �� ���� �� ������?
//	\ ������, . ������


char map[100][100];
int n, m;
int xx, yy;

void dfs(int x, int y) {

	//	�ش� ĭ�� .�� ����
	//	8���� �˻�
	//	\�� �ƴϸ� dfs
	
	map[x][y] = '.';
	for (int i = -1; i <= 1; i++) {
		for(int j = -1; j <= 1; j++) {
			xx = x + i;
			yy = y + j;
			if (0 <= xx && xx <= n && 0 <= yy && yy <= m && map[xx][yy] == '\\') {
				dfs(xx, yy);
			}
		}
	}
}

int main() {

	

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %1c", &map[i][j]);			
		}
	}


	//	for���� ���� .�� ã��
	//	result++
	//	dfs(i,j);

	int result = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '\\') {
				result++;
				dfs(i, j);
			}
		}
	}
	
	printf("%d", result);
	return 0;
}