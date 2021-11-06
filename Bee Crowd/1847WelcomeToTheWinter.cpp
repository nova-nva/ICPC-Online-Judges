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
    if(state1 == state2){
        //(state1) ? cout<<":)"<<endl : cout<<":("<<endl;
        cout<<"iguales"<<endl;
    }
    else{
        if(grade1 >= grade2){
            //(state1) ? cout<<":)"<<endl : cout<<":("<<endl;
            cout<<"grado 1 mayor o igual"<<endl;
        }
        else{
            //(state2) ? cout<<":)"<<endl : cout<<":("<<endl;
            cout<<"grado 2 mayor"<<endl;
        }
    }
}