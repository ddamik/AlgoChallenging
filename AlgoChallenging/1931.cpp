#include <cstdio>
#include <algorithm>
using namespace std;



int main() { 
	pair<int, int> P[100000];
	int n; scanf("%d", &n);

	int start, end;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &start, &end);
		P[i].first = end;
		P[i].second = start;
	}

	sort(P, P + n);
	int result = 0;
	int lastEnd = 0;
	for (int i = 0; i < n; i++) {
		if (lastEnd <= P[i].second) {
			lastEnd = P[i].first;
			result++;
		}
	}

	printf("%d", result);
	return 0; 
}