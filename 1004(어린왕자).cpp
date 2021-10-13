#include <iostream>
using namespace std;
int main() {
	int tot, planet;
	int x1, y1, x2, y2;
	int x3, y3, r;
	int cnt = 0;
	cin >> tot;
	while (tot > 0) {
		cnt = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> planet;
		for (int i = 0; i < planet; i++) {
			cin >> x3 >> y3 >> r;
			if (((((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3)) > r * r)	&& ((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3) < r * r))
				||
				((((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3)) < r * r)	&& ((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3) > r * r))) {
				cnt++;
			}
		}
		tot--;
		cout << cnt << endl;
	}
	return 0;
}