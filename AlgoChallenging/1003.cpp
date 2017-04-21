#include <cstdio>
using namespace std;

int num[41][2];
int main() {

	int t, n;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		num[0][0] = 1;
		num[0][1] = 0;

		num[1][0] = 0;
		num[1][1] = 1;

		for (int i = 2; i <= n; i++) {

			num[i][0] = num[i - 1][0] + num[i - 2][0];
			num[i][1] = num[i - 1][1] + num[i - 2][1];
		}

		printf("%d %d\n", num[n][0], num[n][1]);
	}	
	return 0;
}