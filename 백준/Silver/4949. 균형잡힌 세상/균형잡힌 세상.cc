#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    string str;
    while(true){
        getline(cin,str);
        if (str == ".") break;
        
        int len=str.length();
        stack<char> s;
        char c;
        bool yn=true;
        for(int i=0;i<len;i++){
            if(str[i]=='('||str[i]=='[') s.push(str[i]);
            
            else if(str[i]==')'){
                if(!s.empty()){
                    c=s.top();
                    if(c!='(') {
                        yn=false;
                        break;
                    }
                    s.pop();
                }
                else {yn=false; break;}
            }
            
            else if(str[i]==']') {
                if(!s.empty()){
                     c=s.top();
                     if(c!='[') {
                        yn=false;
                        break;
                     }
                    s.pop();
                }
                else {
                    yn=false; 
                    break;
                }
            }
            
        }
        if(!s.empty()) yn=false;
        if(yn) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
}