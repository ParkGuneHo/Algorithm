#include <iostream>
#include <vector>
using namespace std;

int n, a, b;
vector <int> v[100001];
int parent[100001];
bool visit[100001];

void dfs(int x, int y) {
	visit[x] = 1;
	parent[x] = y;

	for (int i = 0; i < v[x].size(); i++) {
		int tmp = v[x][i];
		if (!visit[tmp]) {
			dfs(tmp, x);
		}
	}
}

int main() {
	cin >> n;

	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1, 1);

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << "\n";
	}

	return 0;
}