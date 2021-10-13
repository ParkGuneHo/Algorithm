#include <iostream>
using namespace std;

int main() {
	int T;
	int h, w, n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> h >> w >> n;

		if (n % h != 0) {
			cout << n % h * 100 + n / h + 1 << endl;
		}
		else {
			cout << h * 100 + n / h << endl;
		}
	}
	return 0;
}