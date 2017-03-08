#include <cstdio>
using namespace std;

int main() {

	// t
	// n

	int t;
	scanf("%d", &t);

	int n;
	int st[1001];
	int sum = 0, count=0;

	float result, avg;
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &st[i]);
			sum += st[i];
		}

		avg = sum / n;

		printf("%d %d\n", sum, avg);
		for (int i = 1; i <= n; i++) {
			if (avg < st[i]) count++;
		}

		result = n / count;
		printf("%.3f%\n", result);

		sum = 0;
		count = 0;
		
	}
	return 0;
}