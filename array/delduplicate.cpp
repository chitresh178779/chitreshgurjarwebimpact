#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5]={1,4,4,2,5};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
            arr[i+1]=0;
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
    

    return 0;
}