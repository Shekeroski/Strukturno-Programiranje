#include<iostream>
using namespace std;
int main() {
    int n,max=0,min=999,k,j;
    int N;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    float s,prosek;
    cin>>N;
    for(int i=0;i<n-N+1;i++) {
        s=0;
      for(int j=i;j<i+N;j++) {
          s+=a[j];
      }
        prosek=s/N;
        cout<<prosek<<" ";
    }

    return 0;
}