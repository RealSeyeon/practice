#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}


vector<int> getPrime(int n,int m, vector<int> &v){
    for(int i=n;i<=m;i++){
        if(isPrime(i)) v.push_back(i);
    }
    return v;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector <int> s;
    s=getPrime(n,m,s);
    for(int n:s){
        cout<<n<<endl;
    }    
}
