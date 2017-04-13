#include <cstdio>
#include <algorithm>
using namespace std;

long long int N, M;
long long int tree[1000001];

bool check(long long int height) {
	long long int sum = 0;
	for (long long int i = 0; i < N; i++) {
		if ((tree[i] - height) > 0) sum += (tree[i] - height);
	}
	return sum <= M;
}
int main() {
	
	scanf("%lld %lld", &N, &M);

	long long int maxValue = 0;
	for (long long int i = 0; i < N; i++) {
		scanf("%lld", &tree[i]);
		maxValue = max(maxValue, tree[i]);
	}

	long long int left, right, mid, result;
	left = 1;
	right = maxValue;

	while (left <= right) {
		mid = (left + right) / 2;
		if (check(mid)) {
			right = mid - 1;
			result = max(result, mid);
		}
		else left = mid + 1;
	}

	printf("%lld", result);
	return 0;

}