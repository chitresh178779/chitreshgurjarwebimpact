#include<iostream>
using namespace std;
int main(){
    int arr[5]={40,10,20,30,50},r=0,rank[5];
    for(int i=4;i>=0;i--){
        if(r<arr[i]){
            r=arr[i];
            int index=r/10;
            rank[i]=index;
            index=0;
            r=0;
        }
        
    }
    for(int i=0;i<5;i++){
        cout<<rank[i]<<" ";
    }
    return 0;
}