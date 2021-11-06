//
// Created by Phoenix on 17/7/2021.
//

#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int n;
    while (cin>>n && n!= 0){
        int matrix[n][n];
        int N;
        if(n == 1){
            N = 1;
        }
        else{
            if(n%2 == 0){
                N = n/2;
            }
            else{
                N = n/2 + 1;
            }
        }

        int nro;
        int i, j;
        for(int x = 0; x<N; x++) {
            i = x;
            j = x;
            nro = 1;
            while (i < n-x) {
                // de izquierda a derecha
                matrix[i][j] = nro;
                i++;
                nro++;
            }
            i--;
            nro--;

            while (j < n-x) {
                // de arriba a abajo
                matrix[i][j] = nro;
                j++;
                nro--;
            }
            j--;
            nro++;

            while (i >= 0+x) {
                // de derecha a izquierda
                matrix[i][j] = nro;
                i--;
                nro++;
            }
            i++;
            nro--;

            while (j >= 0+x) {
                // de abajo a arriba
                matrix[i][j] = nro;
                j--;
                nro--;
            }
            j++;
        }

        // print
        for(int x = 0; x<n; x++){
            for(int y = 0; y<n; y++){
                if(y==0) {
                    int dig = log10(matrix[x][y]) + 1;
                    for (int i = 0; i < 3 - dig; i++) {
                        cout << " ";
                    }
                }
                cout<<matrix[x][y];
                if(y==0 && matrix[x][y]>=10){
                    cout<<" ";
                }
                else if(y==0 && matrix[x][y]==100){
                    cout<<"  ";
                }
                if(y+1 != n){
                    if(matrix[x][y] == 100){
                        cout<<" ";
                    }
                    else if(matrix[x][y] >= 9 && matrix[x][y+1] >= 9){
                        cout<<"  ";
                    }
                    else{
                        cout<<"   ";
                    }
                }
                else{
                    cout<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
    //TODO: PRESENTATION ERROR
}