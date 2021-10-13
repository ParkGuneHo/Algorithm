#include <iostream>
using namespace std;
int main() {
	int n, m;
	int wine[10001];
	int tot[10001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> wine[i];
	}
	tot[0] = wine[0];
	tot[1] = wine[0] + wine[1];
	for (int i = 2; i < n; i++) {
		tot[i] = tot[i-1];
		if (tot[i] < wine[i] + tot[i-2]) {tot[i] = wine[i] + tot[i - 2];}
		if (tot[i] < wine[i] + wine[i-1] + tot[i-3]) {tot[i] = wine[i] + wine[i - 1] + tot[i - 3];}
	}
	cout << tot[n-1];
	return 0;
}