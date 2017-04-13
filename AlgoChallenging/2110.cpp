#include <cstdio>
#include <algorithm>
using namespace std;

long long int n, c;
long long int house[222222];

bool check(long long int distance) {
	long long int last = house[0];
	long long int count = 1;
	for (long long int i = 0; i < n; i++) {
		if ((house[i] - last) >= distance) {
			count++;
			last = house[i];
		}
	}
	return count >= c;
}
int main() {

	long long int maxValue = 0;
	scanf("%lld %lld", &n, &c);
	for (long long int i = 0; i < n; i++) {
		scanf("%lld", &house[i]);
		maxValue = max(maxValue, house[i]);
	}

	long long int left, right, mid, result;
	left = 1;
	right = maxValue;

	sort(house, house + n);
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