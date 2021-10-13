#include <iostream>
using namespace std;

long long arr[101];

int main() {
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	for (int i = 6; i <= 100; i++) {
		arr[i] = arr[i - 5] + arr[i - 1];
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		cout << arr[n] << endl;
	}
}