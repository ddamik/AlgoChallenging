#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX_N = 100000;
int N;
int S[MAX_N] = { 1,2,4,6,8 };
int T[MAX_N] = { 3,5,7,9,10 };

typedef pair<int, int> P;

int main() {

	queue<P> que;
	pair<int, int> arrP[5];

	int n = 5;
	for (int i = 0; i < n; i++) {
		arrP[i].first = T[i];		// 종료시간 기준으로 정렬하기때문에 T[i]를 first
		arrP[i].second = S[i];
	}

	sort(arrP, arrP + n);
	int result = 0, end = 0;
	for (int i = 0; i < 5; i++) {
		if (end < arrP[i].second) {
			result++;
			end = arrP[i].first;
		}
	}
	printf("%d", result);
	return 0;
}