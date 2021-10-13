#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;
vector <P> v[100001];
int check[100001] = { 0 };
int sum[100001];
int maxlen[100001];
int N, a, b;
int x, y, length;
int chk;

void dfs(int start, int s, int m) {
	sum[start] = s;
	maxlen[start] = m;
	check[start] = 1;

	for (auto i : v[start]) {
		if (!check[i.first]) {
			dfs(i.first, s + i.second, max(m, i.second));
		}
	}
}

int main() {
	cin >> N >> a >> b;

	for (int i = 0; i < N - 1; i++) {
		cin >> x >> y >> length;
		v[x].push_back({ y,length });
		v[y].push_back({ x,length });
	}

	dfs(a, 0, 0);

	if (a == b) {
		cout << '0' << endl;
	}
	else {
		cout << sum[b] - maxlen[b] << endl;
	}

	return 0;
}