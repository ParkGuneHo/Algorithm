#include <iostream>
using namespace std;

int n;
int arr[500][500];

void method(int m) {
	if (m == n) {
		return;
	}
	else {
		arr[m][0] += arr[m - 1][0];
		arr[m][m] += arr[m - 1][m - 1];
		for (int i = 1; i < m; i++) {
			if (arr[m - 1][i] < arr[m - 1][i - 1]) {
				arr[m][i] += arr[m - 1][i - 1];
			}
			else {
				arr[m][i] += arr[m - 1][i];
			}
		}
		method(m + 1);
	}
}


int main() {
   cin >> n;
   for (int i = 0; i < n; i++) {
	   for (int j = 0; j <= i; j++) {
		   cin >> arr[i][j];
	   }
   }
      
   method(1);
   
   int max=0;

   for (int i = 0; i < n; i++) {
	   if (arr[n - 1][i] > max) {
		   max = arr[n - 1][i];
	   }
   }
      
   cout << max;
}
