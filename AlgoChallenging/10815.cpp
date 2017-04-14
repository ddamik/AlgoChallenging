#include <cstdio>
#include <algorithm>
using namespace std;

int card[500001];
int number[500001];
int n;

bool check(int num) {
	int left = 0;
	int right = n;
	int mid = 0;

	while (left <= right) {
		mid = (left + right) / 2;
		if (card[mid] == num) return true;
		if (card[mid] < num) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}
int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &card[i]);

	sort(card, card + n);

	int m; scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &number[i]);
		if (check(number[i])) printf("%d ", 1);
		else printf("%d ", 0);
	}
	return 0;
}