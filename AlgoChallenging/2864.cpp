#include <cstdio>
#include <queue>
using namespace std;

int main() {

	queue<int> num5;
	queue<int> num6;
	int a, b;

	scanf("%d %d", &a, &b);

	int afterA5 = 0, afterB5 = 0;
	int afterA6 = 0, afterB6 = 0;

	int tmp;
	int len = 0;
	while (a > 0) {
		len++;
		tmp = a % 10;
		if (tmp == 6) num5.push(5);
		else num5.push(tmp);

		if (tmp == 5) num6.push(6);
		else num6.push(tmp);
		a = a / 10;
	}

	int x = 1;
	for (int i = 0; i < len; i++) {
		afterA5 += num5.front() * x;
		afterA6 += num6.front() * x;
		num5.pop();
		num6.pop();
		x = x * 10;
	}

	len = 0;
	while (b > 0) {
		len++; tmp = b % 10;
		if (tmp == 6) num6.push(5);
		else num5.push(tmp);

		if (tmp == 6) num6.push(5);
		else num6.push(tmp);
		b = b / 10;
	}

	x = 1;
	for (int i = 0; i < len; i++) {
		afterB5 += num5.front() * x;
		afterB6 += num6.front() * x;
		num5.pop();
		num6.pop();
		x = x * 10;
	}

	printf("%d %d %d %d\n", afterA5, afterA6, afterB5, afterB6);

	return 0;
}