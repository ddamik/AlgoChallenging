#include <cstdio>
#include <cstring>
using namespace std;

int al[100];
char str[111];

int main() {

	scanf("%s", &str);
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		al[str[i]-'a']++;
	}

	for (int i = 0; i < 26; i++) {				
		printf("%d ", al[i]);		
	}
	return 0;
}