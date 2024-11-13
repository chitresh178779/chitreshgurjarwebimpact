#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[7]={1,0,0,2,0,5,6},d=0,temp=0;
    sort(arr,arr+7);
    for(int i=0;i<7;i++){
        if(arr[i]==0){
            d=d+1;
        }
    }
       for(int i=1;i<=d;i++){
         for(int j=0;j<=7;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            } 
            temp=0; 

    }
        
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}