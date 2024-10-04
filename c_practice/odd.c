#include<stdio.h>

int main() {
    int n,s=0;
    printf("enter the last number : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(i%2!=0){
            s+=i;
            
        }
        i++;
    }
    printf("%d",s);
    return 0;
}