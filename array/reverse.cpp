#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},rev[5],j=0;
    for(int i=4;i>=0;i--){
        rev[j]=arr[i];
        j++;
    }
    for(int i=0;i<5;i++){
        cout<<rev[i]<<" ";
    }


}