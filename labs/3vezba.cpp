/*studenti odat da se zapizat na finki
 finki pocnuva so upis vo 9 pa raboti 2 saati do 11 pa pauza pola sat
 pa raboti eden sat do 12 30 pa pak pauza pola saat pa
 raboti 2 saati do 14 30 i zavrsuva.
 za 1 student potrebni se 5min pregleduvanje
 vnesi reden broj na studentot i da ispise kolku saati i klk minuti ce ceka i dali dal dokumenti pred da zavrsi finki.
 */
#include<iostream>
using namespace std;
int main() {
    int redenbr;
    int saati;
    float minuti,minutes,minutic,c=0,d=(60*5)+30,pauza1,pauza2;
    cout<<"vnesi koj reden broj e studentot: "<<endl;
    cin>>redenbr;
    while(redenbr>1) {
        redenbr--;
        c+=5;
        minuti=c;
        minutic=c;
    }
    if(minuti>120) {
        minutic+=30;
    }else if(minuti>210) {
        minutic+=60;
    }
    saati=minutic/60;
    minutes=minutic-(60*saati);
    if(minutic<d) {
        cout<<"gi predal dokumentite i cekal:"<<saati<<"saati i "<<minutes<<"minuti"<<endl;
    }else {
        cout<<"ne gi predal dokumentite"<<endl;
    }
    return 0;
}