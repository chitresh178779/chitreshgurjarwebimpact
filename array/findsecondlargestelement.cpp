#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,5,7};
    int max=arr[0],max2;
    int i=1;
    while(i<=2){
           for(int j=0;j<5;j++){
                if(max<arr[j]){
                    max=arr[j];
                }
            cout<<j<<endl;
            cout<<max<<endl;
            i++;
           }       
    
    }
    return 0;
}