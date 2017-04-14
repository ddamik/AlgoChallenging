#include <cstdio>
using namespace std;

bool num[1000001];
void prime(int n) {
	num[1] = true;
	for (int i = 2; i <= n; i++) {
		if (num[i] == false) {
			for (int j = i * 2; j <= n; j = j + i) {
				num[j] = true;
			}
		}
	}
}
int main() {


	int m, n;
	scanf("%d %d", &m, &n);

	prime(n);
	int result = 0;
	for (int i = m; i <= n; i++) {
		if (num[i] == 0) printf("%d\n", i);
	}
	return 0;
}