#include <cstdio>
#include <time.h>
using namespace std;

const int MAX_N = 100;
int memory[MAX_N + 1];

int fib(int n) {
	if (n <= 1 ) return n;					// a0=0, a1=1이기 때문이다.
	return fib(n - 1) + fib(n - 2);
}

int fib_m(int n) {
	if (n <= 1) return n;
	if (memory[n] != 0) return memory[n];
	return memory[n] = fib_m(n - 1) + fib_m(n - 2);
}
int main() {
	
	clock_t begin, end;
	begin = clock();

	int n;
	
	printf("[ Fibonacci ]\n\n");
	printf("n의 값: ");
	scanf("%d", &n);
	
	
	end = clock() - begin;
	printf("[ 배열을 사용하지 않은 Fibonacci 실행시간: %f seconds ]\n", (float(end - begin) / CLOCKS_PER_SEC));
	
	clock_t m_begin, m_end;
	m_begin = clock();
	fib_m(n);
	m_end = clock() - m_begin;
	printf("[ 배열을 사용한 Fibonacci 실행시간: %f seconds ]\n", (float(m_end - m_begin) / CLOCKS_PER_SEC));

	return 0;
}