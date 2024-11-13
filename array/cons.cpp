#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,1,0,1,1,1};
    int consecutives=0;
    for(int i=0;i<6;i++){
        if(arr[i]==1){
            consecutives=consecutives+1;
        }
        else{
            consecutives=0;
        }
    }
    cout<<"max no of consecutivs 1's :"<<consecutives;
    return 0;
}