#include <iostream>
using namespace std;
int main(){
    int n,a[1000]; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int mx=a[0];
    // One loop, O(n)
    for(int i=1;i<n;i++) if(a[i]>mx) mx=a[i];
    cout<<mx;
}
