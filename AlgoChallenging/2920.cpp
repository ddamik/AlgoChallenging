#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int num[8];
	int ascNum[8];

	for (int i = 0; i < 8; i++) {
		scanf("%d", &num[i]);
		ascNum[i] = num[i];
	}

	
	sort(ascNum, ascNum + 8);

	bool bAsc = true;
	bool bDes = true;
	for (int i = 0; i < 8; i++) {
		if (ascNum[i] != num[i]) bAsc = false;
		if (ascNum[7-i] != num[i]) bDes = false;
	}

	if (bAsc) printf("ascending");
	else if (bDes) printf("descending");
	else printf("mixed");
	return 0;
}
