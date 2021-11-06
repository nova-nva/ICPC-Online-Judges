//
// Created by Phoenix on 23/7/2021.
//

#include "iostream"
#include "map"
using namespace std;

int main(){
    // 1 = gana
    // 0 = empata
    // -1 = pierde
    map<string, map<string, int>> rules;

    // tijeras
    map<string, int> scissors;
    scissors.insert(make_pair("papel", 1));
    scissors.insert(make_pair("lagarto", 1));
    scissors.insert(make_pair("Spock", -1));
    scissors.insert(make_pair("pedra", -1));
    scissors.insert(make_pair("tesoura", 0));
    rules.insert(make_pair("tesoura", scissors));

    // papel
    map<string, int> paper;
    paper.insert(make_pair("papel", 0));
    paper.insert(make_pair("lagarto", -1));
    paper.insert(make_pair("Spock", 1));
    paper.insert(make_pair("pedra", 1));
    paper.insert(make_pair("tesoura", -1));
    rules.insert(make_pair("papel", paper));

    // piedra
    map<string, int> rock;
    rock.insert(make_pair("papel", -1));
    rock.insert(make_pair("lagarto", 1));
    rock.insert(make_pair("Spock", -1));
    rock.insert(make_pair("pedra", 0));
    rock.insert(make_pair("tesoura", 1));
    rules.insert(make_pair("pedra", rock));

    // lagarto
    map<string, int> lizard;
    lizard.insert(make_pair("papel", 1));
    lizard.insert(make_pair("lagarto", 0));
    lizard.insert(make_pair("Spock", 1));
    lizard.insert(make_pair("pedra", -1));
    lizard.insert(make_pair("tesoura", -1));
    rules.insert(make_pair("lagarto", lizard));

    // spock
    map<string, int> spock;
    spock.insert(make_pair("papel", -1));
    spock.insert(make_pair("Spock", 0));
    spock.insert(make_pair("lagarto", -1));
    spock.insert(make_pair("pedra", 1));
    spock.insert(make_pair("tesoura", 1));
    rules.insert(make_pair("Spock", spock));

    int n; cin>>n;
    for(int i = 0; i<n; i++){
        string sheldon, raj;
        cin>>sheldon>>raj;
        int answ = rules[sheldon][raj];
        if(answ == 0){
            cout<<"Caso #"<<i+1<<": De novo!"<<endl;
        }
        else if(answ == -1){
            cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
        }
        else{
            cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
        }
    }
}