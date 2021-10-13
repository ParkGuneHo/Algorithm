#include <iostream>
#include <algorithm>

using namespace std;

bool abc(int a, int b) {
	return a > b;
}

int main() {
	int i;
	int sum = 0;
	char n[100001];
	cin >> n;

	for (i = 0; n[i] != '\0'; i++) {
		sum += n[i] - '0';
	}

	sort(n, n + i, abc);

	if (n[i - 1] == '0' && sum % 3 == 0) {
		cout << n << endl;
	}
	else {
		cout << "-1" << endl;
	}

	return 0;
}