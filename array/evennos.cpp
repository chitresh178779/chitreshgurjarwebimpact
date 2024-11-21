#include<iostream>
using namespace std;
void displayeven(int a[],int size){
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
        
    }
}
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   displayeven(arr,10);
   return 0;
}