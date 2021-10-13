#include <iostream>
using namespace std;

int main(void) {
	int temp;
	int max = 0;
	int index = 0;

	for (int i = 0; i < 9; i++) {
		cin >> temp;
		if (max < temp) {
			max = temp;
			index = i;
		}
	}
	cout << max << "\n" << index + 1 << endl;

	return 0;
}