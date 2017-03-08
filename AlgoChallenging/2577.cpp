#include <cstdio>
using namespace std;

int main() {

	int n;
	int sum = 1;
	int num[11] = { 0, };
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		sum *= n;
	}

	
	while (sum != 0) {
		num[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}