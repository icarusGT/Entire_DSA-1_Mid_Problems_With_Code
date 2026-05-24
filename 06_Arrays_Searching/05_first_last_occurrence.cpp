#include <iostream>
using namespace std;
int first(int a[],int n,int t){int l=0,r=n-1,ans=-1; while(l<=r){int m=(l+r)/2; if(a[m]==t){ans=m; r=m-1;} else if(a[m]<t) l=m+1; else r=m-1;} return ans;}
int last(int a[],int n,int t){int l=0,r=n-1,ans=-1; while(l<=r){int m=(l+r)/2; if(a[m]==t){ans=m; l=m+1;} else if(a[m]<t) l=m+1; else r=m-1;} return ans;}
int main(){ int n,a[1000],t; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; cin>>t; cout<<first(a,n,t)<<" "<<last(a,n,t); }
