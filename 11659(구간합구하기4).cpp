#include <iostream>
#include <stdio.h>

using namespace std;

int N, M;
int arr[100001];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= N; i++) {
		arr[i] = arr[i] + arr[i - 1];
	}

	for (int i = 1; i <= M; i++) {
		int a, b, tmp;

		scanf("%d %d", &a, &b);

		if (a > b) {
			tmp = a;
			a = b;
			b = tmp;
		}

		printf("%d\n", arr[b] - arr[a - 1]);
	}

	return 0;
}