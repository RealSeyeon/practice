#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b;
    cin>>c>>d;
    
    e=b*d;
    f=c*b+a*d;
    int re=gcd(e,f);
    cout<<f/re<<" "<<e/re<<"\n";
    return 0;
}