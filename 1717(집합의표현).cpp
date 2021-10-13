#include <cstdio>

using namespace std;

int arr[1000001];

int find(int x) {
	if (arr[x] == x) {
		return x;
	}
	else {
		return arr[x] = find(arr[x]);
	}
}

int main() {
	int n, m;
	int chk, a, b;

	scanf("%d %d", &n, &m);

	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &chk, &a, &b);
		if (chk == 0) {
			a = find(a);
			b = find(b);
			arr[b] = a;
		}
		else if (chk == 1) {
			a = find(a);
			b = find(b);
			if (a == b) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	return 0;
}