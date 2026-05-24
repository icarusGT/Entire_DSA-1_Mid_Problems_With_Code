#include <iostream>
using namespace std;
int main(){
    int a[]={5,10,15,20}, n=4, target=99;
    // Target absent hole sob element check korte hoy, O(n)
    for(int i=0;i<n;i++) if(a[i]==target){ cout<<i; return 0; }
    cout<<"Not found, Worst case O(n)";
}
