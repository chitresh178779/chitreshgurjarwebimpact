// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,n2,s,ld,sum=0;
    printf("enter the number to check : ");
    scanf("%d",&n);
    n2=n;
    
    printf("enter the number if digits in the number : ");
    scanf("%d",&s);
    
    for(int i=1;i<=s;i++){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    if(n2%sum==0){
        printf("it is a harshad number");
    }
    else{
        printf("it is not a harshad number");
    }
    return 0;
}