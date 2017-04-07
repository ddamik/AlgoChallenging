#include <cstdio>
#include <string.h>
using namespace std;

char str[10000001];
int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	
	
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') result++;
	}

	if (len == 1) printf("%d", result);
	else printf("%d", result+1);
	return 0;
}