#include <cstdio>
using namespace std;

int main() {

	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);

	int result = 1;
	while (true) {
		if (e == 1 && s == 1 && m == 1) break;
		result++;
		e--;
		s--;
		m--;

		if (e < 1) e = 15;
		if (s < 1) s = 28;
		if (m < 1) m = 19;
	}

	printf("%d", result);
	return 0;
}