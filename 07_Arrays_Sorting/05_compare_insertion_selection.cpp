#include <iostream>
using namespace std;
void insertion(int a[],int n){ for(int i=1;i<n;i++){int key=a[i],j=i-1; while(j>=0&&a[j]>key){a[j+1]=a[j]; j--;} a[j+1]=key;} }
void selection(int a[],int n){ for(int i=0;i<n-1;i++){int mn=i; for(int j=i+1;j<n;j++) if(a[j]<a[mn]) mn=j; swap(a[i],a[mn]);} }
int main(){ int n,a[1000],b[1000]; cin>>n; for(int i=0;i<n;i++){cin>>a[i]; b[i]=a[i];} insertion(a,n); selection(b,n); for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"
"; for(int i=0;i<n;i++) cout<<b[i]<<" "; }
