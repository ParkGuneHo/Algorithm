#include <iostream>
using namespace std;

int arr[101][101];
int x, y;
int cnt = 0;
int n;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				if (arr[i][j] != 1) {
					cnt++;
				}
				arr[i][j] = 1;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}