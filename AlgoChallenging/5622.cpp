#include <cstdio>
#include <cstring>
using namespace std;

int time[10] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int alpha[30] = { 0, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };

int main() {

	char str[20];
	fgets(str, sizeof(str), stdin);

	int len = strlen(str) - 1;
	int result = 0;
	int timeIndex;
	for (int i = 0; i < len; i++) {
		timeIndex = alpha[str[i] - 'A' + 1];
		result += time[timeIndex];
	}

	printf("%d", result);

	return 0;
}