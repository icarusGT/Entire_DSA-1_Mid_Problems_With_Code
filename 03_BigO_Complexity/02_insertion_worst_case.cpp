#include <iostream>
using namespace std;
int main(){
    int n,a[1000],shift=0; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    // Reverse sorted array hole worst case O(n^2)
    for(int i=1;i<n;i++){
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key){ a[j+1]=a[j]; shift++; j--; }
        a[j+1]=key;
    }
    cout<<"Shifts: "<<shift;
}
