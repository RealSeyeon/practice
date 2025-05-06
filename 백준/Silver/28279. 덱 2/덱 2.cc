#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,temp;
    cin>>n;
    deque<int> d;
    while(n--){
        cin>>k;
        if(k==3||k==4||k==7||k==8){
            if(d.empty()) {
                cout<<"-1"<<'\n';
                continue;
            }
        }
        switch(k){
            case 1:
                cin>>temp;
                d.push_front(temp);
                break;
            case 2:
                cin>>temp;
                d.push_back(temp);
                break;
            case 3:
                cout<<d.front()<<'\n';
                d.pop_front();
                break;
            case 4:
                cout<<d.back()<<'\n';
                d.pop_back();
                break;
            case 5:
                cout<<d.size()<<'\n';
                break;
            case 6:
                cout<<(d.empty()?1:0)<<'\n';
                break;
            case 7:
                cout<<d.front()<<'\n';
                break;
            case 8:
                cout<<d.back()<<'\n';
                break;
        }  
    }
}