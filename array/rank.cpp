#include<iostream>
using namespace std;
int main(){
    int arr[5]={40,10,20,30,50},r=0,rank[5];
    for(int i=4;i>=0;i--){
        if(r<arr[i]){
            r=arr[i];
        }
        
    }
    return 0;
}