#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;                   // i==j glavna
    int a[n][n];             // i+j==n-1 sporedna
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
   for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>j) {
                a[i][j]*=-1;       //pod glavna dijagonala
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i+j>n-1) {
                a[i][j]*=-1;      //pod sporedna dijagonala
            }
        }
    }

        for(int i=0;i<n;i++) {
          for(int j=0;j<n;j++) {
             if(i+j<n-1) {
              a[i][j]*=-1;      //nad sporedna dijagonala
           }
       }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j>i) {
                a[i][j]*=-1;  //nad glavna dijagonala
            }
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