#include <stdio.h>

int main() {

	int in, out, total = 0, i, max = 0;

	for (i = 0; i < 4; i++) {

		scanf("%d %d", &out, &in);

		total += (in - out);

		if (max < total)
			max = total;
	}

	printf("%d", max);
}
