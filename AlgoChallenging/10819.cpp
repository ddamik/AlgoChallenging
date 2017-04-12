#include <cstdio>
#include <algorithm>
using namespace std;


int main() {

	int n;
	scanf("%d", &n);

	int num[10];
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	
	sort(num, num + n);

	int maxValue = 0;
	int sum = 0;
	do {
		for (int i = 0; i < n - 1; i++) {
			sum += abs(num[i] + (num[i + 1] * -1));
		}
		maxValue = max(sum, maxValue);
		sum = 0;
	} while (next_permutation(num, num + n));

	printf("%d", maxValue);
	return 0;
}