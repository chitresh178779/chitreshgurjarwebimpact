#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int arr2[3]={2,3,5};
    int inter[4]={},k=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i]==arr2[j]){
                inter[k]=arr[i];
                k++;
                break;
            }
        }
    }
    display(inter,4);
    return 0;
}