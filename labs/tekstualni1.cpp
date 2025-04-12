#include<iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;

    int matrica[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrica[i][j];
        }
    }

    for (int start = 0; start < M; start++) {
        int i = 0, j = start;
        while (i < N && j >= 0) {
            cout << matrica[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }
    return 0;
}