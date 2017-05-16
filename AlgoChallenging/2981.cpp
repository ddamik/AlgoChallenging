#include <cstdio>
#include <algorithm>
using namespace std;

long long int num[100];
long long int minValue = 1111111111111;

long long int gcd(long long int a, long long int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {

	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		minValue = min(num[i], minValue);
	}
		
	long long int gcdValue = gcd(num[0], num[1]);
	for (int i = 1; i < n; i++) {		
		gcdValue = gcd(gcdValue, num[i]);
	}
	
	long long int printValue = gcdValue;
	while (minValue > printValue){
		printf("%d ", printValue);
		printValue += gcdValue;
	}
	printf("\n");
	return 0;
}