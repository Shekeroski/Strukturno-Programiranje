#include<iostream>
using namespace std;

void niza(int *a,int n) {
    int max=0,min=99,s=0;
    for(int i=0;i<n;i++) {
        if(*(a+i)>max) {
            max=*(a+i);
        }
    }
    for(int i=0;i<n;i++) {
        if(*(a+i)<min) {
            min=*(a+i);
        }
    }
    for(int i=0;i<n;i++) {
            s+=*(a+i);
    }
    for(int i=0;i<n;i++) {
        *(a+i)+=max-min;
    }
    cout<<max<<endl;
    cout<<min<<endl;
    for(int i=0;i<n;i++) {
        cout<<*(a+i)<<" ";
    }
}
int main() {
    int n,max=0,min=99,s=0;;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    niza(a,n);
     return 0;
}