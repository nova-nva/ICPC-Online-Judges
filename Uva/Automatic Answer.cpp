#include <iostream>
using namespace std;

int main(){
	int n; cin>>n;
	for(int i = 0; i<n; i++){
		long long p; cin>>p;
		p = p * 567;
		p = p / 9;
		p = p + 7492;
		p = p * 235;
		p = p / 47;
		p = p - 498; 
		(p<0)?p*=-1:p = p;
		cout<<(p/10)%10<<endl;
	}
}
