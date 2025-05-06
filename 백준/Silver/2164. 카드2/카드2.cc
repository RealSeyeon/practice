#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i*2<=n){
        i*=2;
    }
    if(n==i) cout<<i;
    else cout<<2*(n-i);
}