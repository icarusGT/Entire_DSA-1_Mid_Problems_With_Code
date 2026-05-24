#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){ Node* head=NULL; Node* tail=NULL; int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x; Node* node=new Node{x,NULL}; if(head==NULL) head=tail=node; else{tail->next=node; tail=node;}} for(Node* cur=head;cur!=NULL;cur=cur->next) cout<<cur->data<<" "; }
