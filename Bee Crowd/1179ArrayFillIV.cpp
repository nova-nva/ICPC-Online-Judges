//
// Created by Phoenix on 26/01/2021.
//

#include <iostream>
#include "vector"
using namespace std;

int main(){
    int n;
    vector <int> par;
    vector <int> impar;
    for (int i = 0; i < 15; ++i) {
        cin>>n;
        if(n%2 == 0){
            par.push_back(n);
        }
        else{
            impar.push_back(n);
        }
        if (par.size() == 5){
            for (int j = 0; j < par.size(); ++j) {
                cout<<"par["<<j<<"] = "<<par[j]<<endl;
            }
            par.clear();
        }
        if (impar.size() == 5){
            for (int j = 0; j < impar.size(); ++j) {
                cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
            }
            impar.clear();
        }
    }
    if(!impar.empty()){
        for (int n = 0; n < impar.size(); ++n) {
            cout<<"impar["<<n<<"] = "<<impar[n]<<endl;
        }
    }
    if(!par.empty()){
        for (int n = 0; n < par.size(); ++n) {
            cout<<"par["<<n<<"] = "<<par[n]<<endl;
        }
    }
}