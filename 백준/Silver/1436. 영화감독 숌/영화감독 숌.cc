#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int check=0;
    for(long title=666;;title++){
        string stitle=to_string(title);
        if(stitle.find("666")!=-1){
            check++;
            if(check==n){
                cout<<title<<endl;
                break;
            }
        }
    }
    return 0;
}