#include <iostream>
#include <map>
using namespace std;

int main(){
	map <string, string> m;
	m["HELLO"] = "ENGLISH";
	m["HOLA"] = "SPANISH";
	m["HALLO"] = "GERMAN";
	m["BONJOUR"] = "FRENCH";
	m["CIAO"] = "ITALIAN";
	m["ZDRAVSTVUJTE"] = "RUSSIAN";
	
	string n; cin>>n;
	int c = 1;
	while(n != "#"){
		if(m.count(n) != 0){
			cout<<"Case "<<c<<": "<<m[n]<<endl;
		}
		else{
			cout<<"Case "<<c<<": "<<"UNKNOWN"<<endl;
		}
		c++;
		cin>>n;
	}
	
}
