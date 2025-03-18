#include <iostream>
using namespace std;

int main(){
    int n;
    long long m;
    cin>>n>>m;
    int *card=new int [n];
    int sum=0;
    int final=0;
   
    for(int i=0;i<n;i++){cin>>card[i];}
    for(int i=0;i<n-2;i++){
        sum=0;
        for (int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                sum=card[i]+card[j]+card[k];
                if(sum<=m&&sum>final) final=sum;
            }
        }
    }
    cout<<final<<endl;
    delete[] card;
    return 0;    
}