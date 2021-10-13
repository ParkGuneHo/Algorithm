#include <iostream>
using namespace std;

int a[4] = { -1, 0, 1, 0 };
int b[4] = { 0, 1, 0, -1 };

void dfs(int arr[52][52], int x, int y) {
	if (arr[x][y] == 0) {
		return;
	}
	arr[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		dfs(arr, x + a[i], y + b[i]);
	}
}

int main() {
	int T;

	cin >> T;

	while (T > 0) {
		int M, N, K;
		cin >> M >> N >> K;
		int arr[52][52] = { 0, };

		for (int i = 0; i < K; i++) {
			int x, y;
			cin >> x >> y;
			arr[x + 1][y + 1] = 1;
		}

		int cnt = 0;

		for (int i = 1; i <= M; i++) {
			for (int j = 1; j <= N; j++) {
				if (arr[i][j] == 1) {
					dfs(arr, i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
		T--;
	}

	return 0;
}

