#include<iostream>
using namespace std;
int main() {
    int n;
    float p=0,np=0;
    float psuma=0,nsuma=0;
    float avg;
    int niza[10];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>niza[i];
    }
    for(int i=0;i<n;i++) {
        if(niza[i]%2==0) {
            psuma+=niza[i];
            p++;
        }else {
            nsuma+=niza[i];
            np++;
        }
    }
    avg=p/np;
    cout<<psuma<<endl;
    cout<<nsuma<<endl;
    cout<<"Average = "<<avg<<endl;
}