#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n = 2;
	vector<int> ans;

	cin >> n;

	while (n) {
		int cnt = 0;

		for (int i = n + 1; i <= 2 * n; i++) {

			if (i == 2) {
				cnt++;
				continue;
			}

			int j;
			for (j = 2; j <= sqrt(i); j++) {
				if (i % j == 0)
					break;
			}

			if (sqrt(i) < j)
				cnt++;
		}

		ans.push_back(cnt);

		cin >> n;
	}

	for (vector<int>::iterator i = ans.begin(); i < ans.end(); i++)
		cout << *i << '\n';

	return 0;
}