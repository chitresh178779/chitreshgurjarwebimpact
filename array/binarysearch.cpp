#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int start=0,end=9,mid=(start+end)/2,found=0,n;
    cout<<"enter the number to search";
    cin>>n;
    while(found==0){
        if(arr[mid]==n){
            cout<<"found at index: "<<mid;
            found=1;
        }
        else if(arr[mid]>n){
            end=mid-1;
            mid=(start+end)/2;
        }
        else if(arr[mid]<n){
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    return 0;
}