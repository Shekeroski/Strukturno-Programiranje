#include<iostream>
using namespace std;
int main() {
    int n,m,x=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]==1) {
                int k=j;
                j=k;
                if(a[i+1][j-1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 && a[i+2][j]==1 ) {
                    x++;
                }
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
