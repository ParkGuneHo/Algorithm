#include <iostream>

using namespace std;

int main() {
    int N, M, B;
    int min = 501;
    int max = -1;
    int arr[501][501];
    int time = 99999999;
    int height = 99999999;

    cin >> N >> M >> B;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];

            if (min > arr[i][j]) {
                min = arr[i][j];
            }

            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }

    for (int i = min; i <= max; i++) {
        int t = 0;
        int b = B;

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                int h = arr[j][k] - i;

                if (h > 0) {
                    t = t + h * 2;
                    b = b + h;
                }

                else if (h < 0) {
                    t = t - h;
                    b = b + h;
                }
            }
        }

        if ((b >= 0) && (t <= time)) {
            time = t;
            height = i;
        }
    }

    cout << time << ' ' << height << endl;

    return 0;
}