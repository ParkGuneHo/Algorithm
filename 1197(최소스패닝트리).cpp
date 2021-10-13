#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10001
using namespace std;

int parent[MAX];
int sum = 0;

struct Z {
	int a;
	int b;
	int c;
};

vector <Z> DIS;

bool cmp(Z a, Z b) {
	return a.c < b.c;
}

int find(int x) {
	if (x == parent[x]) {
		return x;
	}
	return parent[x] = find(parent[x]);
}

void UNION(int a, int b) {
	int pa = find(a);
	int pb = find(b);
	if (pa != pb)
		parent[pa] = pb;
}

int main() {
	int v, e;
	cin >> v >> e;

	DIS.resize(e);

	for (int i = 0; i < v; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < e; i++) {
		cin >> DIS[i].a >> DIS[i].b >> DIS[i].c;
	}

	sort(DIS.begin(), DIS.end(), cmp);

	for (int i = 0; i < DIS.size(); i++) {
		if (find(DIS[i].a) != find(DIS[i].b)) {
			UNION(DIS[i].a, DIS[i].b);
			sum += DIS[i].c;
		}
	}

	cout << sum << endl;

	return 0;
}