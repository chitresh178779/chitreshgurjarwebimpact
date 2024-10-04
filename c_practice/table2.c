#include<stdio.h>

int main() {
    int e,s;
    printf("enter the start : ");
    scanf("%d",&s);
    printf("enter the end : ");
    scanf("%d",&e);
    for(int i=1;i<=10;i++){
        for(int k=s;k<=e;k++){
            printf("%d * %d = %d\t",k,i,k*i);

            }
            printf("\n");
                
        }printf("\n");
            
            
    
    
      

    return 0;
}