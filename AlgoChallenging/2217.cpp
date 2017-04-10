#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int num[100000];
	int n;
	scanf("%d", &n);

	int tmp;
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	
	sort(num, num + n);
	
	
	int result = 0;
	int count = 0;
	for (int i = n-1; i >=0 ; i--) {
		count++;
		result = max(result, num[i] * count);
	}
	printf("%d", result);
	return 0;
}