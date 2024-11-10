#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,6,4,9};
    int n,pos;
    cout<<"enter the element to be inserted : ";
    cin>>n;
    cout<<"\ngive the index of element to be inserted :";
    cin>>pos;
    for(int i=pos;i<5;i++){
        arr[i+1]=arr[i];
    }
    arr[pos]=n;
    cout<<"after modification"<<"\n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}