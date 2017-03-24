#include <cstdio>
using namespace std;

int main() {

	int min = 3333;
	int tmp = 0;
	int result = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &tmp);
		if (tmp < min) min = tmp;
		
		if (i == 2) {
			result += min;
			min = 3333;			
		}
	}

	printf("%d", result + min - 50);
	return 0;
}