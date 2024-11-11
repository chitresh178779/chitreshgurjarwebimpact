#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[6]={1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m;
    cout<<"enter the element :";
    cin>>m;
    arr[n-1]=m;
    sort(arr,arr+6);
    for(int i=0;i<6;i++){
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
    }
    return 0;
}