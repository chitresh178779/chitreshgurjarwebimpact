#include<stdio.h>

int main() {
    int n,s=0,m=1;
    printf("enter the last number : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        s+=i;
        m*=i;
        i++;
    }
    printf("the sum is : %d",s);
    printf("the multiplication is : %d",m);

    return 0;
}