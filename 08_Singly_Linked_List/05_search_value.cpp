#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){ Node *head=NULL,*tail=NULL; int n,x,t,pos=0; cin>>n; while(n--){cin>>x; Node* node=new Node{x,NULL}; if(!head) head=tail=node; else{tail->next=node; tail=node;}} cin>>t; for(Node* c=head;c;c=c->next,pos++){ if(c->data==t){cout<<pos; return 0;} } cout<<-1; }
