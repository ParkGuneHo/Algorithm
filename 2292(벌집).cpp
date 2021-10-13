#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	int max = 1;
	int mul = 1;
	while (1) {
		if (max >= n) {
			break;
		}
		mul = 6 * cnt;
		cnt++;
		max += mul;
	}
	cout << cnt;

	return 0;
}