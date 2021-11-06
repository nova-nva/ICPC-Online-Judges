//
// Created by Phoenix on 26/01/2021.
//

#include "iostream"
using namespace std;

int main(){
    int n; cin>>n;
    int menor; cin>>menor;
    int pos = 0;
    for (int i = 1; i < n; ++i) {
        int value; cin>>value;
        if(value < menor){
            menor = value;
            pos = i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
}