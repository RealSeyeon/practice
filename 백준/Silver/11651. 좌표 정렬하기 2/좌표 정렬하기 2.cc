#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vp.push_back({y,x});
    }
    sort(vp.begin(),vp.end());
    for(const auto& p:vp){
        cout<<p.second<<" "<<p.first<<'\n';
    }
    return 0;
}