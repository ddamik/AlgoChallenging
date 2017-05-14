#include <cstdio>
using namespace std;

int main() {

	int h, m;
	scanf("%d %d", &h, &m);

	int time = (h * 60) + m - 45;
	if (time < 0) time = (24 * 60) + time;

	int resultH, resultM;
	resultH = time / 60;
	resultM = time % 60;

	printf("%d %d", resultH, resultM);
	return 0;
}