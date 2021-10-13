#include <iostream>
using namespace std;

int N, arr[51], P[51];

int main() {
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int idx = 0;

	for (int i = 0; i < N; i++) {
		int min = 1001;
		for (int j = 0; j < N; j++) {
			if (arr[j] < min) {
				min = arr[j];
				idx = j;
			}
		}
		P[idx] = i;
		arr[idx] = 1001;
	}

	for (int i = 0; i < N; i++) {
		cout << P[i] << " ";
	}

	return 0;
}
