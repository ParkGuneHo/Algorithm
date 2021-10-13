#include <stdio.h>
#include <queue>
#include <iostream>

using namespace std;

int n, m, v;
int check[1001];
int bfs_check[1001];
int edge[1001][1001];

void dfs(int a) {
	check[a] = 1;

	cout << a << " ";

	for (int i = 1; i <= n; i++) {
		if (check[i] == 0 && edge[a][i] == 1) {
			dfs(i);
		}
	}

}

void bfs(int a) {
	queue<int> q;

	q.push(a);

	bfs_check[a] = 1;

	while (!q.empty()) {
		a = q.front();
		q.pop();
		cout << a << " ";

		for (int i = 1; i <= n; i++) {
			if (bfs_check[i] == 0 && edge[a][i] == 1)	{
				q.push(i);
				bfs_check[i] = 1;
			}
		}
	}
}

int main() {
	cin >> n >> m >> v;

	int from, to;

	for (int i = 0; i < m; i++)	{
		cin >> from >> to;
		edge[from][to] = 1;
		edge[to][from] = 1;
	}

	dfs(v);

	cout << endl;

	bfs(v);

	return 0;

}