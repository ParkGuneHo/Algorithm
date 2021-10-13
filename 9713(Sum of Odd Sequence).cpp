#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int x;
		int sum = 0;
		cin >> x;
		for (int i = 1; i <= x; i += 2) {
			sum += i;
		}
		cout << sum << endl;
	}
}