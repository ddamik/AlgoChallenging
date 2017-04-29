#include <cstdio>
#include <algorithm>
using namespace std;

int result[55];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &result[i]);

	sort(result, result + n);

	printf("%d", result[0] * result[n - 1]);
}