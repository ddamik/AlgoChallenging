#include <cstdio>
using namespace std;

int num[1111];
int main() {

	int c;
	int n;
	int sum = 0, count = 0;
	float result = 0.0, avg = 0.0;

	scanf("%d", &c);

	while (c--) {
		
		//	init
		sum = 0;
		count = 0;
		avg = 0.0;
		result = 0.0;

		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
			sum += num[i];
		}

		avg = sum / n;
		for (int i = 0; i < n; i++) {
			if (num[i] > avg) count++;
		}

		result = (count / (float)n) * 100;
		printf("%.3f%%\n", result);
	}
	return 0;
}