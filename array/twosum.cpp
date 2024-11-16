#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,3,4};
    int sum=8;
    for(int i=0;i<4;i++){
        int k=0;
        k=arr[i]+arr[i+1];
        if(k==sum){
            cout<<arr[i]<<" "<<arr[i+1];
        }
        
    }
    return 0;
}