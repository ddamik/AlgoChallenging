#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX_N = 100;
bool used[MAX_N];
int perm[MAX_N];

/*
	pos: index,
	n: ~n순열을 출력.
*/
void permutation1(int pos, int n) {
	if (pos == n) {
		for (int i = 0; i < n; i++) printf("%d ", perm[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			perm[pos] = i;
			used[i] = true;
			permutation1(pos + 1, n);
			used[i] = false;
		}
	}
	return;
}


/*
	next_permutation

*/
int perm2[MAX_N];
void permutation2(int n) {

	int count = 0;
	while (next_permutation(perm2, perm2 + n)) {
		count++;
		if (count == 3) {
			for (int i = 0; i < n; i++) printf("%d ", perm2[i]);
			printf("\n");
			break;
		}
	}
	
}


int main() {
	permutation1(0, 5);

	perm2[0] = 0;
	perm2[1] = 4;
	perm2[2] = 1;
	perm2[3] = 2;
	perm2[4] = 3;
	permutation2(5);
	return 0;
}