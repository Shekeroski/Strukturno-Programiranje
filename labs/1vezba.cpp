#include<iostream>
using namespace std;
int main(){
    int x,k,a;
    float brojac=0,brojac2=0;
    cin>>x>>k;
    int temp=x;
    while(temp>0) {
        a=temp%10;
        brojac2++;
        if(a<k) {
            brojac++;
        }
        temp/=10;
    }
    cout<<(brojac/brojac2)*100<<"%"<<endl;
    return 0;
}