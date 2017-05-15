#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;


int num[10];
int main() {

	vector<int> vec;
	int n;
	scanf("%d", &n);

	int tmp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		num[tmp]++;
	}
	
	int len = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] > 0) printf("%d\n", i);
	}

	
	return 0;
}