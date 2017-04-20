#include <cstdio>
#include <algorithm>
using namespace std;

long long int num[111111];
int main() {

	int n, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &num[i]);		
	}

	sort(num, num + n);
		

	long long int tmp;
	int left, right, mid;
	left = 0;
	right = n - 1;

	int check = 0;

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%lld", &tmp);

		while (left <= right) {
			mid = (left + right) / 2;

			if (num[mid] == tmp) {				
				check = 1;
				printf("%d\n", 1);
				break;
			}

			if (num[mid] > tmp) right = mid - 1;
			else left = mid + 1;
		}

		if (!check) printf("%d\n", check);

		check = 0;
		left = 0;
		right = n-1;
	}
	return 0;
}