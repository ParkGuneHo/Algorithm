#include <cstdio>
#include <cstring>

int M, tmp, bitmask;
char func[10] = { 0, };

int main() {

	scanf("%d", &M);

	while (M--) {

		scanf("%s", func);

		if (!strcmp(func, "add")) {
			scanf("%d", &tmp);
			bitmask |= (1 << (tmp));
		}

		else if (!strcmp(func, "remove")) {
			scanf("%d", &tmp);
			bitmask &= ~(1 << (tmp));
		}

		else if (!strcmp(func, "check")) {
			scanf("%d", &tmp);
			if (bitmask & (1 << tmp)) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}

		else if (!strcmp(func, "toggle")) {
			scanf("%d", &tmp);
			bitmask ^= (1 << tmp);
		}

		else if (!strcmp(func, "all")) {
			bitmask = (1 << 21) - 1;
		}

		else if (!strcmp(func, "empty")) {
			bitmask = 0;
		}
	}

	return 0;
}