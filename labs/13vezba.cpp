#include<iostream>
using namespace std;
int kolkupati(int a,int b, int c) {
    int i=0;
    int broj=a+1;
    while(i<10) {
        int tmp=broj;
        int brojac=0;
        int k;
        while(tmp>0) {
            k=tmp%10;
            if(k==b) {
                brojac++;
            }
            tmp/=10;
        }
        if(brojac==c) {
            cout<<broj<<endl;
            i++;
        }
        broj++;
    }
}
int main() {
    int x,c,p;
    cin>>x;
    cin>>c;
    cin>>p;
    kolkupati(x,c,p);
}