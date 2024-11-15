#include<iostream>
using namespace std;
int main(){
    int arr[6]={8,9,7,2,4,5};
    int n1,n2;
    cout<<"enter start :";
    cin>>n1;
    cout<<"enter end :";
    cin>>n2;
    while(n1<=n2){
        int found=1;
        for(int i=0;i<6;i++){
            if(n1!=arr[i]){
                found=0;
            }
            else{
                found=1;
                break;
            }
        }
        if(found==0){
            cout<<n1<<"  ";
        }
        
        n1++;
    }
    return 0;

 }