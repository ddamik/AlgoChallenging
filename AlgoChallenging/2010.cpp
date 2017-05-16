#include <cstdio>
using namespace std;

int main() {

	int n; scanf("%d", &n);
	int sum = 0, tmp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("%d", (sum + 1) - n);
	return 0;
}