#include <iostream>
using namespace std;
int main(){ int n,a[1000],cnt[10001]={0},mx=0; cin>>n; for(int i=0;i<n;i++){cin>>a[i]; if(a[i]>mx) mx=a[i]; cnt[a[i]]++;} for(int v=0;v<=mx;v++) while(cnt[v]--) cout<<v<<" "; }
