#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("enter the number to check even or add : ");
    scanf("%d",&n);
    switch(n%2==0){
        case 1:
        printf("THE NUMBER IS EVEN");
        break;
        case 0:
        printf("THE NUMBER IS ODD");

    }
    return 0;
}