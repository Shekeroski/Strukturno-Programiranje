#include<iostream>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    float suma=0;
    float prosek=0;
    for(int i=0;i<n;i++) {
        suma+=a[i];
    }
    prosek=suma/n;
    for(int i=0;i<n;i++) {
        if(a[i]>max) {
            max=a[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]>prosek) {
            a[i]=max;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}