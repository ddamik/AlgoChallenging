#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char str[90000009];
int result[30];

int main() {
		
	//	tmp - 'a' < 0 : 대문자
	//	대문자로 카운트

	scanf("%s", &str);
	int len = strlen(str);
	
	char tmp;
	for (int i = 0; i < len; i++) {
		tmp = str[i];

		if (tmp - 'a' < 0) {
			result[tmp - 'A']++;
		}
		else {
			result[tmp - 'a']++;
		}
	}

	int maxValue = 0, maxCount = 0;
	for (int i = 0; i < 26; i++) {
		maxValue = max(maxValue, result[i]);
	}

	int index = 0;
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