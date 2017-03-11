#include <cstdio>
using namespace std;

int main() {

	int sum = 0, num;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		if (num < 40) num = 40;
		sum += num;
	}

	printf("%d", sum / 5);
	return 0;
}