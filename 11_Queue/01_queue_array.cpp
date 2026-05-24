#include <iostream>
using namespace std;
int main(){ int q[100],
    front=0,rear=-1,n,
    x; cin>>n; 
    while(n--){cin>>x; 
        q[++rear]=x;} 
        while(front<=rear) 
        cout<<q[front++]<<" ";
     }
