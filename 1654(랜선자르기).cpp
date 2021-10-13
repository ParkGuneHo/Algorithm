#include <iostream>
#include <algorithm>
using namespace std;

long long arr[10001];

bool check(long long len, int K, int N) {
	long long tmp = 0;
	for (int i = 0; i < K; i++) {
		tmp += arr[i] / len;
	}
	if (tmp >= N) {
		return true;
	}
	else{
		return false;
	}
}


int main() {
	int K, N;

	cin >> K >> N;

	long long minlen = 1;
	long long maxlen = 1;

	for (int i = 0; i < K; i++) {
		cin >> arr[i];
		maxlen = max(maxlen, arr[i]);
	}

	long long result = 0;

	while (1) {
		if (minlen > maxlen) {
			break;
		}

		long long middle = (minlen + maxlen) / 2;

		if (check(middle, K, N) == true) {
			if (result < middle) {
				result = middle;
			}
			minlen = middle + 1;
		}
		else {
			maxlen = middle - 1;
		}
	}

	cout << result << endl;

	return 0;
}

