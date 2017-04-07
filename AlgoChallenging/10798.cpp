#include <cstdio>
using namespace std;

char str[5][20] = { ' ', };
int main() {

	for (int i = 0; i < 5; i++) fgets(str[i], sizeof(str[i]), stdin);
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j][i] == '\0' || str[j][i] == ' ' || str[j][i] == '\n') continue;
			printf("%c", str[j][i]);
		}
	}
	return 0;
}