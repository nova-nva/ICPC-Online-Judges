//
// Created by Phoenix on 17/7/2021.
//

#include "iostream"
using namespace std;

int main(){
    int n; cin>>n;
    while (n != 0){
        int matrix[n][n];
        // bordes y numero a imprimir
        int b1=0, b2=n-1;
        int nros[n];
        for(int i = 0; i<n; i++){
            nros[n] = i;
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix[i][j] = i+j;
                cout<<matrix[i][j];
                if(j+1 == n){
                    cout<<endl;
                }
                else{
                    cout<<"   ";
                }
            }
        }
        cout<<endl;
        cin>>n;
    }
    //TODO: NOT ANSWERED YET
    return 0;
}