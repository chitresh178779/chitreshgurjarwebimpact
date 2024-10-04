#include<stdio.h>

int main() {
    int n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int i=1;
    while(i<n){
        if(n%i==0){
             s=s+i;
        }
         i++;
    }
    if(s==n){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}