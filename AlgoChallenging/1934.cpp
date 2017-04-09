#include <cstdio>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {

	int t;
	scanf("%d", &t);

	int a, b;
	int gcdValue = 0;
	while (t--) {
		scanf("%d %d", &a, &b);
		gcdValue = gcd(a, b);
		printf("%d\n", gcdValue * (a / gcdValue) * (b / gcdValue));
	}
	return 0;
}