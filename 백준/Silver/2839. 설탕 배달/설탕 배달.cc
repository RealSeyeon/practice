#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int a=n/5;
    for(int i=a;;i--){
        int b=(n-i*5)%3;
        if(b==0){
            cout<<i+(n-i*5)/3<<endl;
            break;
        }
        if(i==0) {cout<<-1<<endl; break;}
    }
    return 0;
}