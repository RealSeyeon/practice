#include <iostream>
#include <stack>
using namespace std;

int main(){
    int sum=0,n,m;
    cin>>n;
    stack<int> s;
    while(n--){
        cin>>m;
        if(m==0){s.pop();}
        else s.push(m);
    }
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout<<sum<<"\n";
}