#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int result[111];
char str[1111];

int main() {	
	
	scanf("%s", &str);

	//	init 
	for (int i = 0; i < 28; i++) result[i] = -1;
	int len = strlen(str);

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

	// 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
	// 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1   
}