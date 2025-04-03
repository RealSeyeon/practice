#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    cin>>b;
    c=b/100;
    d=(b%100)/10;
    e=b%10;
    cout<<a*e<<"\n";
    cout<<a*d<<"\n";
    cout<<a*c<<"\n";
    cout<<a*b<<"\n";
    return 0;
}