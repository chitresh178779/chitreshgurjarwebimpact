#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,6,8,2,1,4},par[6];
    for(int i=0;i<6;i++){
        if(i%2==0){
            for(int j=0;j<6;j++){
                if(arr[i]%2==0){
                    par[i]=arr[i];
                    break;
                }
                else{
                    par[i]=arr[i+1];
                    break;
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}