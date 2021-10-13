#include <iostream>
using namespace std;

long long n, m, arr[1000001];

long long mid, result, tmp;

int main() {
	cin >> n >> m;

	long long maxlen = 1;
	long long minlen = 1;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (maxlen < arr[i])
			maxlen = arr[i];
	}
	minlen = 1;

	while (minlen <= maxlen) {
		tmp = 0;
		mid = (minlen + maxlen) / 2;
		for (int i = 0; i < n; i++) {
			if (arr[i] > mid)
				tmp += arr[i] - mid;
			else
				continue;
		}
		if (tmp < m) {
			maxlen = mid - 1;
		}
		else {
			if (result < mid)
				result = mid;
			minlen = mid + 1;
		}
	}
	cout << result << endl;
}

