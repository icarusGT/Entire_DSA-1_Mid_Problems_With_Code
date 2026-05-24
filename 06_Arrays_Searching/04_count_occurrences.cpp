#include <iostream>
using namespace std;
int main(){ int n,a[1000],t,c=0; cin>>n; for(int i=0;i<n;i++) cin>>a[i]; cin>>t; for(int i=0;i<n;i++) if(a[i]==t) c++; cout<<c; }
