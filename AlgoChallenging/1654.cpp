#include <cstdio>
#include <algorithm>
using namespace std;

long long int len[11111];
long long int k, n;

bool check(long long int mid) {
	long long int count = 0;
	for (int i = 0; i < k; i++) {
		count += len[i] / mid;
	}
	return count >= n;
}
int main() {

	long long int maxValue = 0;

	scanf("%lld %lld", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%lld", &len[i]);
		maxValue = max(maxValue, len[i]);
	}

	long long int left, right, mid, result=0;
	left = 1;
	right = maxValue;

	while (left <= right) {
		mid = (left + right) / 2;
		if (check(mid)) {
			result = max(result, mid);
			left = mid + 1;
		}
		else right = mid - 1;
	}
	printf("%lld", result);
	return 0;
}