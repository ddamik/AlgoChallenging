#include <cstdio>
using namespace std;

long long int gcd(long long int a, long long int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}
int main() {

	long long int a, b;
	scanf("%lld %lld", &a, &b);

	long long int gcdValue = gcd(a, b);
	for (long long int i = 0; i < gcdValue; i++) printf("%d", 1);
	return 0;
}