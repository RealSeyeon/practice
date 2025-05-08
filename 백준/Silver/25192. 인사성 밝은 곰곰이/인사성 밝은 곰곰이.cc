#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string str;
    set<string> s;
    int count=0;
    while(n--){
        cin>>str;
        if(str=="ENTER"){
            s.clear();
            continue;
        }
        if(s.find(str)==s.end()){
            s.insert(str);
            count++;
        }
    }
    cout<<count<<'\n';
    
}