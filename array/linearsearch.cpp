#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,8,7,3,9};
    int search,found=0,pos=0;
    cin>>search;
    for(int i=0;i<5;i++){
        if(arr[i]==search){
            found=1;
            pos=i;
        }
    }
    if(found==1){
        cout<<"element found at index :"<<pos;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}