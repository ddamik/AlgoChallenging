#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int result[10];
	result[0] = abs(a - b);
	result[1] = 10 - abs(a - b);
	result[2] = abs(a - c);
	result[3] = 10 - abs(a - c);
	result[4] = abs(b - c);
	result[5] = 10 - abs(b - c);
	result[6] = c;

	sort(result, result + 7);
	int tmp = result[0];
	printf("%d ", tmp);
	for (int i = 1; i < 7; i++) {
		if (tmp == result[i]) continue;
		tmp = result[i];
		printf("%d ", tmp);
	}
	return 0;
}