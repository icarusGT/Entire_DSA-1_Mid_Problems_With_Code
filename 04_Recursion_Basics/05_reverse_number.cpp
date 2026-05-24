#include <iostream>
using namespace std;
void rev(int n){
    if(n==0) return;
    cout<<n%10; // last digit print
    rev(n/10);
}
int main(){ int n; cin>>n; if(n==0) cout<<0; else rev(n); }
