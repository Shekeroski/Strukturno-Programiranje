#include<iostream>
using namespace std;
int posledni2cifri(int a) {
    while(a>99) {
        a/=10;
    }
    cout<<a<<endl;
}
int main() {
    int n;
    while(cin>>n) {
        posledni2cifri(n);
    }
}