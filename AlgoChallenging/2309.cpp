#include <cstdio>
#include <algorithm>
using namespace std;

int little[9] = { 0, };
int visited[9] = { 0, };
int result[7] = { 0, };

int r_index = 0;
bool dfs(int index, int sum, int count) {
	 
	if (index == 10) return false;
	if (count == 7 && sum == 100) {
		for (int i = 0; i < 9; i++) {
			if (visited[i] == 1) result[r_index++] = little[i];
		}
		sort(result, result + 7);
		for (int i = 0; i < 7; i++) printf("%d\n", result[i]);
		exit(0);
	}

	visited[index] = 1;
	if (dfs(index + 1, sum + little[index], count + 1)) return true;

	visited[index] = 0;
	if (dfs(index + 1, sum, count)) return true;
	return false;
}

int main() {

	for (int i = 0; i < 9; i++) scanf("%d", &little[i]);
	dfs(0, 0, 0);
	return 0;
}