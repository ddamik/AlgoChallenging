#include <cstdio>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int min = 99999;


	int head=0;			//	n/5�� ��
	int sum=0;
	int remainder=0;		//	n%5

	int cnt = 0;
	do {
		/*
		*	1. 5Kg �ִ뷮�� ���Ѵ�.
		*	2. ��ü������ 5Kg �ִ뷮�� �� ���� %3==0 ���� Ȯ��
		*	3. %3==0 �� �´ٸ�, /3 ���� sum +=
		*	4. if( sum < min ) min = sum
		*/

		head = (n - (5*(cnt++))) / 5;
		sum += head;

		remainder = n - (head * 5);
		if (remainder % 3 == 0) {
			sum += (remainder / 3);
			if (sum < min) min = sum;
		}

		sum = 0;
	} while (head--);


	if (min == 99999) printf("%d", -1);
		else printf("%d", min);
	return 0;
}