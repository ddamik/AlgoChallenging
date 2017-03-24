#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	/*
		최대값 M
		각 과목별 점수는 점수/M * 100
		새로운 점수의 평균을 구하라.

		1. 입력받으면서 M값 구하고
		2. 새로 반복하면서 새로운 점수를 더한다.
		3. 그리고 평균을 낸다.
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