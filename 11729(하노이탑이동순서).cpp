#include <cstdio>

using namespace std;

int hanoi(int n) {
	if (n == 1) {
		return 1;
	}
	return 2 * hanoi(n - 1) + 1;
}

void move(int n, int a, int b, int c) {
	if (n == 1) {
		printf("%d %d\n", a, c);
	}
	else {
		move(n - 1, a, c, b);
		printf("%d %d\n", a, c);
		move(n - 1, b, a, c);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d\n", hanoi(n));
	move(n, 1, 2, 3);
	return 0;
}