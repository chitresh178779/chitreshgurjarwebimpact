#include<stdio.h>

int main() {
    int x,y,z;
    printf("before swapping\n");
    printf("no 1=");
    scanf("%d",&x);
    
    printf("no 2=");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;

    printf("after swapping\n");
    printf("no 1=%d\n",x);
    
    
    printf("no 2=%d",y);
    

    return 0;
}