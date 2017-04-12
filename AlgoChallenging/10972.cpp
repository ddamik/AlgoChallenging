#include <cstdio>
#include <algorithm>
using namespace std;

int num[10000];
int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &num[i]);

	bool check = true;
	while (next_permutation(num, num + n)) {
		for (int i = 0; i < n; i++) printf("%d ", num[i]);
		check = false;
		break;
	}
	if (check) printf("%d", -1);
	return 0;
}