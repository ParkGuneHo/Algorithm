#include <stdio.h>

int main()
{
	int a, i, j;
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a * 2; j++) {
			((i + j) % 2 == 0) ? (printf("*")) : (printf(" "));
		}
		printf("\n");
	}
	return 0;
}