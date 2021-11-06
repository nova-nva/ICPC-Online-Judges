//
// Created by Phoenix on 14/7/2021.
//

#include "iostream"
#include "cstdio"
using namespace std;

int main(){
    // init
    int init_day;
    scanf("Dia %d", &init_day);
    int hi, mi, si;
    scanf("%d : %d : %d", &hi, &mi, &si);
    string basura; cin>>basura;
    // end
    int end_day;
    scanf("Dia %d", &end_day);
    int hf, mf, sf;
    scanf("%d : %d : %d", &hf, &mf, &sf);

    cout<<"Inicio: Dia "<< init_day << " - "<< hi <<":"<<mi<<":"<<si<<endl;
    cout<<"Fin: Dia "<< end_day << " - "<< hf <<":"<<mf<<":"<<sf<<endl;
    // TODO: NOT ANSWERED YET
}