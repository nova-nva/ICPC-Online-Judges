#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin>>n;
	for(int i = 0; i<n; i++){
		vector<int> v;
		int a,b,c; cin>>a>>b>>c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		cout<<"Case "<<i+1<<": "<<v[1]<<endl;
	}
}
