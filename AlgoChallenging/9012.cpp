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
	while (t--) {
		fgets(str, sizeof(str), stdin);
		len = strlen(str) - 1;
		count = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == '(') count++;
			else if( str[i] == ')' ) count--;
		}
				
		if (count == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}