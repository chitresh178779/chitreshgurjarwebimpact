#include<stdio.h>

int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("the number %d is even",n);
    }
    else{
        printf("the number is odd");
    }
    

    return 0;
}