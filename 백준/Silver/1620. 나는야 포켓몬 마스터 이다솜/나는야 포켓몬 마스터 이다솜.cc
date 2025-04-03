#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> P;
    vector<string> v;
    vector<string> result;
    int n,m;
    string name;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>name;
        v.push_back(name);
        P.insert(make_pair(name,i));
    }
    for(int i=0;i<m;i++){
        cin>>name;
        if(isdigit(name[0])!=0){
            result.push_back(v[stoi(name)-1]);
        }
        else result.push_back(to_string(P[name]+1));
    }
    for(int i=0;i<m;i++){
        cout<<result[i]<<'\n';
    }
    return 0;
}