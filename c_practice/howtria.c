#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b+c)==180){
        printf("the triangle is valid");
    
    }
    else{
        printf("the triangle is not valid");
    }
    return 0;
}