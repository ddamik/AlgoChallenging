#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main() {

	queue<char> que;
	stack<char> stack;
	char str[1000];

	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str); i++) {
		que.push(str[i]);
		stack.push(str[i]);
	}

	for (int i = 0; i < strlen(str); i++) {
		printf("que %c\t stack %c\n", que.front(), stack.top());
		if (que.front() > stack.top()) {
			printf("%c", que.front());
			que.pop();
		}
		else {
			printf("%c", stack.top());
			stack.pop();
		}
	}
	return 0;
}