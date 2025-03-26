#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
}

int setmid(int arr[]){
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    return arr[2];
}

int setave(int arr[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum/5;
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int a=setave(arr);
    int b=setmid(arr);
    cout<<a<<'\n'<<b<<endl;
    return 0;
}