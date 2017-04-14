#include <cstdio>
using namespace std;

int result[10];
int main() {

	int n; scanf("%d", &n);
	
	int result = 0;
	for (int i = 5; i <= n; i = i * 5) {
		result += n / i;
	}
	printf("%d", result);
	return 0;
}