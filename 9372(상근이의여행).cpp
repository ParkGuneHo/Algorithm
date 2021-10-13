#include <iostream>

using namespace std;

int T;
int N, M;
int a, b;

int main() {
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		for (int j = 0; j < M; j++) {
			cin >> a >> b;
		}
		cout << N - 1 << endl;
	}

	return 0;
}