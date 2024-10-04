#include<stdio.h>

int main() {
    int n;
    printf("enter the number for the month : ");
    scanf("%d",&n);
    switch (n){
        case 1:
        printf("JANUARY\n");
        printf("31");
        break;
        case 2:
        printf("FEBRUARY\n");
        printf("28");
        break;
        case 3:
        printf("MARCH\n");
        printf("31");
        break;
        case 4:
        printf("APRIL\n");
        printf("30");
        break;
        case 5:
        printf("MAY\n");
        printf("31");
        break;
        case 6:
        printf("JUNE\n");
        printf("30");
        break;
        case 7:
        printf("JULY\n");
        printf("31");
        break;
        case 8:
        printf("AUGUST\n");
        printf("31");
        break;
        case 9:
        printf("SEPTEMBER\n");
        printf("30");
        break;
        case 10:
        printf("OCTOBER\n");
        printf("31");
        break;
        case 11:
        printf("NOVEMBER\n");
        printf("30");
        break;
        case 12:
        printf("DECEMBER\n");
        printf("31");
        


    }
    return 0;
}