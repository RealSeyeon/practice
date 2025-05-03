#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        stack<char> s;
        cin>>str;
        bool b=true;
        for(auto m:str){
            if(m=='(') s.push('(');
            else {
                if(s.empty()){
                    b=false; break;
                }
                s.pop();
            }
        }
        if(!s.empty()) b=false;
        if(b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}