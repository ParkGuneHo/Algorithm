#include <iostream>
using namespace std;
int main() {
	int count = 0;
	int coin[11];
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		count += k / coin[i];
		k %= coin[i];
	}
	cout << count << endl;
	return 0;
}