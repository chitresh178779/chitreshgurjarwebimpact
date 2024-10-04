#include<stdio.h>

int main() {
    int n,d,ld;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the digits in the number : ");
    scanf("%d",&d);
    for(int i=1;i<=d;i++){
        ld=n%10;
        printf("%d\n",ld);
        n=n/10;
    }
    return 0;
}