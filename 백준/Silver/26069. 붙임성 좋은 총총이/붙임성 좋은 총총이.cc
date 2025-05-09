#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int n;
    string st1,st2;
    cin>>n;
    set<string> s;
    s.insert("ChongChong");
    while(n--){
        cin>>st1>>st2;
        if(s.find(st2)!=s.end()) s.insert(st1);
        else if(s.find(st1)!=s.end()) s.insert(st2);
    }
    cout<<s.size()<<'\n';
}