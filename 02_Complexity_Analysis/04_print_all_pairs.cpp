#include <iostream>
using namespace std;
int main(){
    int n,a[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    // All pairs print korte nested loop lage, O(n^2)
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cout<<a[i]<<" "<<a[j]<<"
";
}
