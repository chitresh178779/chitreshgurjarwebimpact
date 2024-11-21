#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={-1,2,3,5,-8};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]<0){
                swap(arr[i],arr[j]);
            }
        }
    }
    display(arr,5);
    return 0;
}