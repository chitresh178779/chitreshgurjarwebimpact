#include<stdio.h>

int main() {
    int a,b;
    char  c;
    scanf("%d %d %c",&a ,&b,&c);
    switch(c){
        case '+':
        printf("sum is : %d",a+b);
        break;
        case  '-':
        printf("subtraction is : %d",a-b);
        break;
        case  '*':
        printf("multiplication is :%d",a*b);
        break;
        case  '/':
        printf("division is :%d",a/b);
        break;
        
    }
    return 0;
}