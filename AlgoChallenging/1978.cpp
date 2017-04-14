#include <cstdio>
using namespace std;

bool check(int n) {
	if (n < 2) return false;
	for (int i = 2; i < n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}
int main() {

	int n, tmp;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (check(tmp)) sum++;
	}
	printf("%d", sum);

	return 0;
}