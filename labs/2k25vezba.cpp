#include <iostream>
using namespace std;
void pecati(char c, bool backwards) {
    if((c>'z' || c<'a') && (c < 'A'|| c > 'Z')) {
        return;
    }
    cout<<c<<" ";
    if(backwards==0) {
        pecati(c-1,backwards);
    }
    if(backwards==1) {
        pecati(c+1,backwards);
    }
}
int main() {
    char n;
    bool k;
    cin>>n>>k;
    pecati(n,k);
}