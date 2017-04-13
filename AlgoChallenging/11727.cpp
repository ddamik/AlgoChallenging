#include <cstdio>
using namespace std;

int num[1001];
int main() {

	int n;
	scanf("%d", &n);

	num[0] = 1;
	num[1] = 1;

	for (int i = 2; i <= n; i++) {
		num[i] = num[i - 1] +  ( 2* num[i - 2]);
		num[i] = num[i] % 10007;
	}

	printf("%d", num[n]);
	return 0;
}