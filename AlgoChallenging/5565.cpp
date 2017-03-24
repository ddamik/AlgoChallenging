#include <cstdio>
using namespace std;

int main() {

	int sum;
	int tmp;
	int result = 0;

	scanf("%d", &sum);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &tmp);
		result += tmp;
	}

	printf("%d", sum - result);
	return 0;
}