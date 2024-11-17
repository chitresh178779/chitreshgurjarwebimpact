#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={-4,-3,0,1,8},esq=0,arrsq[5]={};
    for(int i=0;i<5;i++){
        esq=arr[i]*arr[i];
        arrsq[i]=esq;
        esq=0;
    }
    sort(arrsq,arrsq+5);
    for(int i=0;i<5;i++){
        cout<<arrsq[i]<<" ";
    }
    return 0;
}