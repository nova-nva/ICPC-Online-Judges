//
// Created by Phoenix on 29/01/2021.
//

#include "iostream"
using namespace std;

int main(){
    int hi, mi, hf, mf;
    cin>>hi>>mi>>hf>>mf;
    int inicio = hi*60 + mi;
    int final = hf*60 + mf;
    if(inicio == final){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        return 0;
    }
    int c = 0;
    while(inicio != final){
        if(inicio == 1440){
            inicio = 0;
        }
        inicio++;
        c++;
    }
    int hrs = c/60;
    int mnts = c%60;
    cout<<"O JOGO DUROU "<<hrs<<" HORA(S) E "<<mnts<<" MINUTO(S)"<<endl;
}