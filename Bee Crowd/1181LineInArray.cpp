//
// Created by Phoenix on 26/01/2021.
//

#include "iostream"
#include "cstdio"
using namespace std;

int main(){
    int line; cin>>line;
    string op; cin>>op;
    double m[12][12];
    double res = 0;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin>>m[i][j];
            if (i == line){
                res += m[i][j];
            }
        }
    }
    if(op == "S"){
        printf("%.1lf\n", res);
    }
    else if(op == "M"){
        double media = res/12;
        printf("%.1lf\n", media);
    }
}