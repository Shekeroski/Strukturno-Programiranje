#include <iostream>
using namespace std;

int main(){
    int n,flag=1;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j > i; j--) {
            if(flag) {
                if(a[i] == a[j]) {
                    for(int k = j; k < n - 1; k++) {
                        a[k] = a[k+1];
                    }
                    n--;
                    flag = 0;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}