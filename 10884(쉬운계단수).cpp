#include <iostream>

using namespace std;

int main() {
	int arr[101][10] = {};

	long long sum = 0;

	int n;
	cin >> n;

	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		arr[i][0] = arr[i - 1][1];
		for (int j = 1; j < 9; j++) {
			arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
		arr[i][9] = arr[i - 1][8];
	}

	for (int i = 0; i < 10; i++) {
		sum += arr[n][i];
	}

	cout << sum % 1000000000 << endl;
	return 0;
}