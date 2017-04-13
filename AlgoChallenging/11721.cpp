#include <cstdio>
#include <algorithm>
using namespace std;

char str[111];
int main() {

	fgets(str, sizeof(str), stdin);

	int len = strlen(str);
	int count = 0;
	
	for (int i = 0; i < len - 1; i++) {
		printf("%c", str[i]);
		count++;
		if (count % 10 == 0) printf("\n");		
	}
	return 0;
}