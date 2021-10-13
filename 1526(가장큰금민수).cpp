#include<iostream>

using namespace std;

int N;
int num;
int temp;

int func(int n) {
	while (n) {
		temp = n % 10;
		n /= 10;
		if (temp == 4 || temp == 7) {
			continue;
		}
		else {
			return 0;
		}
	}
	return 1;
}

int main() {
	cin >> N;
	for (int i = 4; i <= N; i++) {
		if (func(i) == 1) {
			num = i;
		}
	}
	cout << num << endl;

	return 0;
}