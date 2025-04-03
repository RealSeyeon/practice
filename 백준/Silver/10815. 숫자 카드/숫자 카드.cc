#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n;
    vector<int> vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
    sort(vp.begin(),vp.end());
    cin>>m;
    int temp;
    for(int i=0;i<m;i++){
        cin>>temp;
        if(binary_search(vp.begin(),vp.end(),temp)){
            cout<<"1 ";
        }
        else cout<<"0 ";
    }
    return 0;
    
}