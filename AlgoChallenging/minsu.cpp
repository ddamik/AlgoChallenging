#include <cstdio>
#include <vector>
using namespace std;

int solution(vector<int>& A, int X) {
	int N = A.size();
	if (N == 0) {
		return -1;
	}

	int l = 0;
	int r = N - 1;
	while (l <= r) {				//	수정
		int m = (l + r) / 2;
	
		/*
			원하는 X의 위치를 찾으면 return.
			더 이상의 탐색이 필요하지 않다.
		*/
		if (A[m] == X) {
			return l;
		


		if (A[m] > X) {
			r = m - 1;
		}
		else {
			l = m + 1;				//	수정
		}
	}	
	return -1;
}

int main() {
}