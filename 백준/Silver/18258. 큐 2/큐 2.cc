#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    queue<int> q;
    int n;
    string s;
    cin>>n;
    int temp;
    while(n--){
        cin>>s;
        if(s=="push"){
            cin>>temp;
            q.push(temp); continue;
        }
        else if(s=="front"){
            if(q.empty()){
                cout<<"-1"<<'\n';
                continue;
            }
            cout<<q.front()<<'\n'; continue;
        }
        else if(s=="pop"){
            if(q.empty()){
                cout<<"-1"<<'\n'; continue;
            }
            cout<<q.front()<<'\n';
            q.pop();
        }
        else if(s=="size"){
            cout<<q.size()<<'\n'; continue;
        }
        else if(s=="empty"){
            if(q.empty()) cout<<'1'<<'\n';
            else cout<<'0'<<'\n'; continue;
        }
        else if(s=="back"){
            if(q.empty()) cout<<"-1"<<'\n';
            else cout<<q.back()<<'\n';
        }
    }
}