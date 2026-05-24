#include <iostream>
using namespace std;
int main(){
    int n,a[1000],cmp=0; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    // Already sorted array hole best case O(n)
    for(int i=1;i<n;i++){
        int key=a[i],j=i-1;
        while(j>=0){ cmp++; if(a[j]>key){a[j+1]=a[j]; j--;} else break; }
        a[j+1]=key;
    }
    cout<<"Comparisons: "<<cmp;
}
