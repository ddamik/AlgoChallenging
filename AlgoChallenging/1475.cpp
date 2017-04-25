#include <cstdio>
#include <algorithm>
using namespace std;

int result[10];
int main() {


	//	6, 9´Â °°Àº Ä­¿¡ ++
	//	6, 9 Á¦¿ÜÇÑ °¡Àå ¸¹ÀÌ ÇÊ¿äÇÑ °¹¼ö
	//	6ÀÇ °¹¼ö % 2 == 0 --> sixCount = 6ÀÇ °¹¼ö /2
	//	else sixCount = 6ÀÇ °¹¼ö /2 +1

	int n;
	scanf("%d", &n);
	
	int tmp;
	while (n > 0) {
		tmp = n % 10;
		if (tmp == 9) result[6]++;
		else result[tmp]++;

		n = n / 10;
	}
	
	int sixCount = 0;
	int maxValue = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6) continue;
		maxValue = max(maxValue, result[i]);
	}

	if (result[6] % 2 == 0) sixCount = result[6] / 2;
	else sixCount = result[6] / 2 + 1;

	maxValue = max(sixCount, maxValue);
	printf("%d", maxValue);
	return 0;
}