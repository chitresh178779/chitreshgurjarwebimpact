#include<stdio.h>
#include<stdbool.h>

int main() {
    int n1,n2,n3,g;
    printf("enter three number one by one : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    g=n1>n2&&n1>n3;

    switch(g){
        case 1:
        printf("N1 IS GREATER");
        break;
        case 0:
        if(n2>n3)
        printf("N2 IS GREATER");
        else
        printf("N3 IS GREATER");
        break;
    }
    return 0;
}