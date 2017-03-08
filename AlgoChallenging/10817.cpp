#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int maxNum = max(a, max(b, c));
	if (maxNum == a) printf("%d", max(b, c));
	else if (maxNum == b) printf("%d", max(a, c));
	else printf("%d", max(a, b));

	return 0;
}