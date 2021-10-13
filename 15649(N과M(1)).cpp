#include <iostream>

using namespace std;

int n, m;
int arr[10];
bool check[10];

void func(int a) {
	if (a == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	else if (a > n)
		return;
	else {
		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				check[i] = true;
				arr[a] = i;
				func(a + 1);
				check[i] = false;
			}
		}
	}
}
int main() {
	cin >> n >> m;

	func(0);

	return 0;
}