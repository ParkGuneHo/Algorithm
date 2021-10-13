#include <stdio.h>
#include <iostream>

using namespace std;

int n, m;
int check[1001];
int edge[1001][1001];
int cnt = 0;

int dfs(int a) {
	cnt++;
	check[a] = 1;

	for (int i = 1; i <= n; i++) {
		if (check[i] == 0 && edge[a][i] == 1) {
			dfs(i);
		}
	}

	return cnt;
}

int main() {
	cin >> n >> m;

	int from, to;

	for (int i = 0; i < m; i++) {
		cin >> from >> to;
		edge[from][to] = 1;
		edge[to][from] = 1;
	}

	cout << dfs(1) - 1 << endl;

	return 0;

}