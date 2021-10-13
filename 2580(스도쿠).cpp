#include<iostream>
using namespace std;

int arr[9][9];

bool check(int y, int x, int value) {
	for (int i = 0; i < 9; i++) {
		if (value == arr[i][x]) {
			return false;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (value == arr[y][i]) {
			return false;
		}
	}

	for (int i = (y / 3) * 3; i < (y / 3) * 3 + 3; i++) {
		for (int j = (x / 3) * 3; j < (x / 3) * 3 + 3; j++) {
			if (arr[i][j] == value) {
				return false;
			}
		}
	}

	return true;
}

bool func(int num) {
	for (int i = num; i < 81; i++) {
		int y = i / 9;
		int x = i % 9;
		if (arr[y][x] != 0) continue;
		for (int k = 1; k <= 9; k++) {
			if (check(y, x, k)) {

				arr[y][x] = k;
				if (func(i + 1)) {
					return true;
				}
				arr[y][x] = 0;
			}
		}
		return false;
	}
	return true;
}

int main(void) {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

	func(0);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}