#include <iostream> 
#include <vector> 
#include <math.h> 

using namespace std;

int main(void) {
	int N;
	int sum = 0;
	int index;
	int idx;

	cin >> N;

	for (int i = 1; i <= 32; i++) {
		sum += pow(2, i);
		idx = i;

		if (sum >= N) {
			break;
		}
	}

	index = N - pow(2, idx) + 1;

	vector<int> v(idx, 0);

	int cnt = 0;

	while (index > 0) {
		v[v.size() - 1 - cnt] = index % 2;
		index /= 2;
		cnt++;
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			cout << 4;
		}
		else {
			cout << 7;
		}
	}
}