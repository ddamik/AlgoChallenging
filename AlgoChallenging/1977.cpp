#include <cstdio>
#include <algorithm>
using namespace std;

int num[10001];
int main() {

	int index=1;
	int tmp=1;
	while (index < 10000) {
		index = tmp*tmp;
		num[index] = 1;
		tmp++;		
	}

	int m, n;
	scanf("%d %d", &m, &n);

	int sum = 0, minValue = 10001;
	for (int i = m; i <= n; i++) {
		
		if (num[i] == 1) {			
			sum += i;
			minValue = min(minValue, i);
		}
	}

	if (sum == 0) printf("%d", -1);
	else {
		printf("%d\n", sum);
		printf("%d\n", minValue);
	}
}