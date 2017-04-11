#include <cstdio>
using namespace std;

const int MAX_N = 100;
int heap[MAX_N], size = 0;

void push(int x) {
	int i = size++;					// 푸시된 노드(자신의 노드)
	while (i > 0 ){
		int p = (i - 1) / 2;		// 부모 노드
		if (heap[p] <= x) break;	// 값의 역전을 체크, 없다면 break
		heap[i] = heap[p];			// 부모 노드와 자신을 역전
		i = p;
	}
	heap[i] = x;
}

int pop() {
	int ret = heap[0];				// 최소값
	int x = heap[--size];			// 루트로 가져오는 값(맨 마지막 노드)
	
	//	루트보다 작은 동안 체크
	int i = 0;
	while (i * 2 + 1 < size) {
		int a = i * 2 + 1, b = i * 2 + 2;
		if (b < size && heap[b] < heap[a]) a = b;
		if (heap[a] >= x) break;		// 더 이상 역전이 없다면 break;
		heap[i] = heap[a];				// wktlrdml rkqtdmf wjwkd
		i = a;
	}
	heap[i] = x;
	return ret;
}
int main() {

	return 0;
}