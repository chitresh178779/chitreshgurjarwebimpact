#include<stdio.h>

int main() {
    int a,d;
    printf("for 10 percent off\n");
    printf("enter MRP:");
    scanf("%d",&a);
    d=a-((a*10)/100);
    printf("price after discount:%d",d);

    return 0;
}