#include <iostream>

using namespace std;

int N;

int main() {
	cin >> N;

	while (N--) {
		int arr[5] = { 0, };
		int brr[5] = { 0, };
		int an, bn;
		cin >> an;
		for (int i = 0; i < an; i++) {
			int tmp;
			cin >> tmp;
			arr[tmp]++;
		}

		cin >> bn;
		for (int i = 0; i < bn; i++) {
			int tmp;
			cin >> tmp;
			brr[tmp]++;
		}

		int result = 0;

		for (int i = 4; i >= 1; i--) {
			if (arr[i] > brr[i]) {
				result = 1;
			}
			else if (arr[i] < brr[i]) {
				result = 2;
			}
			if (result != 0) {
				break;
			}
		}

		if (result == 0)
			cout << 'D' << endl;
		else if (result == 1)
			cout << 'A' << endl;
		else if (result == 2)
			cout << 'B' << endl;
	}
	return 0;
}
