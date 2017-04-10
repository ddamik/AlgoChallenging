#include <cstdio>
using namespace std;

int main() {

	int n, k;
	scanf("%d %d", &n, &k);

	int coin[10];
	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}

	int temp = 0, result = 0;
	for (int i = n - 1; i >= 0; i--) {
		temp = k / coin[i];
		k = k - (temp*coin[i]);
		result += temp;
	}

	printf("%d", result);
	return 0;
}