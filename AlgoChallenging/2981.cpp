#include <cstdio>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {

	//	n��
	//	/m, �������� ��� �������� m
	//	������ m�� ����

	int n;
	scanf("%d", &n);
	
	int num[100] = { 0, };
	int minValue = 999999999;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		minValue = min(num[i], minValue);
	}


	
	int gcdValue = gcd(num[0], num[1]);
	for (int i = 2; i < n; i++) {		
		if (num[i] % gcdValue == 0) continue;
		else gcdValue = gcdValue * (num[i] / gcdValue);
	}
	printf("%d", gcdValue);

	/*
	if (gcdValue == minValue) printf("%d", gcdValue);
	else{
		while (gcdValue < minValue) {
			printf("%d ", gcdValue);
			gcdValue += gcdValue;
		}
	}
	*/
	return 0;
}