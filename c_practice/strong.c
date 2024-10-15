#include<stdio.h>

int main() {
    int n,n2,n3,d=0,sum=0,ld=0;
    scanf("%d",&n);
    n2=n;
    n3=n;
    while(n!=0){
       n=n/10;
       d=d+1;
    }
    while(n2!=0){
        ld=n2%10;
        int fact=1;
        for(int j=1;j<=ld;j++){
            fact=fact*j;
        }
        
        
        n2=n2/10;
        sum=sum+fact;
    }
    if(sum==n3){
        printf("it is strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}