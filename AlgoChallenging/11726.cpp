#include <cstdio>
using namespace std;
 
int d[1001];
int main() {

	int n; scanf("%d", &n);
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] = d[i] % 10007;
	}
	printf("%d", d[n]);
	return 0;
}