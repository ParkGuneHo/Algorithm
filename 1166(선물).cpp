#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

long long int N, L, W, H;
double tmp;

int main() {
	scanf("%lld %lld %lld %lld", &N, &L, &W, &H);

	double left = 0;
	double right = 0;

	right = min(L, min(W, H));

	for (long long int i = 0; i < 10000; i++) {
		double mid = (left + right) / 2;
		if ((long long)((L / mid)) * ((long long)(W / mid)) * ((long long)(H / mid)) < N) {
			right = mid;
		}
		else {
			left = mid;
		}
	}

	printf("%.10lf", right);

	return 0;
}