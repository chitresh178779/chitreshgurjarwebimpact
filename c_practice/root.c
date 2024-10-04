#include<stdio.h>


int main() {
    int a,b,c,d;
    printf("enter the coefficiant of x2\n");
    scanf("%d",&a);
    printf("enter the coefficiant of x\n");
    scanf("%d",&b);
    printf("enter the constant\n");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d==0){
        printf("roots are real and equal");
    }
    else if(d>0){
        printf("roots are real and unequal");
    }
    else{
        printf("roots are imaginary");
    }
    return 0;
}