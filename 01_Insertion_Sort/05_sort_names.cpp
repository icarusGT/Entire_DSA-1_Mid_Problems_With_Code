#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; string name[1000]; cin>>n;
    for(int i=0;i<n;i++) cin>>name[i];
    // String compare kore alphabetically sort
    for(int i=1;i<n;i++){
        string key=name[i]; int j=i-1;
        while(j>=0 && name[j]>key){ name[j+1]=name[j]; j--; }
        name[j+1]=key;
    }
    for(int i=0;i<n;i++) cout<<name[i]<<" ";
}
