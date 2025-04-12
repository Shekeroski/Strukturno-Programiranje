// vnesuvas broj x i da se ispecatat site tricifreni broevi koi se delivi so brojot x
#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=100;i<=999;i++) {
        if(i%x==0) {
           cout<<i<<endl;
        }
    }
    return 0;
}