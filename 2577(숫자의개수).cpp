#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	long long x;
	cin >> a >> b >> c;

	x = a * b * c;

	while (true)
	{
		arr[x % 10]++;
		if (x < 10) break;
		else x = x / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}


	return 0;
}