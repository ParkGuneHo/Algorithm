#include <iostream>

using namespace std;

int pick[3000];
int arr[3] = { 0,0,0 };
int brr[3] = { 0,0,0 };
int crr[3] = { 0,0,0 };
int score[3] = { 0,0,0 };

int ans = 0;
int most = 0;

int N;

int main() {


	cin >> N;

	for (int i = 0; i < N * 3; i++) {
		cin >> pick[i];
	}

	for (int i = 0; i < N * 3; i++) {
		if (i % 3 == 0) {
			score[0] += pick[i];
			if (pick[i] == 3) {
				arr[0]++;
			}
			else if (pick[i] == 2) {
				brr[0]++;
			}
			else if (pick[i] == 1) {
				crr[0]++;
			}
		}

		else if (i % 3 == 1) {
			score[1] += pick[i];
			if (pick[i] == 3) {
				arr[1]++;
			}
			else if (pick[i] == 2) {
				brr[1]++;
			}
			else if (pick[i] == 1) {
				crr[1]++;
			}
		}

		else if (i % 3 == 2) {
			score[2] += pick[i];
			if (pick[i] == 3) {
				arr[2]++;
			}
			else if (pick[i] == 2) {
				brr[2]++;
			}
			else if (pick[i] == 1) {
				crr[2]++;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		if (score[i] > most) {
			most = score[i];
			ans = i + 1;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (score[i] == score[(i + 1) % 3] && score[i] == most) {
			if (arr[(i + 1) % 3] > arr[i]) {
				ans = (i + 1) % 3 + 1;
			}
			else if (arr[(i + 1) % 3] == arr[i]) {
				if (brr[(i + 1) % 3] > brr[i]) {
					ans = (i + 1) % 3 + 1;
				}
				else if (brr[(i + 1) % 3] == brr[i]) {
					ans = 0;
				}
			}
		}
	}

	cout << ans << " " << most;

	return 0;
}