#include <cstdio>
using namespace std;

int num[100];

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {

	int t; scanf("%d", &t);

	while (t--) {
		int n; scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &num[i]);

		int sum = 0;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				sum += gcd(num[i], num[j]);

		printf("%d\n", sum);
	}
	return 0;
}