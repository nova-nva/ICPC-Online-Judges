//
// Created by Phoenix on 26/01/2021.
//

#include "iostream"
using namespace std;

int main(){
    int n; cin>>n;
    int c = 0;
    for (int i = 0; i < 1000; ++i) {
        cout<<"N["<<i<<"] = "<<c<<endl;
        c++;
        if (c == n){
            c = 0;
        }
    }
}