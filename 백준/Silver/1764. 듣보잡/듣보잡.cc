#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<string> v;
    vector<string> s;
    string temp;
    
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        cin>>temp;
        s.push_back(temp);
    }
    int count=0;
    vector<string> result;
    for(int i=0;i<m;i++){
       auto it=lower_bound(v.begin(),v.end(),s[i]);
       if(it!=v.end()&&*it==s[i]){
           count++;
           result.push_back(*it);
       }
    }
    sort(result.begin(),result.end());
    cout<<count<<'\n';
    for(const auto& ip:result){
        cout<<ip<<'\n';
    }
    return 0;
}