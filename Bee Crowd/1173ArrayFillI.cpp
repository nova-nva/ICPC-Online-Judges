//
// Created by Phoenix on 25/01/2021.
//

#include "iostream"
using namespace std;

int main(){
    int array[10];
    int n; cin>>n;
    for (int i = 0; i < 10; ++i) {
        array[i] = n;
        n *= 2;
        cout<<"N["<<i<<"] = "<<array[i]<<endl;
    }
}