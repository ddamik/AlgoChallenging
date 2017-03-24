#include <cstdio>
using namespace std;

int main() {

	int n;
	int temp = 0, result = 0;

	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &temp);
		if (n == temp) result++;
	}

	printf("%d", result);
	return 0;
}