#include<iostream>
using namespace std;

int linearsearch(int *arr,int n,int k) {
    for(int i=0;i<n;i++) {
        if(*(arr+i)==k) {
            return i;
        }
    }
    return -1;
}

int binarysearch(int *arr,int start,int n,int k) {
    while(start<=n) {
        int mid=(start+n-1)/2;
        if(*(arr+mid)==k) {
            return mid;
        }
        if(*(arr+mid)<k) {
            start=mid+1;
        }
        if(*(arr+mid)>k) {
            n=mid-1;
        }
    }
}

int main() {
    int n,key,i;
    cin>>n;
    cin>>key;
    int arr[n];
    for( i=0;i<n;i++) {
        cin>>arr[i];
    }
    linearsearch(arr,n,key);
    cout<<linearsearch(arr,n,key);

    cout<<endl;

    binarysearch(arr,i,n,key);
    cout<<binarysearch(arr,i,n,key);
}