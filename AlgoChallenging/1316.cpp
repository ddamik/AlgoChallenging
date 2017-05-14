#include <cstdio>
#include <cstring>
using namespace std;

char tmpStr[100][101];
char str[100000];
int tmpLen[100];

int count[26];
int tmpResult[26];

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

	//	count[i] == 0 이면 다음알파벳이랑 다를때까지 ++
	//	count[i] > 0 이면 tmpResult[i]--

	int result = 0;
	char before = str[0];
	
	return 0;
}