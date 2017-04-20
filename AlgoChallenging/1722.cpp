#include <cstdio>
#include <algorithm>
using namespace std;

int n, k, numValue, numCount=1;
int num[21];
int inputNum[21];

int main() {

	scanf("%d", &n);
	scanf("%d", &k);

	if (k == 1) {
		scanf("%d", &numValue);
		for (int i = 0; i < n; i++) num[i] = i + 1;

		do {
			if (numCount++ == numValue) {
				for (int i = 0; i < n; i++) printf("%d ", num[i]);
				break;
			}
		}while (next_permutation(num, num + n));
	}
	else {
		// (n-1)!
	}
}