#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int d,temp=0;
    cout<<"enter no of digits to be shifted :";
    cin>>d;
    for(int i=1;i<=d;i++){
        for(int j=0;j<=6;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        temp=0;
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}