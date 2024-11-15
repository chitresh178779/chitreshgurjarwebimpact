#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[5]={1,4,5,6,8};
    int b[5]={2,3,7,9,10};
    int c[10]={};
    int index=0;
    for(int i=0;i<5;i++){
        c[i]=a[i];
        index++;
    }
    for(int i=index,j=0;i<10,j<5;i++,j++){
        c[i]=b[j];
    }
    sort(c,c+10);
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}