#include <iostream>
using namespace std;
int main(){ int n,a[1000]; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<n-1;i++){ int mn=i; for(int j=i+1;j<n;j++) if(a[j]<a[mn]) mn=j; swap(a[i],a[mn]); } for(int i=0;i<n;i++) cout<<a[i]<<" "; }
