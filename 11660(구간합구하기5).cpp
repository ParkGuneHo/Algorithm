#include <iostream>
#include <cstdio>

using namespace std;

int N, M;
int arr[1025][1025] = { 0, };
int brr[1025][1025] = { 0, };
int result;


int main() {
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%d", &arr[i][j]);
			brr[i][j] = brr[i - 1][j] + brr[i][j - 1] + arr[i][j] - brr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		result = brr[x2][y2] - brr[x2][y1 - 1] - brr[x1 - 1][y2] + brr[x1 - 1][y1 - 1];

		printf("%d \n", result);
	}

	return 0;
}