#include <iostream>
using namespace std;

int main() {
	int arr[15][15];
	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
		arr[i][1] = 1;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 2; j < 15; j++) {

			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << arr[a][b] << endl;
	}
	return 0;
}