#include<stdio.h>

int main() {
    int y;
    printf("enter the year\n");
    scanf("%d",&y);
    if(y%4==0){
        printf("thr year is leap year");
    }
    else{
        printf("it si not a leap year");
    }
    return 0;
}