#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> P;
int main() {

	int n = 8;
	int sum = 0;
	
	vector<int> result;
	vector<P> vec(n);
	
	int tmp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		vec[i].first = tmp;
		vec[i].second = i + 1;
	}

	sort(vec.begin(), vec.end());

	
	for (int i = 3; i < n; i++) {
		result.push_back(vec[i].second);
		sum += vec[i].first;
	}

	sort(result.begin(), result.end());

	printf("%d\n", sum);
	for (int i = 0; i < 5; i++) {
		printf("%d ", result[i]);
	}
	
	return 0;
}