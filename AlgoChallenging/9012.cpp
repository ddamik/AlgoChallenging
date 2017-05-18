#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

char str[100];
int main() {

	int n; scanf("%d\n", &n);
	int len = 0, top = 0;
	bool check;

	while (n--) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str) - 1;
		check = true;
		top = 0;

		for (int i = 0; i < len; i++) {			
			if (str[i] == ')') {
				if (top == 0) {
					check = false;
					break;
				}
				top--;
			}
			else {
				top++;				
			}
		}

		if (!check) printf("NO\n");
		else if (top != 0) printf("NO\n");
		else printf("YES\n");

		
	}
	return 0;
}