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



int main() {
    int a,b;
    printf("enter value of x : ");
    scanf("%d",&a);
    printf("enter value of y : ");
    scanf("%d",&b);
    int n;
    printf("enter 1 for addition\n2 for subtratction\n3 for multiplication\n4 for division : ");
    scanf("%d",&n);
    switch(n){
        case 1:sum(a,b);break;
        case 2:sub(a,b);break;
        case 3:multi(a,b);break;
        case 4:divi(a,b);break;
    }
    return 0;
}