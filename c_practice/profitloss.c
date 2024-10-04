#include<stdio.h>

int main() {
    int p1,p2,n;
    printf("enter 1 for profit and 2 for loss : ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("enter the buying amount : ");
        scanf("%d",&p1);
        printf("enter the selling price : ");
        scanf("%d",&p2);
        printf("profit is :%d",p2-p1);
        break;
        case 2:
        printf("enter the buying amount : ");
        scanf("%d",&p1);
        printf("enter the selling price : ");
        scanf("%d",&p2);
        printf("loss is :%d",p1-p2);
        break;
    }

    return 0;
}