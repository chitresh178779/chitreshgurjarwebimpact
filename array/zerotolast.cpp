#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

}

int main(){
    int arr[5]={1,2,0,5,0};
    int arr2[5]={},j=0;
    for(int i=0;i<5;i++){
          if(arr[i]!=0){
            arr2[j]=arr[i];
            j++;
          }
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}