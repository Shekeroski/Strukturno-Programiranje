#include<iostream>
using namespace std;
int main() {
     int n,rastecka=1,opajgacka=1;
     cin>>n;
     int niza[n];
     for(int i=0;i<n;i++) {
          cin>>niza[i];
     }
     for(int i=0;i<n-1;i++) {
          if(niza[i]>niza[i+1]) {
              rastecka=0;
               break;
          }
     }
     for(int i=0;i<n-1;i++) {
          if(niza[i]<niza[i+1]) {
               opajgacka=0;
               break;
          }
     }
     if(rastecka) {
          cout<<"Rastecka"<<endl;
     }
     else if(opajgacka) {
          cout<<"Opajgacka"<<endl;
     }else {
          cout<<"ni ni"<<endl;
     }
}
