#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> s;
    int n,t,cnt=1;
    cin>>n;
    while(n--){
        cin>>t;
        if(cnt==t) cnt++;
        else s.push(t);
        
        while(!s.empty()&&s.top()==cnt){
            s.pop();
            cnt++;
        }
    }
    if(s.empty()) cout<<"Nice";
    else cout<<"Sad";
}