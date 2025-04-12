#include<iostream>
using namespace std;
int lozinka(long broj) {
  int a;
  int flag=0;
  int minndif=100;
  while(broj>0) {
    a=broj%100;
    broj/=100;
    if(a>=65 && a<=90 ) {
      flag=1;
      if(a<minndif) {
        minndif=a;

      }
    }
  }
  char c;
  c=char(minndif);
  cout<<c;

}
int main() {
  long n;
  cin>>n;
  lozinka(n);

}