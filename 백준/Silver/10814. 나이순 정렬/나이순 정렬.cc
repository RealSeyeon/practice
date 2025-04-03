#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
using namespace std;

int main(){
    int n,age;
    string str;
    cin>>n;
    vector<tuple<int,int,string>> vt;
    for(int i=0;i<n;i++){
        cin>>age>>str;
        vt.push_back({age,i,str});
    }
    sort(vt.begin(),vt.end());
    for(const auto& p:vt){
        cout<<get<0>(p)<<" "<<get<2>(p)<<'\n';
    }
    return 0;
}