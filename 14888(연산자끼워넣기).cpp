#include<iostream>
#include<algorithm>
using namespace std;

int maxN = -100000000, minN = 1000000000;
int n, a[12], p, s, m, d;

void func(int index, int plus, int sub, int multi, int divi, int total) {
	if (index == n) {
		maxN = max(maxN, total);
		minN = min(minN, total);
		return;
	}
	if (plus < p)
		func(index + 1, plus + 1, sub, multi, divi, total + a[index]);
	if (sub < s)
		func(index + 1, plus, sub + 1, multi, divi, total - a[index]);
	if (multi < m)
		func(index + 1, plus, sub, multi + 1, divi, total * a[index]);
	if (divi < d)
		func(index + 1, plus, sub, multi, divi + 1, total / a[index]);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> p >> s >> m >> d;
	func(1, 0, 0, 0, 0, a[0]);
	cout << maxN << endl << minN << endl;
	return 0;
}