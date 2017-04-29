#include <cstdio>
#include <math.h>
using namespace std;

int main() {

	int x = 1;
	int i = 1;

	while (x <= 1000) {
		x = pow(2, x);
		i = i + 1;
	}

	printf("%d", i);
	return 0;
}