#include<stdio.h>


int main() {
    int n,n2,sum=0,d=0,ld;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>=10){
        sum =0;
            while (n != 0) {
            ld = n % 10; 
            sum += ld; 
            n /= 10; 
        }

        n = sum;
    
        
    }
    printf("%d",sum);
    return 0;
}