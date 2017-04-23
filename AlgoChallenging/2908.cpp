#include <cstdio>
#include <cstring>
using namespace std;

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	int iStr = 0, iStr2 = 0;
	int x = 100;	
	for (int i = 0; i < 3; i++) {
		iStr = iStr + ((a % 10) * x);
		iStr2 = iStr2 + ((b % 10) * x);

		a = a / 10;
		b = b / 10;

		x = x / 10;
	}

	if (iStr > iStr2) printf("%d", iStr);
	else printf("%d", iStr2);
	return 0;
}