#include<iostream>
using namespace std;
int main() {
int n,max=0,s,indeks=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
         s=0;
        for(int j=0;j<n;j++) {
            s=s+a[j][i];
        }
        if(s>max) {
            max=s;
            indeks=i;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=indeks;j==indeks;j++) {
            a[i][j]+=max;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}