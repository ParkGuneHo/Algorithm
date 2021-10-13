#include <stdio.h>

int main(void)
{
	long long int N, M;

	scanf("%lld %lld", &N, &M);

	if (N-M > 0){
		printf("%lld", N-M);
		}
	else if (N-M < 0) {
		printf("%lld", M-N);
	}
	
	return 0;
}