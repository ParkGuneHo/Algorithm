#include <iostream>

using namespace std;

int A, B, C, N;

int main() {
	cin >> A >> B >> C >> N;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			for (int k = 0; k <= N; k++) {
				if (i * A + j * B + k * C == N) {
					cout << '1' << endl;
					return 0;
				}
			}
		}
	}
	cout << '0' << endl;
}
