#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, arr[1001], result = 0, tmp = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		tmp += arr[i];
		result += tmp;
	}

	cout << result << endl;
	return 0;
}