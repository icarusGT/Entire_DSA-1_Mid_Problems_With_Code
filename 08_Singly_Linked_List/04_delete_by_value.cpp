#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){ Node *head=NULL,*tail=NULL; int n,x,target; cin>>n; while(n--){cin>>x; Node* node=new Node{x,NULL}; if(!head) head=tail=node; else{tail->next=node; tail=node;}} cin>>target; if(head&&head->data==target) head=head->next; else{Node* cur=head; while(cur&&cur->next&&cur->next->data!=target) cur=cur->next; if(cur&&cur->next) cur->next=cur->next->next;} for(Node* c=head;c;c=c->next) cout<<c->data<<" "; }
