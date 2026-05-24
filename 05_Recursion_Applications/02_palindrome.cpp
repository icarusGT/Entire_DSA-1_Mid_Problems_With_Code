#include <iostream>
using namespace std;
bool pal(string s,int l,int r){
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return pal(s,l+1,r-1);
}
int main(){ string s; cin>>s; cout<<(pal(s,0,s.size()-1)?"Palindrome":"Not Palindrome"); }
