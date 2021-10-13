#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> v;
	int N;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;

		cin >> num;

		if (num == 0) {
			v.pop_back();
		}
		else {
			v.push_back(num);
		}
	}

	for (int i = 0; i < (int)v.size(); i++) {
		sum += v[i];
	}

	cout << sum << endl;

	return 0;
}