#include <cstdio>
#include <cstring>
using namespace std;

char str[111];
int al[26] = { 0,0,1,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,1 };


int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;

	for (int i = 0; i < len; i++) {
		if (al[str[i] - 'a'] == 1) {
		
		}
	}
	/*
	
	*/
	return 0;
}