#include <cstdio>
#include <cstring>
using namespace std;

char str[111];
int main() {

	fgets(str, sizeof(str), stdin);
	int len = strlen(str) - 1;
	
	//	'A': 65, 'a': 97
	//	97보다 작으면서 -는 제외

	for (int i = 0; i < len; i++) {
		if (str[i] != '-' && str[i] < 97) printf("%c", str[i]);
	}
	return 0;
}