#include <cstdio>
#include <cstring>
using namespace std;

char str[1111];
int al[26] = { 23,24,25,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22 };

int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;

	int tmp = 0;
	for (int i = 0; i < len; i++) {
		printf("%c", al[str[i] - 'A'] + 'A');
	}
	return 0;
}