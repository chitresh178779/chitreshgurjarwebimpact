#include<stdio.h>

int main() {
    int a,b,c;
    printf("enter the side 1 : ");
    scanf("%d",&a);
    printf("enter the side 2 : ");
    scanf("%d",&b);
    printf("enter the side 3 : ");
    scanf("%d",&c);
    if((a==b)&&(b==c)){
        printf("equilateral traingle");
    }
    else if((a==b)&&(b!=c)){
        printf("isoceles traingle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}