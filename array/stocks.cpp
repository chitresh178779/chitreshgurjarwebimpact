#include<iostream>
using namespace std;
int main(){
    int arr[6]={100,90,101,50,85,10},value=0,pr[5],maxprofit=0,day1=0,day2=0;
    for(int i=0;i<5;i++){
        value=arr[i+1]-arr[i];
        pr[i]=value;
        value=0;
    }
    for(int i=0;i<5;i++){
        if(maxprofit<pr[i]){
            maxprofit=pr[i];
            day1=i+1;
            day2=day1+1;
        }
    }
    cout<<"the maximum profit if you buy at day:"<<day1<<" and sell at day:"<<day2<<"="<<maxprofit;
    return 0;
}
