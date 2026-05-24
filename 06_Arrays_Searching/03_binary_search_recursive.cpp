#include <iostream>
using namespace std;
int bs(int a[],int l,int r,int t){ if(l>r) return -1; int m=(l+r)/2; if(a[m]==t) return m; if(a[m]<t) return bs(a,m+1,r,t); return bs(a,l,m-1,t); }
int main(){ int n,a[1000],t; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; cin>>t; cout<<bs(a,0,n-1,t); }
