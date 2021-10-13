#include <iostream>

using namespace std;

int n, t;

int gcd(int x, int y) {
	int a, b, c;
	a = x;
	b = y;

	while (true) {
		c = a % b;

		if (c == 0) break;

		a = b;
		b = c;
	}

	return b;
}

int main() {
	cin >> n;

	int first;
	cin >> first;

	for (int i = 1; i < n; i++) {
		cin >> t;

		int tmp = gcd(first, t);
		cout << first / tmp << '/' << t / tmp << endl;
	}
}