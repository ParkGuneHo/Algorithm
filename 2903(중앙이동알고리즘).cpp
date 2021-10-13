#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cnt += cnt - 1;
	}
	cout << cnt * cnt;
	return 0;
}