#include <iostream>
using namespace std;

int main() {
	int T;
	int N;
	int const size = 42;
	int arr[size];
	arr[0] = 1;
	arr[1] = 0;

	for (int i = 2; i < size; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << arr[N] << ' ' << arr[N + 1] << endl;
	}

	return 0;
}