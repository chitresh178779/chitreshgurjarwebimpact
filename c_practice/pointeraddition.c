#include<stdio.h>

int main() {
    int a=10;
    int b=30;
    int* ptr1=&a;
    int* ptr2=&b;
    printf("%d",*ptr1+*ptr2);
    return 0;
}