#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    map<string,string> logs;
    string name,status;
    
    
    for(int i=0;i<n;i++){
        cin>>name>>status;
        logs[name]=status;
    }
    
    vector<string> result;
    
    for(auto &entry: logs){
        if(entry.second=="enter")
                result.push_back(entry.first);
    }
    sort(result.rbegin(),result.rend());
    
    for(const auto&name: result){
        cout<<name<<'\n';
    }
    return 0;
}
