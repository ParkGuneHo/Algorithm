#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100001];
int total;
int result;

int check(int mid) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= mid)
			temp += arr[i];
		else temp += mid;
	}
	if (temp > total) {
		return 0;
	}
	else {
		return 1;
	}

}

int main() {

	int test = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		test += arr[i];
	}
	cin >> total;

	sort(arr, arr + n);

	if (total >= test) {
		cout << arr[n - 1] << endl;
		return 0;
	}

	int low = 0;
	int high = total;
	int mid = 0;

	while (low <= high) {
		mid = (low + high) / 2;
		if (check(mid)) {
			result = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << result << endl;

	return 0;
}