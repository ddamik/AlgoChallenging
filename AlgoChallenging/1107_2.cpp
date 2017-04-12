#include <cstdio>
#include <algorithm>
using namespace std;

int n, m;
int tmp[10];
int button[10];
int btnCount;
int len;
int minValue;
int num[10];

int x = 1;
int result = 0;

/*
100000
9
0 1 3 4 5 6 7 8 9
*/

void dfs(int index, int numLen) {

	if (index == numLen) {
		result = 0;
		x = 1;
		for (int i = index-1; i >= 0; i--) {
			result = result + (num[i] * x);
			x = x * 10;
		}
		if (numLen + abs(n - result) == 0) return;
		minValue = min(minValue, numLen + abs(n-result));
		
		return;
	}

	for (int i = 0; i < btnCount; i++) {
		num[index] = button[i];
		dfs(index + 1, numLen);
	}
	return;
}
int main() {

	//	�Է�
	scanf("%d", &n);
	scanf("%d", &m);

	int nTmp;
	for (int i = 0; i < m; i++) {
		scanf("%d", &nTmp);
		tmp[nTmp]++;
	}


	//	��� ������ ��ư ���ϱ�
	btnCount = 0;
	for (int i = 0; i < 10; i++) {
		if (tmp[i] > 0) continue;
		button[btnCount++] = i;
	}

	//	+,-���� Ƚ��
	minValue = abs(n - 100);

	//	�ڸ����� ���ڸ����� ���ϱ�
	nTmp = n;
	if (nTmp == 0) len = 1;
	else {
		while (nTmp > 0) {
			nTmp = nTmp / 10;
			len++;
		}
	}

	//	�Է¹��� �ڸ��� -1 ~ �Է¹��� �ڸ��� +1 �ڸ������� ����Ž��
	for (int i = -1; i <= 1; i++) {
		dfs(0, len + i);
	}
	printf("%d", minValue);
	return 0;
}