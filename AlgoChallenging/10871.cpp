#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	// x보다 작은 수를 입력 순서대로 출력

	int n, x;
	scanf("%d %d", &n, &x);

	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (x > num) printf("%d ", num);
	}
	return 0;
}