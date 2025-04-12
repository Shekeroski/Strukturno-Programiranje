#include<iostream>
using namespace std;

int func(int n) {
    if(n==0) {
        return 0;
    }
    int lastdigit=n%10;
    int lastlastdigit=n/10%10;
    if(lastdigit==lastlastdigit) {
        return 2+func(n/10);
    }
    if(n%10==8) {
        return 1+func(n/10);
    }
    return func(n/10);
}

int main() {
    int n;
    cin>>n;
    cout<<func(n);
}
