#include <iostream>
using namespace std;
int main() {
    int q[5], front = -1, rear = -1;
    for (int i = 1; i <= 5; i++) {
        if ((rear + 1) % 5 == front) {
        cout << "Full
                "; break;} if(front==-1) front=0; rear=(rear+1)%5; q[rear]=i; "
                "} while(front!=-1){ cout<<q[front]<<"
                "; if(front==rear) front=rear=-1; else front=(front+1)%5; } }
