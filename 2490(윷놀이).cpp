#include<iostream>
#include <string>

using namespace std;

int main()
{
	int play[4] = { 0,0,0,0 };
	int i = 0, j, front = 0, back = 0;
	string result[3];


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cin >> play[j];

			if (play[j] == 0) {
				front++;
			}

			else {
				back++;
			}

		}

		if (front == 1) {
			result[i] = "A";
		}

		else if (front == 2) {
			result[i] = "B";
		}

		else if (front == 3) {
			result[i] = "C";
		}

		else if (front == 4) {
			result[i] = "D";
		}

		else if (back == 4) {
			result[i] = "E";
		}
		front = 0, back = 0;
	}
	for (i = 0; i < 3; i++) {
		cout << result[i] << "\n";
	}

	return 0;
}