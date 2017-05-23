#include <cstdio>
using namespace std;

int main() {

	int n; scanf("%d", &n);
	
	int tmp;
	while (scanf("%d", &tmp)) {
		if (tmp == 0) break;
		if (tmp % n == 0) printf("%d is a multiple of %d.\n", tmp, n); 
		else printf("%d is NOT a multiple of %d.\n", tmp, n);
	}
	return 0;
}