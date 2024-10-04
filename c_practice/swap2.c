#include<stdio.h>

int main() {
    int x,y;
    printf("before swapping\n");
    printf("no 1=");
    scanf("%d",&x);
    
    printf("no 2=");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;



    printf("after swapping\n");
    printf("no 1=%d\n",x);
    
    
    printf("no 2=%d",y);
    

    return 0;
}