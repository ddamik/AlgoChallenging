#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	// x���� ���� ���� �Է� ������� ���

	int n, x;
	scanf("%d %d", &n, &x);

	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (x > num) printf("%d ", num);
	}
	return 0;
}