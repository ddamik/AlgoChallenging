#include <cstdio>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}