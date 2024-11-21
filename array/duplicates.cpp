#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,2,2,1,5,5,4,10},count=1;
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                count=count+1;
                arr[j]=0;
            }
        }
        if(count>1){
            cout<<arr[i]<<"appears="<<count<<" times"<<endl;
        }
        count=1;
        }
    }
    return 0;
}