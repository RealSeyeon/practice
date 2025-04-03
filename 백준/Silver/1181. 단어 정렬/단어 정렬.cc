#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,length;
    cin>>n;
    string str;
    vector<pair<int,string>> vp;
    for(int i=0;i<n;i++){
        cin>>str;
        length=str.length();
        vp.push_back({length,str});
    }
    string prev=" ";
    sort(vp.begin(),vp.end());
    for(const auto& p:vp){
        if(p.second!=prev){
            cout<<p.second<<'\n';
            prev=p.second;
        }
    }
    return 0;
    
}