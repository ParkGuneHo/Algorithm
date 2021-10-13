#include <iostream>
using namespace std;

int N, M;
int arr[10];
int check[10];

bool check_2() {
	for (int i = 0; i < M - 1; i++)
		if (arr[i] >= arr[i + 1]) {
			return false;
		}
	return true;
}

void func(int x) {
	if (x == M) {
		if (check_2()) {
			for (int i = 0; i < M; i++) {
				cout << arr[i] << ' ';
			}
			cout << endl;
		}
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (check[i] == 0) {
			check[i] = 1;
			arr[x] = i;
			func(x + 1);
			check[i] = 0;
		}
	}

	return;
}

int main() {

	cin >> N >> M;

	func(0);

	return 0;
}