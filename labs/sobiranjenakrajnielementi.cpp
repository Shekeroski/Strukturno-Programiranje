#include<iostream>
using namespace std;

void transform(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        arr[i] += arr[j];
        arr[j] = arr[i];
    }

    if (n % 2) {
        arr[n / 2] *= 2;
    }
}

int main() {
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    transform(arr,n);
    for(int i=0;i<n;i++) {
      cout<<arr[i]<<" ";
    }
}