#include <iostream>
using namespace std;
int main(){
    int n, marks[1000]; cin>>n;
    for(int i=0;i<n;i++) cin>>marks[i];
    // Marks ascending order e sort
    for(int i=1;i<n;i++){
        int key=marks[i], j=i-1;
        while(j>=0 && marks[j]>key){ marks[j+1]=marks[j]; j--; }
        marks[j+1]=key;
    }
    for(int i=0;i<n;i++) cout<<marks[i]<<" ";
}
