#include <iostream>
using namespace std;
int search(int a[],int n,int target,int i){
    if(i==n) return -1;
    if(a[i]==target) return i;
    return search(a,n,target,i+1);
}
int main(){ int n,a[1000],t; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; cin>>t; cout<<search(a,n,t,0); }
