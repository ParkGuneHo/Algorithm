#include <iostream>
using namespace std;

int n;

long long a = 0;
long long b = 1;
long long c;

void pivo(int cnt) {
	c = a + b;
	if (cnt == n)
		return;
	else {
		a = b;
		b = c;
		pivo(cnt + 1);
	}
}


int main() {
	cin >> n;
	if (n == 0) {
		cout << 0;
	}

	else if (n == 1) {
		cout << 1;
	}

	else {
		pivo(2);
		cout << c << endl;
	}
}