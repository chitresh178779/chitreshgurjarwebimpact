#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    int m;
    cin>>m;
    arr[n]=m;
    sort(arr,arr+n);
    for(int u=0;u<=n;u++){
        cout<<arr[u]<<" ";
    }
    return 0;
}