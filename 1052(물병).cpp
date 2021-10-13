#include <iostream>

using namespace std;

int N, K;

int func(int a) {
	int cnt = 0;

	while (a > 0) {
		if (a % 2 == 1) {
			cnt++;
		}
		a = a / 2;
	}

	return cnt;
}

int main() {
	
	cin >> N >> K;

	int tmp = N;

	while (true) {
		if (func(N) <= K) {
			break;
		}
		else {
			N++;
		}
	}

	cout << N - tmp << endl;

	return 0;
}