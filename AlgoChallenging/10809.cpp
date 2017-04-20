#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int result[111];
char str[1111];

int main() {	
	
	fgets(str, sizeof(str), stdin);

	//	init 
	for (int i = 0; i < 28; i++) result[i] = -1;
	int len = strlen(str) - 1;

	//	result
	int tmp = 0;
	for (int i = 0; i<len ; i++) {
		tmp = str[i] - 'a';		
		if (result[tmp] == -1) result[tmp] = i;
	}

	//	print
	for (int i = 0; i < 26; i++) {		
		printf("%d ", result[i]);
	}	
	return 0;
}