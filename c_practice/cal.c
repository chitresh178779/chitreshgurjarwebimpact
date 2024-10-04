#include<stdio.h>

int main() {
    int n,a,b,sum,sub,mul,div;
    printf("enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division");
    scanf("%d",&n);
    if(n==1){
        printf("enter number 1 : ");
        scanf("%d",&a);
        printf("enter number 2 : ");
        scanf("%d",&b);
        sum= a+b; 
        printf("the sum is : %d",sum);      
}
    else if(n==2){
        printf("enter number 1 : ");
        scanf("%d",&a);
        printf("enter number 2 : ");
        scanf("%d",&b);
        sub=a-b; 
        printf("the subtraction is : %d",sub);      
}
    else if(n==3){
        printf("enter number 1 : ");
        scanf("%d",&a);
        printf("enter number 2 : ");
        scanf("%d",&b);
        mul=a*b;  
        printf("the multiplication is : %d",mul);     
}
    else if(n==4){
        printf("enter number 1 : ");
        scanf("%d",&a);
        printf("enter number 2 : ");
        scanf("%d",&b);
        div=a/b;      
        printf("the division is : %d",div); 
}
    
    return 0;
}