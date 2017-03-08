#include <cstdio>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int num[101];
	int sum = 0;

	for (int i = 0; i < n; i++) {
		scanf("%1d", &num[i]);
		sum += num[i];
	}

	printf("%d", sum);
	return 0;
}