//
// Created by Phoenix on 25/01/2021.
//

#include <iostream>
using namespace std;

int main(){
    int array[10];
    for (int i = 0; i < 10; ++i) {
        int number;
        cin>>number;
        if(number < 1){
            number = 1;
        }
        array[i] = number;
        cout<<"X["<<i<<"] = "<<array[i]<<endl;
    }
}