#include <cstdio>
#include <algorithm>
using namespace std;

int n, k, numValue;
int num[21];
int inputNum[21];

int main() {

	scanf("%d", &n);
	scanf("%d", &k);

	if (k == 1) {
		scanf("%d", &numValue);
		for (int i = 0; i < n; i++) num[i] = i + 1;
		
		int count = 1;
		while (next_permutation(num, num + n)) {
			count++;
			if (count == numValue) {
				for (int i = 0; i < n; i++) printf("%d ", num[i]);
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) num[i] = i + 1;
		for (int i = 0; i < n; i++) scanf("%d", &inputNum[i]);

		int totalCount = 0;
		int inputCount = 0;
		while (next_permutation(num, num + n)) totalCount++;
		while (next_permutation(inputNum, inputNum + n)) inputCount++;

		printf("%d", totalCount - inputCount + 1);
	}

}