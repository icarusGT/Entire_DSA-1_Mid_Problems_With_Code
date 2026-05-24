#include <iostream>
using namespace std;
int main(){
    int n,sum=0; cin>>n;
    // Single loop, time complexity O(n)
    for(int i=1;i<=n;i++) sum+=i;
    cout<<sum;
}
