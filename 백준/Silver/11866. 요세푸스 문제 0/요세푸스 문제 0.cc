#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(){
    int n,k;
    cin>>n>>k;
    Node *ns=new Node[n];
    for(int i=0;i<n;i++){
        ns[i].data=i+1;
        ns[i].next=&ns[(i+1)%n];
    }
    cout<<"<";
    Node *prev=&ns[n-1];
    Node *curr=&ns[0];
    while(n>0){
       for(int i=0;i<k-1;i++){
           prev=curr;
           curr=curr->next;
       }
        prev->next=curr->next;
        cout<<curr->data;
        curr=curr->next;
        if(n>1) cout<<", ";
        n--;
    }
    cout<<'>'<<'\n';
    delete[] ns;
}