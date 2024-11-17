#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,4,6,5,3},n,found=0;
    cin>>n;
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            cout<<"the position is:"<<i;
            found=1;
            break;
        }
    }
    if(found==0){
        for(int i=0;i<4;i++){
            if(n<arr[i]){
                cout<<"the expected potion is:"<<i;
                break;
            }
            else if(n>arr[4]){
                cout<<"the expected position is:"<<5;
                break;
            }
            else if(arr[i]<n&&arr[i+1]>n){
                cout<<"the expected position is:"<<i+1;
                break;
            }
        }
    }
    
    return 0;
}