#include<iostream>
using namespace std;
#include <iomanip>
void scale(float *a, int n) {
 float max=0;
    for (int i = 0; i < n; i++) {
        if(*(a+i)>max) {
            max=*(a+i);
        }
    }

      float vrednost=100/max;
    for (int i = 0; i < n; i++) {
        *(a+i)*=vrednost;
    }
    for (int i = 0; i < n; i++) {
        cout<<fixed<<setprecision(2)<< *(a+i) << " ";
    }
}

int main() {
    int n;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    scale( a, n);

    return 0;
}