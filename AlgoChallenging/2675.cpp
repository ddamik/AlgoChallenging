#include <cstdio>
#include <cstring>
using namespace std;

char str[100];
int main() {

	
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int r;
		scanf("%d", &r);

		fgets(str, sizeof(str), stdin);
		int len = strlen(str) - 1;

		int index = 1;
		while (str[index] != '\n') {
			for (int i = 0; i < r; i++) printf("%c", str[index]);
			index++;
		}
		printf("\n");
	}
	return 0;
}