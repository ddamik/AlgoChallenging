#include <cstdio>
#include <queue>
using namespace std;

const int PLUS_MINUS_BUTTON = 0;
const int CONTROLLER_BUTTON = 1;


int main() {

	int n, m;
	int num[10];
	int button[10];
	int inputTmp;
	 
	

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &inputTmp);
		num[inputTmp]++;
	}

	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (num[i] > 0) continue;
		button[index++] = i;
	}

	 
	return 0;
}