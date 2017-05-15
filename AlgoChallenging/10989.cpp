#include <cstdio>
#include <algorithm>
using namespace std;

int num[10001];
int main() {

	int n; scanf("%d", &n);

	int tmp, maxValue = 0;;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		maxValue = max(maxValue, tmp);
		num[tmp]++;
	}

	int len = 0;
	for (int i = 0; i <= maxValue; i++) {
		len = num[i];
		for (int j = 0; j < len; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}