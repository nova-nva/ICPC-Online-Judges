//
// Created by Phoenix on 26/01/2021.
//

#include "iostream"
#include "cstdio"
using namespace std;

int main(){
    double n; cin>>n;
    double res = n;
    for (int i = 0; i < 100; ++i) {
        printf("N[%d] = %.4lf\n", i, res);
        res = res / 2;
    }
}