#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    vector<int> v;
    vector<int> s;
    int temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        auto l=lower_bound(v.begin(),v.end(),temp);
        auto h=upper_bound(v.begin(),v.end(),temp);
        s.push_back(h-l);
    }
    for(int i=0;i<m;i++){
        cout<<s[i]<<" ";
    }
    cout<<'\n';
    return 0;
}