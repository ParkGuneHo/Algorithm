#include <iostream>

using namespace std;

int N;
int arr[1001] = { 0, };

int main() {

	cin >> N;

	arr[1] = 1;

	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;

		if (arr[i] == 0) {
			break;
		}

		for (int j = 1; j <= tmp; j++) {
			if (i + j > 1000) {
				break;
			}
			if (arr[i + j] > arr[i] + 1 || arr[i + j] == 0) {
				arr[i + j] = arr[i] + 1;
			}
		}

	}

	if (arr[N] == 0) {
		cout << -1 << endl;
	}
	else {
		cout << arr[N] - 1 << endl;
	}

	return 0;
}