#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    //{10,5,8,3,6,4,9,7,1,2}
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[]={10,5,8,3,6,4,9,7,1,2},sorted[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    display(arr,n);
    return 0;   
}