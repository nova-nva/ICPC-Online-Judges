//
// Created by Phoenix on 23/7/2021.
//

#include "iostream"
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int greater = 0;
        for(int i = 0; i<n; i++){
            int slug; cin>>slug;
            if(greater<slug){
                greater = slug;
            }
        }
        if(greater >= 20){
            cout<<"3"<<endl;
        }
        else if(greater >= 10){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}