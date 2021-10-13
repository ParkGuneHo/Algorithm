#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector <int> v[5001];

int main() {
	int location;
	int color;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> location >> color;
		v[color].push_back(location);
	}

	for (int i = 1; i <= N; i++) {
		if (v[i].empty()) {
			continue;
		}

		else {
			sort(v[i].begin(), v[i].end());

			for (int j = 0; j < v[i].size(); j++) {
				if (j == 0) {
					sum += v[i][1] - v[i][0];
				}

				else if (j == v[i].size() - 1) {
					sum += v[i][j] - v[i][j - 1];
				}

				else {
					int a = v[i][j + 1] - v[i][j];
					int b = v[i][j] - v[i][j - 1];
					sum += min(a, b);
				}
			}
		}
	}

	cout << sum << endl;

	return 0;
}