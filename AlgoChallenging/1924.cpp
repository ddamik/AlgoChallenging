#include <cstdio>
using namespace std;

int main() {

	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x, y;
	scanf("%d %d", &x, &y);

	int result = 0;
	for (int i = 0; i < x; i++) result += days[i];

	result += y;
	result %= 7;

	if (result == 1) printf("MON");
	else if (result == 2) printf("TUE");
	else if (result == 3) printf("WED");
	else if (result == 4) printf("THU");
	else if (result == 5) printf("FRI");
	else if (result == 6) printf("SAT");
	else printf("SUN");
	return 0;

}