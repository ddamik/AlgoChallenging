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

	float sum = 0.0, avg = 0.0, newNum = 0.0;
	for (int i = 0; i < n; i++) {
		newNum = (num[i] / (float)maxValue) * 100;
		sum += newNum;
	}

	printf("%.2f", sum / n);
	return 0;
}