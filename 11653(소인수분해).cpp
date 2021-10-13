#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	int idx = 2;
	while (n > 1) {
		for (int i = idx; i <= n; i++) {
			if (n % i == 0) {
				cout << i << endl;
				n = n / i;
				idx = i;
				break;
			}
		}
	}
}