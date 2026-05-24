#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){
     Node *front=NULL,
    *rear=NULL; 
    int n,x;
     cin>>n;
     while(n--){
        cin>>x; Node* node=new Node{x,NULL};
         if(!front) front=rear=node;
          else{rear->next=node; rear=node;}} 
          while(front){
             cout<<front->data<<" "; 
            front=front->next; }
         }
