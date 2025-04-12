#include <iostream>
using namespace std;

void pecati(int n) {
    if(n==0) {
        return;
    }
    else {
        pecati(n-1);
    }
    cout << n;
}
void pecatiredovi(int n) {
    if(n==0) {
        return;
    }
    else {
        pecati(n);
        cout<<endl;
        pecatiredovi(n-1);
    }
}
int main() {
    int N;
    cin >> N;
pecatiredovi(N);
    return 0;
}