#include <cstdio>
using namespace std;

int main() {

	//	1. n�� �Է¹޾�.
	//	2. n = (n/10 + n%10)
	//	3. n�� ó�� �Է°��� ���������� ī��Ʈ

	int n;
	scanf("%d", &n);

	int count = 0;
	int num = 0;

	num = n;
	int new_num = 0;
	int last_num = 0;
	do {

		new_num = n / 10 + n % 10;
		if (new_num >= 10) new_num %= 10;

		last_num = (n % 10)*10;
		n = last_num + new_num;
		count++;
	} while (num != n);

	printf("%d", count);
	return 0;
}