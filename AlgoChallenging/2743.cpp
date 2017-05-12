#include <cstdio>
#include <cstring>
using namespace std;

char str[111];
int main() {
	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;

	printf("%d", len);
}