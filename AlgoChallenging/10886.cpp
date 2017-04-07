#include <cstdio>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int nSum = 0;
	int cSum = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (tmp == 0) nSum++;
		else cSum++;
	}

	if (nSum > cSum) printf("Junhee is not cute!");
	else printf("Junhee is cute!");
	return 0;
}