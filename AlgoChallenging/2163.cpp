#include <cstdio>
using namespace std;

int main() {


	/*
		天|天|天|天
		天|天|天|天
		
		11 / 11
	*/

	int n, m;
	scanf("%d %d", &n, &m);

	printf("%d", n + m - 1);
	return 0;
}