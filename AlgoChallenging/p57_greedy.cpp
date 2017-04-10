#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int coin[6] = { 1,5,10,50,100,500 };
	int cCount[6] = { 3,2,1,3,0,2 };
	int A = 620;

	int temp = 0;
	int result = 0;
	for (int i = 5; i >= 0; i--) {
		temp = min(A / coin[i], cCount[i]);		
		A = A - coin[i] * temp;
		result += temp;
	}
	printf("%d", result);
	return 0;
}