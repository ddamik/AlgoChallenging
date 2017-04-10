#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int pMin = 999999;
	int rMin = 999999;

	int pTmp, rTmp;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &pTmp, &rTmp);
		pMin = min(pMin, pTmp);
		rMin = min(rMin, rTmp);
	}
	
	int set = n / 6;
	int remain = n % 6;

	int result = 0;
	result += set * pMin;
	result += min(pMin, rMin * remain);

	if (pMin == 0 || rMin == 0) printf("%d", 0);
	else printf("%d", result);
	return 0;
}