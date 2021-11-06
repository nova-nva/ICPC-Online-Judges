//
// Created by Phoenix on 26/01/2021.
//

#include "iostream"
using namespace std;

int main(){
    long long fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;
    long long a = 0, b = 1;
    for (int j = 2; j < 61; ++j) {
        fibo[j] = a + b;
        a = b;
        b = fibo[j];
    }

    int t; cin>>t;
    for (int i = 0; i < t; ++i) {
        int n; cin>>n;
        cout<<"Fib("<<n<<") = "<<fibo[n]<<endl;
    }
}