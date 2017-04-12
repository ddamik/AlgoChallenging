#include <cstdio>
using namespace std;

int dir[7][5] = { 
	{0,0,0,0,0},
	{6,3,4,2,5},
	{5,3,4,6,1}, 
	{4,6,1,2,5}, 
	{3,1,6,2,5}, 
	{2,3,4,1,6}, 
	{1,3,4,5,2} };
/*
int dir[7][5] = {
	{ 0,0,0,0,0 },
	{ 6,3,4,2,5 },
	{ 5,3,4,6,1 },
	{ 4,2,5,6,4 },
	{ 3,5,2,1,6 },
	{ 2,3,4,1,6 },
	{ 1,3,4,5,2 } };
*/
int dice[7] = { 0,0,0,0,0,0,0 };
int board[21][21];
int result[1001];
int order[1001];

int dirX[5] = { 0,0,0,-1,1 };
int dirY[5] = { 0,1,-1,0,0 };
int main() {
	
	int n, m, x, y, k;
	scanf("%d %d %d %d %d", &n, &m, &x, &y, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	for (int i = 0; i < k; i++) scanf("%d", &order[i]);

	int current_num = 1;	// ¹Ù´Ú
	for(int i=0;i<k;i++){

		x = x + dirX[order[i]];
		y = y + dirY[order[i]];
		current_num = dir[current_num][order[i]];
		
		if (board[x][y] == 0) board[x][y] = dice[current_num];
		else {
			dice[current_num] = board[x][y];
			board[x][y] = 0;
		}

		printf("x = %d / y = %d / current_num = %d / roof = %d\n", x, y, current_num, dir[current_num][0]);
		for (int j = 1; j <= 6; j++) printf("%d ", dice[j]);
		printf("root = %d\n\n", dice[dir[current_num][0]]);
		//printf("%d\n", dice[dir[current_num][0]]);
	}
	
	return 0;
}