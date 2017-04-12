#include <cstdio>
using namespace std;

int k;
int num[15];
int visited[15];
int result[15];

void dfs(int index) {
	if (index == 6) {
		for (int i = 0; i < index; i++) printf("%d ", result[i]);
		printf("\n");
		return;
	}

	for (int i = 0; i < k; i++) {
		visited[i] = 1;
		result[index] = num[i];
		dfs(index + 1);
		visited[i] = 0;
	}
	return;
}
int main() {

	while (true) {
		scanf("%d", &k);
		if (k == 0) break;

		for (int i = 0; i < k; i++) scanf("%d", &num[i]);
		dfs(0);
	}
	return 0;
}