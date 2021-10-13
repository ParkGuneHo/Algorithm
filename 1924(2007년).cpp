#include <stdio.h>

int main() 
{
	int x, y, i;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char day[7][4] = { { "SUN" },{ "MON" },{ "TUE" },{ "WED" },{ "THU" },{ "FRI" },{ "SAT" } };
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= 12) {
		for (i = 0; i < x - 1; i++) {
			y += month[i];
			}
			printf("%s", day[y % 7]);
		}
}