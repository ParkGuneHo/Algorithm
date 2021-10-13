#include <iostream> 
using namespace std;

int N;

int main() {
	int temp;
	int max = 0;
	int min = 1001;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp > max) {
			max = temp;
		}
		if (temp < min) {
			min = temp;
		}
	}

	cout << max - min << endl;

	return 0;
}