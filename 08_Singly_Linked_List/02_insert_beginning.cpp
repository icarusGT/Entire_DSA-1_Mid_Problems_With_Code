#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){ Node* head=NULL; int n,x; cin>>n; while(n--){cin>>x; Node* node=new Node{x,head}; head=node;} for(Node* c=head;c;c=c->next) cout<<c->data<<" "; }
