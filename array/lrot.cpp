#include <iostream>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,8,5,6},temp=0;
    //to left rotate the array by one
    for(int i=0;i<=7;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}