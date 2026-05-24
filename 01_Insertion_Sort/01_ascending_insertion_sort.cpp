#include <iostream>
using namespace std;
int main(){
    int n, arr[1000]; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    // Insertion sort ascending: left side sorted thake
    for(int i=1;i<n;i++){
        int key=arr[i], j=i-1;
        // key er cheye boro element gula right e shift kori
        while(j>=0 && arr[j]>key){ arr[j+1]=arr[j]; j--; }
        arr[j+1]=key; // key ke right position e boshao
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
