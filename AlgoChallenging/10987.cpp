#include <cstdio>
#include <cstring>
using namespace std;

char str[111];
int al[30];

int m[5] = { 0, 4, 8, 14, 20 };
int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;

	for (int i = 0; i < len; i++) {
		al[str[i] - 'a']++;
	}

	int result = 0;
	for (int i = 0; i < 5; i++) result += al[m[i]];
	
	printf("%d", result);

	return 0;
}