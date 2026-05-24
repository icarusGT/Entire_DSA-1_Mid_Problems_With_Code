#include <iostream>
using namespace std;
void hanoi(int n,char src,char aux,char dest){
    if(n==0) return;
    hanoi(n-1,src,dest,aux);
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<"
";
    hanoi(n-1,aux,src,dest);
}
int main(){ int n; cin>>n; hanoi(n,'A','B','C'); }
