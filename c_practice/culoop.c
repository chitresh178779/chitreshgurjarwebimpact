#include<stdio.h>

int main() {
    int n;
    printf("enter the last number : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
       printf("%d cube = %d\n",i,i*i*i);
       i++;
    }
    return 0;
}