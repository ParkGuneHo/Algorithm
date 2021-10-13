#include <iostream>
using namespace std;

int arr[1001][3] = {};

inline int min(int a, int b) { return (a > b ? b : a); }

int main() {
	int n;

	cin >> n;

	cin >> arr[0][0] >> arr[0][1] >> arr[0][2];

	for (int i = 1; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

		arr[i][0] += min(arr[i - 1][1], arr[i - 1][2]);
		arr[i][1] += min(arr[i - 1][0], arr[i - 1][2]);
		arr[i][2] += min(arr[i - 1][0], arr[i - 1][1]);
	}

	int red = arr[n - 1][0];
	int green = arr[n - 1][1];
	int blue = arr[n - 1][2];

	cout << min(min(red, green), blue) << endl;

	return 0;
}