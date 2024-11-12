#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,8,5,6,7,10,9},temp=0,n=10;
    //to left rotate the array by one
    for(int i=0;i<10;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}