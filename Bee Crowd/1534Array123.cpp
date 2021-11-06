//
// Created by Phoenix on 23/7/2021.
//

#include "iostream"
using namespace std;

int main() {
    int n;
    while(cin>>n){
        if(n < 3 || n > 69){
            continue;
        }
        int array[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                array[n][n] = 3;
                if(i == j){
                    array[n][n] = 1;
                }
                if(i+j == n-1){
                    array[n][n] = 2;
                }
                cout<<array[n][n];
            }
            cout<<endl;
        }
    }

    // TODO: runtime error
}