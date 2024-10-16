#include<stdio.h>

int main() {
    int arr[]={1,2,3,6,5,4,7,8,9,10};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}