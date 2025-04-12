#include<iostream>
using namespace std;

int main() {
    int a[10], n, j, k,i, izbrisani = 0;

    cin >> n;

    for ( i = 0; i < n; i++){
        cin >> a[i];
    }
    for ( i = 0; i < n - izbrisani; i++) {
        for ( j = i + 1; j < n - izbrisani; j++) {
            if (a[i] == a[j]) {
                for ( k = j; k < n - 1 - izbrisani; k++) {
                    a[k] = a[k + 1];
                }
                izbrisani++;
                --j;
            }
        }
    }

    n -= izbrisani;

    for ( i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}