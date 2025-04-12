// vnesi n i p
//n broj na broevi,p brojce nekoe i da se proveri dali sekoj vnesen n broj e pogolem,ednakov ili pomal od p.
// i na kraj da se ispecati kolku procenti od vnesenite broevi se pogolemi,pomali ili ednakvi na p.
#include<iostream>
using namespace std;
int main() {
    float broj,n,p,brojac=0,a=0,b=0,c=0;
    cin>>p;
    cin>>n;
  for(int i=0;i<n;i++) {
      cin>>broj;
      if(broj>p) {
          brojac++;
      }
      if(broj<p) {
          a++;
      }
      if(broj==p) {
         b++;
      }
  }
     cout<<"pogolemi: "<<((brojac/n)*100)<<endl;
    cout<<"pomali: "<<((a/n)*100)<<endl;
    cout<<"ednakvi: "<<((b/n)*100)<<endl;
    return 0;
}
