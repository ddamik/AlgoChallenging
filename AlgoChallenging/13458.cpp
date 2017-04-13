#include <cstdio>
#include <algorithm>
using namespace std;

long long int A[1111111];
long long int cal(long long int c, long long int num) {
	long long int head, remain;
	long long int count = 0;

	if (num <= 0) return 0;
	head = num / c;
	remain = num%c;

	if (head == 0 && remain > 0) count++;
	else if (head > 0 && remain == 0) count = head;
	else count = head + 1;

	return count;
}

int main() {

	long long int n;
	long long int b, c;
	
	scanf("%lld", &n);
	for (long long int i = 0; i < n; i++) scanf("%lld", &A[i]);
	scanf("%lld %lld", &b, &c);

	long long int result = 0;
	for (long long int i = 0; i < n; i++) {
		result += 1;
		result += cal(c, A[i]-b);
	}

	printf("%lld", result);
	return 0;
}