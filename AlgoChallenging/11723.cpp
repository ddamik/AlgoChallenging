#include <cstdio>
#include <string>
using namespace std;

int num[21];

int main() {
	
	int n;
	scanf("%d", &n);

	char str[10];
	int x;

	for (int i = 0; i < n; i++) {
		scanf("%s", &str);
		scanf("%d", &x);
		if (strcmp(str, "add\n") == false) {
			num[x] = 1;
			printf("add");
		}
		else if (strcmp(str, "remove\n")) num[x] = 0;
		else if (strcmp(str, "check\n")) {
			printf("%d\n", num[x]);
			printf("[[[[[[[[[[[ check ]]]]]]]]]]");
		}
		else if (strcmp(str, "toggle\n")) {
			if (num[x] == 0) num[x] = 1;
			else num[x] = 0;
		}
		else if (strcmp(str, "all\n")) {
			memset(num, 1, sizeof(num));
		}
		else if (strcmp(str, "empty\n")) {
			memset(num, 0, sizeof(num));
		}
	}
	for (int i = 1; i <= 20; i++) printf("%d", num[i]);
	return 0;
}