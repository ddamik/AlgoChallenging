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
	while (l <= r) {				//	����
		int m = (l + r) / 2;
	
		/*
			���ϴ� X�� ��ġ�� ã���� return.
			�� �̻��� Ž���� �ʿ����� �ʴ�.
		*/
		if (A[m] == X) {
			return l;
		


		if (A[m] > X) {
			r = m - 1;
		}
		else {
			l = m + 1;				//	����
		}
	}	
	return -1;
}

int main() {
}