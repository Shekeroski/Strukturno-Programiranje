#include<iostream>
using namespace std;
int main(){
    int broj1,broj2,a,b,minuti;
    float namaluvanje=0,cena=0;
    cout<<"vnesi 2 broja: "<<endl;
    cin>>broj1;
    cin>>broj2;
    cout<<"vnesi kolku minuti razgovaravte: ";
    cin>>minuti;
    if(minuti<30){
        cena=minuti*3;
    }else {
        cena=(30*3)+((minuti-30)*2);
    }
    a=(broj1/1000000)%100;
    b=(broj2/1000000)%100;
    if(a==71 || a==72 || a==73 && b==71 || b==72 || b==73){
        namaluvanje=0.30*cena;
        cena-=namaluvanje;
        cout<<cena<<endl;
    }else if(a==74 || a==75 || a==76 && b==74 || b==75 || b==76){
        namaluvanje=0.30*cena;
        cena-=namaluvanje;
        cout<<cena<<endl;
    }else{
        cout<<cena<<endl;
    }

    return 0;
}