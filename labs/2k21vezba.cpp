#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
  for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>j && i+j>n-1) {
                a[i][j]*=-1;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";    //pod sporedna i pod glavna dijagonala
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i<j && j+i<n-1) {
                a[i][j]*=-1;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {   // nad sporedna i glavna dijagonala
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}