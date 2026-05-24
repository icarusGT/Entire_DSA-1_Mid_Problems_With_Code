#include <iostream>
using namespace std;
int main(){ int n,x,cnt[101]={0}; cin>>n; for(int i=0;i<n;i++){cin>>x; cnt[x]++;} for(int i=0;i<=100;i++) for(int j=0;j<cnt[i];j++) cout<<i<<" "; }
