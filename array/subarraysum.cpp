#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,6,2,4,1},sum,k=0,sub[]={};
    cin>>sum;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            k=k+arr[j];
            sub[j]=arr[j];
            if(k==sum){
                break;
            }
        }
        k=0;
    }
    int n=sizeof(sub)/sizeof(sub[0]);
    for(int i=0;i<n;i++){
        cout<<sub[i]<<" ";
    }
    return 0;
}