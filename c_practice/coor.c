#include<stdio.h>

int main() {
    int x,y;
    printf("enter number 1");
    scanf("%d",&x);
    printf("enter number 2");
    scanf("%d",&y);
    
    if((x>0)&&(y>0)){
        printf("coordinates lies 1st quadrant");
    }
    else if((x>0)&&(y<0)){
        printf("coordinates lies 4th quadrant");
    }
    else if ((x<0)&&(y<0))
    {
        printf("coordinates lies 3rd quadrant");
    }
    else if((x<0)&&(y>0)){
        printf("coordinates lies 2nd quadrant");

    }
    return 0;
}