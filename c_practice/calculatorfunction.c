#include<stdio.h>
void sum(int a,int b){
    int add=0;
    add=a+b;
    printf("%d",add);
}
void sub(int a,int b){
    int subt;
    subt=a-b;
    printf("%d",subt);
}
void multi(int a,int b){
    int mul=1;
    mul=a*b;
    printf("%d",mul);
}
void divi(int a,int b){
    int div;
    div=a/b;
    printf("%d",div);
}
void calc(int a,int b){
    sum(a,b);
    printf("\n");
    sub(a,b);
    printf("\n");
    multi(a,b);
    printf("\n");
    divi(a,b);
}


int main() {
    int x,y;
    printf("enter value of x : ");
    scanf("%d",&x);
    printf("enter value of y : ");
    scanf("%d",&y);
    calc(x,y);
    return 0;
}