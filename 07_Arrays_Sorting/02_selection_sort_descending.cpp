#include <iostream>
using namespace std;
int main(){ int n,a[1000]; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<n-1;i++){ int mx=i; for(int j=i+1;j<n;j++) if(a[j]>a[mx]) mx=j; swap(a[i],a[mx]); } for(int i=0;i<n;i++) cout<<a[i]<<" "; }
