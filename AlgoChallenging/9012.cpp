#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

char str[100];
int main() {

	int t;
	scanf("%d\n", &t);
	
	int len;
	int count = 0;
	bool result = true;
	while (t--) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str) - 1;
		count = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == '(') count++;
			else if (str[i] == ')') {
				
				count--;
			}
		}
				
		if (result) printf("YES\n");
		else printf("NO\n");

		result = true;
	}
	return 0;
}