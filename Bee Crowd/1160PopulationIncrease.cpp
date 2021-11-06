//
// Created by Phoenix on 25/01/2021.
//

#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    for (int i = 0; i < t; ++i) {
        int pa, pb;
        double ga, gb;
        cin>>pa>>pb>>ga>>gb;
        double perca = ga/100;
        double percb = gb/100;
        int years = 0;
        while (pa <= pb){
            years++;
            if(years > 100){
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
            int auma = pa * perca;
            int aumb = pb * percb;
            pa += auma;
            pb += aumb;
        }
        if(years<=100){
            cout<<years<<" anos."<<endl;
        }
    }
}