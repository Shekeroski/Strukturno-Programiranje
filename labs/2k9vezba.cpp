#include<iostream>
using namespace std;
int main() {
    int a[10][10];
    int n,m;
    cin>>n;
    cin>>m;
    int sumkol=0;
    int sumred=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(j%2==0) {
                sumkol+=a[i][j];
            }
            if(i%2!=0) {
                sumred+=a[i][j];
            }
        }
    }
    cout<<sumkol-sumred<<endl;

}