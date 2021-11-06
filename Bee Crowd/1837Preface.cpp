//
// Created by Phoenix on 26/7/2021.
//

#include "iostream"
using namespace std;

int main(){
    int a, b; cin>>a>>b;
    int div, res;
    if(a == b){
        div = 1;
        res = 0;
    }
    else if(a == -b || -a == b){
        div = -1;
        res = 0;
    }
    else if(b == 1){
        div = a;
        res = 0;
    }
    else if(b == -1){
        div = -a;
        res = 0;
    }
    else if(a > 0 && b > 0){
        if(a > b) {
            int c = 1;
            // aqui se usa <=
            while (b * c + b <= a) {
                c++;
            }
            div = c;
            res = a - c * b;
        }
        else{
            int c = 0;
            while (b * c + b < a) {
                c++;
            }
            div = c;
            res = a - c * b;
        }
    }
    else if(a < 0 && b > 0){
        int c = 0;
        while(b*c > a){
            c--;
        }
        div = c;
        res = a - c*b;
    }
    else if(a > 0 && b < 0){
        int c = 0;
        // Aqui se usa <=
        while(b*c -b<= a){
            c--;
        }
        div = c;
        res = a - c*b;
    }
    else if(a < 0 && b < 0){
        if(a > b){
            int c = 0;
            while(b*c > a){
                c++;
            }
            div = c;
            res = a - c*b;
        }
        else{
            int c = 0;
            while(b*c > a){
                c++;
            }
            div = c;
            res = a - c*b;
        }
    }
    else{
        div = a/b;
        res = a%b;
    }
    cout<<div<<" "<<res<<endl;
}