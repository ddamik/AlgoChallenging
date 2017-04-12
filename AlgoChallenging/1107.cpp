#include <cstdio>
#include <algorithm>
using namespace std;

int num[10];
int remo[10];
int input[10];

int n, m, btn;
int len, lenValue;
int minValue;
int result = 0;
int x = 1;

int getLenValue(int result) {
	if (result >= 100000) return 6;
	else if (result >= 10000) return 5;
	else if (result >= 1000) return 4;
	else if (result >= 100) return 3;
	else if (result >= 10) return 2;
	else return 1;
}

void dfs_minus(int index) {
	if (index == len - 1) {
		for (int i = len-2; i >= 0; i--) {
			result = result + (num[i] * x);
			x = x * 10;
		}
		//	만들어졌을때의 자리수를 저장 1000이면 4를 저장
		//	min = 자리수 + 채널 - 현재 만들어진 순열
		minValue = min(minValue, getLenValue(result) + abs(n - result));

		x = 1;
		result = 0;
		return;
	}

	for (int i = 0; i < btn; i++) {
		num[index] = remo[i];
		dfs_minus(index + 1);
	}
	return;
}

void dfs(int index) {

	if (index == len) {
		for(int i=len-1 ; i>=0 ; i--){
			result = result + (num[i] * x);
			x = x * 10;
		}
		//	만들어졌을때의 자리수를 저장 1000이면 4를 저장
		//	min = 자리수 + 채널 - 현재 만들어진 순열
		minValue = min( minValue, getLenValue(result) + abs(n - result));
		x = 1;
		result = 0;
		return;
	}

	
	for (int i = 0; i < btn; i++) {
		num[index] = remo[i];
		dfs(index + 1);
	}
	return;
}

void dfs_plus(int index) {
	
	if (index == len + 1) {
		for (int i = len; i >= 0; i--) {
			result = result + (num[i] * x);
			x = x * 10;
		}
		//	만들어졌을때의 자리수를 저장 1000이면 4를 저장
		//	min = 자리수 + 채널 - 현재 만들어진 순열
		minValue = min( minValue, getLenValue(result) + abs(n - result));
		
		x = 1;
		result = 0;
		return;
	}

	for (int i = 0; i < btn; i++) {
		num[index] = remo[i];
		dfs_plus(index + 1);
	}
	return;
}

int main() {

	scanf("%d", &n);
	scanf("%d", &m);

	int tmp;
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		input[tmp]++;
	}

	//	살아있는 버튼 생성
	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (input[i] > 0) continue;
		remo[index++] = i;
	}

	//	살아있는 버튼 개수
	btn = 10 - m;
	
	//	min = 원하는 채널 - 100
	minValue = abs(100 - n);

	
	//	입력받은 수의 자릿수
	int nTmp = n;
	int first = 0;
	if (nTmp == 0) len = 1;
	else {
		while (nTmp > 0) {
			len++;
			first = nTmp;
			nTmp = nTmp / 10;
		}
	}

	//	살아 있는 버튼으로 만들 수 있는 수를 모두 만든다.
	
	dfs(0);
	if( first == 1 ) dfs_minus(0);
	if( first == 9 ) dfs_plus(0);

	printf("%d", minValue);
	return 0;
}