//
// Created by Phoenix on 27/01/2021.
//

#include "iostream"
#include "cstdio"
using namespace std;

int main(){
    string op; cin>>op;
    double m[12][12];
    double res = 0, c = 0;
    bool state = false;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin>>m[i][j];
            if (state){
                res += m[i][j];
                c++;
            }
            if (!state && j+i == 11){
                state = true;
            }
        }
        state = false;
    }
    if(op == "S"){
        printf("%.1lf\n", res);
    }
    else if(op == "M"){
        double media = res/c;
        printf("%.1lf\n", media);
    }
}