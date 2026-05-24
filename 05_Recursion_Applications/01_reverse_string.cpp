#include <iostream>
using namespace std;
void reverseStr(string s,int i){
    if(i<0) return;
    cout<<s[i];
    reverseStr(s,i-1);
}
int main(){ string s; cin>>s; reverseStr(s,s.size()-1); }
