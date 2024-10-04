#include<stdio.h>

int main() {
    int n1,n2;
    printf("enter number 1 and number 2\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1==n2){
        printf("the numbers are equal");
    }
    else{
        printf("the number are not equal");
    }

    return 0;
}