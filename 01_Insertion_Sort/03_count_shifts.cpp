#include <iostream>
using namespace std;
int main(){
    int n, arr[1000], shifts=0; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
        int key=arr[i], j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j]; // ekta shift holo
            shifts++;
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted: "; for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"
Shifts: "<<shifts;
}
