#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{  
    int arr[]={10,5,8,3,6,4,9,7,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int j=1;j<=n;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    display(arr,n);
    return 0;
}