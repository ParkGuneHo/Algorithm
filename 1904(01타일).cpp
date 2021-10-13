#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[1000000];
	arr[0] = 1;
	arr[1] = 2;

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 15746;
	}

	cout << arr[n - 1] << endl;

	return 0;
}