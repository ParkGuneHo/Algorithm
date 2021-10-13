#include <cstdio>
#include <vector>

using namespace std;

vector<int> v;
vector<int> check;

int N, M;

int main() {
	scanf("%d %d", &N, &M);
	v.resize(N + 1);
	check.resize(N + 1);

	while (M--) {
		int a, b;
		scanf("%d %d", &a, &b);
		v[a]++;
		v[b]--;
	}

	int sum = 0;

	for (int i = 1; i <= N; i++) {
		v[i] += i;
		if (v[i] > 0 && !check[v[i]]) {
			sum++;
			check[v[i]] = 1;
		}
	}

	if (sum == N) {
		for (int i = 1; i <= N; i++) {
			printf("%d ", v[i]);
		}
	}
	else {
		printf("-1\n");

	}
	return 0;
}
