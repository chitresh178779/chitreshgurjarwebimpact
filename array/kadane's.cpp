#include<iostream>
using namespace std;
int main()
{
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    long long maxi=0;
    int sum=0;
    for(int i=0;i<9;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    return 0;
}