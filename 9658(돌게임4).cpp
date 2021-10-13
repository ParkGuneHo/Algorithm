#include <iostream>

using namespace std;


int main() {
	int N;
	int arr[1001];

	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 0;
	arr[4] = 1;

	cin >> N;

	for (int i = 5; i <= N; i++) {
		arr[i] = 0;
		if (arr[i - 1] == 0 || arr[i - 3] == 0 || arr[i - 4] == 0) {
			arr[i] = 1;
		}
		else {
			arr[i] = 0;
		}
	}

	if (arr[N] == 1) {
		cout << "SK" << endl;
	}
	else {
		cout << "CY" << endl;
	}

	return 0;
}