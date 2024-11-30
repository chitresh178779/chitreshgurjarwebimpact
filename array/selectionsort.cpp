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
int main(){
    int arr[5]={8,6,4,1,2};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    display(arr,5);
    return 0;
}