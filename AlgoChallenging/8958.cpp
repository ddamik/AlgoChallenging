#include <cstdio>
#include <string.h>
using namespace std;

int main() {

	int t;
	scanf("%d", &t);

	int len;
	char str[100];
	char good = 'O';
	char tmp;
	int num = 0, result=0;

	while (t--) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str) - 1;
		
		for (int i = len; i >= 0; i--) {
			tmp = str[i];
			if (good == tmp) {
				num++;
				result += num;
			}
			else num = 0;
		}
		printf("%d\n", result);
		result = 0;
	}
	return 0;
}