#include<stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    printf("before modification:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int i,n;
    printf("enter the index whose element to be changed :");
    scanf("%d",&i);
    printf("enter the new number:");
    scanf("%d",&n);
    arr[i]=n;
    printf("after modification:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}