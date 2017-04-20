#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char str[10000001];
int result[30];

int main() {
		
	//	tmp - 'a' < 0 : 대문자
	//	대문자로 카운트

	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;

	char tmp;
	for (int i = 0; i < len; i++) {
		tmp = str[i];

		if (str[i] - 'a' < 0) result[tmp - 'A']++;
		else result[tmp - 'a']++;
	}

	int maxValue = 0, maxCount = 0;
	for (int i = 0; i < 26; i++) {
		maxValue = max(maxValue, result[i]);
	}

	int index = 0;n
	for (int i = 0; i < 26; i++) {
		if (maxValue == result[i]) {
			maxCount++;
			index = i;
		}
	}
	
	if (maxCount > 1) printf("?");
	else printf("%c", 'A' + index);
	return 0;
}