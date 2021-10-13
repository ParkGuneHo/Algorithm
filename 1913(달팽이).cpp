#include<iostream>

using namespace std;

int arr[999][999];
int visit[999][999] = { 1 };

int main(void) {

	int n, m;

	cin >> n >> m;

	int x = 0;
	int y = 0;
	int move = 0;
	int N = n * n;
	int X, Y;

	arr[x][y] = N;
	N--;

	while (N != 0) {
		if (move == 0) {
			if (x == n - 1 || visit[x + 1][y] == 1) {
				move = (move + 1) % 4;
			}
			else {
				x++;
				visit[x][y] = 1;
				arr[x][y] = N--;
			}
		}
		
		else if (move == 1) {
			if (y == n - 1 || visit[x][y + 1] == 1) {
				move = (move + 1) % 4;
			}
			else {
				y++;
				visit[x][y] = 1;
				arr[x][y] = N--;
			}
		}

		else if (move == 2) {
			if (x == 0 || visit[x - 1][y] == 1) {
				move = (move + 1) % 4;
			}
			else {
				x--;
				visit[x][y] = 1;
				arr[x][y] = N--;
			}
		}

		else {
			if (y == 0 || visit[x][y - 1] == 1) {
				move = (move + 1) % 4;
			}
			else {
				y--;
				visit[x][y] = 1;
				arr[x][y] = N--;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
			if (arr[i][j] == m) {
				X = i + 1;
				Y = j + 1;
			}
		}
		cout << endl;
	}

	cout << X << " " << Y << endl;

	return 0;
}