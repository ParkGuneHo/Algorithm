#include<iostream>

using namespace std;

int main()
{
	int N[100];
	int num, M;
	int tmp, max = 0;

	cin >> num >> M;
	for (int i = 0; i < num; i++) {
		cin >> N[i];
	}

	for (int i = 0; i < num - 2; i++)
	{
		for (int j = i + 1; j < num - 1; j++)
		{
			for (int k = j + 1; k < num; k++)
			{
				if (N[i] + N[j] + N[k] <= M)
				{
					if (max <= N[i] + N[j] + N[k])
						max = N[i] + N[j] + N[k];
				}
			}
		}
	}
	cout << max;

	return 0;
}