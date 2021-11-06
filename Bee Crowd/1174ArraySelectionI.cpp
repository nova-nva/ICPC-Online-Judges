//
// Created by Phoenix on 25/01/2021.
//

#include "iostream"
#include "cstdio"
using namespace std;

int main(){
    double array[100];
    for (int i = 0; i < 100; ++i) {
        cin>>array[i];
        if(array[i] <= 10){
            printf("A[%d] = %.1lf\n", i, array[i]);
        }
    }
}