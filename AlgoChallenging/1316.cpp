#include <cstdio>
#include <cstring>
using namespace std;

char tmpStr[100][101];
char str[100000];
int tmpLen[100];

int count[26];
int lastIndex[26];

int main() {

	int n;
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		fgets(tmpStr[i], sizeof(tmpStr[i]), stdin);
		tmpLen[i] = strlen(tmpStr[i]) - 1;
	}

	int len = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < tmpLen[i]; j++) {
			str[len++] = tmpStr[i][j];
		}
	}
	 

	

	int result = 0;
	char before = str[0];
	
	for (int i = 0; i < len; i++) {		
		if (count[str[i] - 'a'] == 0) {
			count[str[i] - 'a']++;
			lastIndex[str[i] - 'a'] = i;
		}
		else if (i - lastIndex[str[i] - 'a'] > 1) count[str[i] - 'a'] = -1;
		else count[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c %d \n", 'a'+i, count[i]);
		if (count[i] > 0) result += count[i];
	}
	printf("%d", result);
	return 0;
}