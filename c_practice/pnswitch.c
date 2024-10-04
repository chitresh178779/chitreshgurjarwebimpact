#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    switch(n>0){
        case 1:
        printf("positive number");
        break;
        case 0:
        printf("negative");
        break;
        
    }
    return 0;
}