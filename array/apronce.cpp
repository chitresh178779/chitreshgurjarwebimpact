#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,1,2,3,5,2,5,2};
    int i=0,temp;
    while(i<8){
        int d=0;
        temp=arr[i];
        for(int j=0;j<8;j++){
            if(arr[j]==temp){
                d=d+1;
            }
        }
        if(d==1){
            cout<<temp;
        }
        i++;
    }
    return 0;
}