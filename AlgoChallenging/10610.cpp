#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

char str[1000001];
long long int num[10] = { 0, };
int main() {

	fgets(str, sizeof(str), stdin);
	
	long long int len = strlen(str);
	long long int tmp = 0;
	long long int sum = 0;
	for (long long int i = 0; i < len-1; i++) {
		tmp = str[i] - '0';
		num[tmp]++;

		sum += tmp;
	}

	if (sum !=0 && (sum % 3 == 0 && num[0] > 0)) {
		for (int i = 9; i >= 0; i--) {
			for (int j = 0; j < num[i]; j++) {
				printf("%d", i);
			}
		}
	}
	else printf("%d", -1);
	return 0;
}