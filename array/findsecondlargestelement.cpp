#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,5,7};
    int max=arr[0],max2=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }      

    for(int i=0;i<5;i++){
        if(max2<arr[i]&&arr[i]!=max){
            max2=arr[i];
        }
    }

    cout<<"the largest element is : "<<max<<endl;
    cout<<"the second largest element is :"<<max2;
    
    
    return 0;
}