#include <cstdio>
#include <string.h>
using namespace std;

char str[10000001];
int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	
	
	int result = 0;
	bool check = true;
	for (int i = 0; i < len; i++) {
		if (check && (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))) {
			check = false;
			result++;
		}
		if (str[i] == ' ') check = true;
	}

	printf("%d", result);
	return 0;
}