//vnesi a,d,n
//a-prv clen na aritmeticka progresija,d-razlika pomegu sekoj clen,n-vkupno clenovi vo nizata
//da se otpecati progresija za vneseni prv clen,razlika i vkupno clenovi
#include<iostream>
using namespace std;
int main() {
    int a,d,n,art=0;
    cin>>a;
    cin>>d;
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<(a+(i*d))<<endl;
    }
   return 0;
}