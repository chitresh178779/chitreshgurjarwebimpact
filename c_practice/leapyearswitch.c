#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("enter the year to check leap year or not : ");
    scanf("%d",&n);
    switch(n%4==0){
        case 1:
        printf("IT IS A LEAP YEAR");
        break;
        case 0:
        printf("IT IS NOT A LEAP YEAR");

    }
    return 0;
}