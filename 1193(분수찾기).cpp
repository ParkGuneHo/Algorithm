#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	int sum = 0;
	while (i + sum < n) {
		sum +=i;
		i++;
	}

	if (i % 2 == 1) {
		cout << i - (n - sum) + 1 << '/' << n - sum << endl;
	}
	else {
		cout << n - sum << '/' << i - (n - sum) + 1 << endl;
	}
	
	return 0;
}