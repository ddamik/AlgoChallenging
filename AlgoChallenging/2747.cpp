#include <cstdio>
using namespace std;

long long int num[100] = { 0, };

int fibo(int n) {
	if (num[n] != 0) return num[n];
	if (n == 1) return num[1] = 0;
	if (n == 2) return num[2] = 1;
	return num[n] = fibo(n - 1) + fibo(n - 2);
}
int main() {

	int n;
	scanf("%d", &n);
	printf("%lld", fibo(n+1));
	return 0;
}