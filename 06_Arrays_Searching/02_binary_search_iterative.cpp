#include <iostream>
using namespace std;
int main(){ int n,a[1000],t; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; cin>>t; int l=0,r=n-1; while(l<=r){ int m=(l+r)/2; if(a[m]==t){cout<<m; return 0;} if(a[m]<t) l=m+1; else r=m-1; } cout<<-1; }
