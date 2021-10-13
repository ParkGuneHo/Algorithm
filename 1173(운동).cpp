#include <iostream>

using namespace std;

int N, m, M, T, R;
//운동시간, 최소 맥박, 최대 맥박, 증가 맥박, 감소 맥박
int result = 0;
int cnt = 0;

int main() {
	
	cin >> N >> m >> M >> T >> R;

	if (m + T > M) {
		cout << -1;
		return 0;
	}

	int tmp = m;

	while (true) {
		if (tmp + T <= M) {
			tmp += T;
			cnt++;
		}
		else {
			tmp -= R;
			if (tmp < m) {
				tmp = m;
			}
		}

		result++;

		if (cnt == N) {
			cout << result << endl;
			return 0;
		}
	}

}