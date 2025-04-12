#include <iostream> //prozorec
using namespace std;
int main() {
    int n,N;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>N;
    for (int i = 0; i <= n-N; i++) {
        for(int j=i;j<i+N;j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}