#include <cstdio>
#include <algorithm>
using namespace std;

char str[111];
int main() {

	fgets(str, sizeof(str), stdin);
	
	int index = 0;
	while (str[index] != '\n') {
		printf("%c", str[index++]);
		if (index % 10 == 0) printf("\n");
	}
	return 0;
}