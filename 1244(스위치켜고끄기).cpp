#include <iostream>

using namespace std;

int main() {
	int N; //스위치수
    int arr[101] = {0,};
	int M; //학생
    int sex;  //성별
    int num; //부여받은 수

    cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

    cin >> M;

    while (M--) {
        cin >> sex >> num;

        if (sex == 1) {
            for (int i = num; i <= N; i+=num) {
                if (arr[i] == 0) {
                    arr[i] = 1;
                }
                else if (arr[i] == 1) {
                    arr[i] = 0;
                }
            }
        }

        else if (sex == 2) {
            int x = num, y = num;
            for (int i = 1; ; i++) {
                if ((arr[num - i] == arr[num + i]) && (num - i >= 1 && num + i <= N)) {
                    x = num - i;
                    y = num + i;
                }
                else { 
                    break; 
                }
            }

            for (int i = x; i <= y; i++) {
                if (arr[i] == 0) {
                    arr[i] = 1;
                }
                else if (arr[i] == 1) {
                    arr[i] = 0;
                }
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << arr[i];
        if (i % 20 == 0) {
            cout << '\n';
            continue;
        }
        cout << ' ';
    }

	return 0;
}