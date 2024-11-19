#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,4,8,6,2,3,1,5,10,100},max=arr[0],min=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max:"<<max<<" min:"<<min;
    return 0;
}