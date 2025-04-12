#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    int n;
    cin>>n;
    int xx,yy,xy,yx;
    xx=a*10+a;
    yy=b*10+b;
    xy=a*10+b;
    yx=b*10+a;
    int broj;
    for(int i=0;i<n;i++) {
        cin>>broj;
        int flag1=1;
        int flag2=1;
       if(a!=0) {
           if(xx%broj==0) {
               cout<<"isti cifri"<<endl;
               flag1=0;
           }
       }
           if(flag1) {
               if(b!=0) {
                   if(yy%broj==0) {
                       cout<<"isti cifri"<<endl;
                       flag1=0;
                   }
               }
           }
        if(flag1) {
            if(a!=0) {
                if(xy%broj==0) {
                    cout<<"razlicni cifri"<<endl;
                    flag2=0;
                }
            }
            if(flag2) {
                if(b!=0) {
                    if(yx%broj==0) {
                        cout<<"razlicni cifri"<<endl;
                        flag2=0;
                    }
                }
            }
            if(flag2==1) {
                cout<<broj<<endl;
            }
        }
    }
    return 0;
}
