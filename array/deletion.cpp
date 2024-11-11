#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int pos;
    cin>>pos;
    for(int i=pos;i<5;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<5-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}