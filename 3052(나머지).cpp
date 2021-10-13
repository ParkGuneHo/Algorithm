#include<iostream>

using namespace std;

int main()
{
	int a[10];
	int b[10];
	int i, j;
	int chk;
	int count = 1;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
		b[i] = a[i] % 42;
		if (i > 0) {
			chk = 1;
			for (j = 0; j < i; j++) {
				if (b[j] == b[i])
					chk = 0;
			}
			if (chk == 1) count++;
		}
	}
	cout << count;


	return 0;
}
