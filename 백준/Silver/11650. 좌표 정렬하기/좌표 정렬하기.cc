#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end());
    for(const auto& p:vp){
        cout<<p.first<<" "<<p.second<<"\n";
    }
    return 0;
}