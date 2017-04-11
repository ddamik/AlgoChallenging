#include <cstdio>
using namespace std;

int main() {

	char str[4];
	int t;
	scanf("%d", &t);

	while (t--) {
		scanf("%s", &str);
		printf("%d\n", str[0]-'0' + str[2]-'0');
	}
	return 0;
}