#include <iostream>

using namespace std;

int N;
int cnt;

int arr[101];
bool brr[101];
bool visit[101];


bool dfs(int x, int y) {

	if (visit[y]) {
		return false;
	}

	visit[y] = true;

	if (x == y || dfs(x, arr[y])) {
		cnt++;
		brr[y] = true;
		return true;
	}

	return false;
}


int main(void) {

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}


	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			visit[j] = brr[j];
		}
		dfs(i, arr[i]);
	}

	cout << cnt << endl;

	for (int i = 1; i <= N; i++) {
		if (brr[i]) {
			cout << i << endl;
		}
	}

	return 0;

}