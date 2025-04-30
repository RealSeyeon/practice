#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int n=1000000;
vector<bool> prime(n+1,true);

void setPrime(){
    for(int i=2;i*i<=n;i++){
        if(!prime[i]) continue;
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    setPrime();
    int n,k;
    cin>>n;
    while(n--){
        int count=0;
        cin>>k;
        vector <int> v;
        for(int i=2;i<k;i++){
            if(prime[i]) v.push_back(i);
        }
        for(auto it=v.begin();it!=v.end();++it){
            int other=k-*it;
            if(other<*it) break;
            if(binary_search(it,v.end(),other)) count++;
        }
        cout<<count<<endl;
    }
}