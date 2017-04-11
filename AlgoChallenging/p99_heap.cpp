#include <cstdio>
using namespace std;

const int MAX_N = 100;
int heap[MAX_N], size = 0;

void push(int x) {
	int i = size++;					// Ǫ�õ� ���(�ڽ��� ���)
	while (i > 0 ){
		int p = (i - 1) / 2;		// �θ� ���
		if (heap[p] <= x) break;	// ���� ������ üũ, ���ٸ� break
		heap[i] = heap[p];			// �θ� ���� �ڽ��� ����
		i = p;
	}
	heap[i] = x;
}

int pop() {
	int ret = heap[0];				// �ּҰ�
	int x = heap[--size];			// ��Ʈ�� �������� ��(�� ������ ���)
	
	//	��Ʈ���� ���� ���� üũ
	int i = 0;
	while (i * 2 + 1 < size) {
		int a = i * 2 + 1, b = i * 2 + 2;
		if (b < size && heap[b] < heap[a]) a = b;
		if (heap[a] >= x) break;		// �� �̻� ������ ���ٸ� break;
		heap[i] = heap[a];				// wktlrdml rkqtdmf wjwkd
		i = a;
	}
	heap[i] = x;
	return ret;
}
int main() {

	return 0;
}