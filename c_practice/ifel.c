#include<stdio.h>

int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n>0){
        printf("the number %d is positive",n);
    }
    else{
        printf("not positive");
    }
    return 0;
}