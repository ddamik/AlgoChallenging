#include <cstdio>
using namespace std;

int result[1111111];
int main() {

	long long int n; scanf("%lld", &n);
	long long int sum = 0, x = 0;

	while (n > 0) {
		if (x == 0) x = 1;
		else x = x * 2;

		sum += (n % 10) * x;
		n = n / 10;
	}

	int index = 0;
	while (sum > 0) { 
		result[index++] = sum % 8;
		sum = sum / 8; 
	}
	

	while (index--) {
		printf("%lld", result[index]);
	}
	return 0;
}