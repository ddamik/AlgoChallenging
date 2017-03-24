#include <cstdio>
using namespace std;

int main() {

	int height = 3 * 4;
	int num;
	int count = 0;
	int result = 0;

	for (int i = 0; i < height; i++) {
		scanf("%d", &num);
		count++;
		if (num == 0) result++;

		if (count % 4 == 0) {
			switch (result)
			{
			case 1:
				printf("A\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("C\n");
				break;
			case 4:
				printf("D\n");
				break;
			default:
				printf("E\n");
				break;
			}
			result = 0;
			count = 0;
		}
	}
	return 0;
}