#include <iostream>
using namespace std;
int main(){
    int n,steps=0; cin>>n;
    // Protibar n half hocche, complexity O(log n)
    while(n>1){ n/=2; steps++; }
    cout<<steps;
}
