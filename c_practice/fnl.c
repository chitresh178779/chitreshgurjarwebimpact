#include<stdio.h>

int main() {
    int n,lastdigit,sum;
    printf("enter a 4 digit number to add its first and last digit : ");
    scanf("%d",&n);
    lastdigit=n%10;
    sum= lastdigit;
    n=n/1000;
    sum= sum+n;
    printf("the sum of first and last digit is : %d",sum);




    return 0;
}