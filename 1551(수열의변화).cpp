#include<iostream>
#include <stdio.h>

using namespace std;

int N, K;
int arr[21];

int main() {
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		getchar();
	}
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N - i - 1; j++) { 
			arr[j] = arr[j + 1] - arr[j];
		}
	}

	for (int i = 0; i < N - K; i++) { 
		cout << arr[i];
		if (i != N - K - 1) {
			cout << ",";
		}
	}

	return 0;
}