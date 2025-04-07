#include <iostream>
#include <set>

using namespace std;

int main(){
    string str;
    cin>>str;
    set<string> subStr;
    for(int i=0;i<str.length();i++){
        string tmp="";
        for(int j=i;j<str.length();j++){
            tmp+=str[j];
            subStr.insert(tmp);
        }
    }
    cout<<subStr.size();
    return 0;
}