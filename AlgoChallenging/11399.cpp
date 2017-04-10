#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int P[1000] = { 0, };
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &P[i]);
	sort(P, P + n);

	int result = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += P[i];
		result += num;
	}
	printf("%d", result);
	return 0;
}