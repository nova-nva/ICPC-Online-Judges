//
// Created by Phoenix on 28/7/2021.
//

#include "iostream"
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    // dos estados: ascending (true), descending (false)
    bool state1;
    int grade1;
    if(a >= b){
        state1 = false;
        grade1 = abs(a-b);
    }
    else{
        state1 = true;
        grade1 = abs(a-b);
    }
    bool state2;
    int grade2;
    if(b >= c){
        state2 = false;
        grade2 = abs(b-c);
    }
    else{
        state2 = true;
        grade2 = abs(b-c);
    }
    if(state1 == state2) {
        if (state1) {
            if (grade2 >= grade1) {
                cout << ":)" << endl;
            }
            else{
                cout<<":("<<endl;
            }
        }
        else{
            if(grade2 < grade1){
                cout<<":)"<<endl;
            }
            else{
                cout<<":("<< endl;
            }
        }
    }
    else{
        if(state1){
            cout<<":("<<endl;
        }
        else{
            cout<<":)"<<endl;
        }
    }
}