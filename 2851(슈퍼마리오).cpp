#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[10];
	int sum = 0;
	int chk = -1;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		if (arr[0] >= 100) {
			cout << arr[0];
			chk = 1;
			break;
		}
		if (sum >= 100) {
			if (100 - (sum - arr[i]) < sum - 100) {
				sum = sum - arr[i];
			}
			else {
				sum = sum;
			}
			cout << sum;
			chk = 1;
			break;
		}
	}
	if (chk == -1) {
		cout << sum;
	}

	return 0;
}