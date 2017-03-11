#include <cstdio>
using namespace std;


// N x M
//	물 웅덩이 주위 8곳에 근접해 있으면, 서로 연결되어 있다고 간주
//	하나의 물 웅덩이로 간주
//	전부 몇 개의 물 웅덩이?
//	\ 웅덩이, . 마른땅


char map[100][100];
int n, m;
int xx, yy;

void dfs(int x, int y) {

	//	해당 칸을 .로 변경
	//	8군데 검색
	//	\가 아니면 dfs
	
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


	//	for문을 돌아 .를 찾음
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