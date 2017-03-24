#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	/*
		�ִ밪 M
		�� ���� ������ ����/M * 100
		���ο� ������ ����� ���϶�.

		1. �Է¹����鼭 M�� ���ϰ�
		2. ���� �ݺ��ϸ鼭 ���ο� ������ ���Ѵ�.
		3. �׸��� ����� ����.
	*/

	int n;
	scanf("%d", &n);

	int num[1000];
	int maxValue = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		maxValue = max(maxValue, num[i]);
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", i, (num[i] / maxValue) * 100);
		sum += (num[i] / maxValue) * 100;
	}

	printf("\n%d\n", sum);
	printf("%.2f", sum / n);

	return 0;
}