#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

char str[100];
int main() {

	
		
	int index = 0, sum = 0, count = 0;
	char tmp;

	int t; scanf("%d\n", &t);
	while (t--) {
		fgets(str, sizeof(str), stdin);
		index = 0;
		count = 0;
		sum = 0;

		while (str[index] != '\n') {
			tmp = str[index++];
			if (tmp == 'O') count++;
			else count = 0;
			sum += count;
		}

		printf("%d\n", sum);
	}

	return 0;
}