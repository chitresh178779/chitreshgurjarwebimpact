#include<stdio.h>

int main() {
    int e,s,n;
    printf("enter the start : ");
    scanf("%d",&s);
    printf("enter the end : ");
    scanf("%d",&e);
    printf("enter 1 to display even number table\nor 0 for odd tables : ");
    scanf("%d",&n);
    
    
        if(n==1){
        for(int i=1;i<=10;i++){
            for(int k=s;k<=e;k++){
                if(k%2==0){
                    printf("%d * %d = %d\t",k,i,k*i);
                    

                }
            
        
            }printf("\n");
           
        }printf("\n");
        }
            
        
        else if(n==0){
            for(int i=1;i<=10;i++){
                for(int k=s;k<=e;k++){
                    if((k%2)!=0){
                       printf("%d * %d = %d\t",k,i,k*i);
                

                    }

                }printf("\n");


            }printf("\n");

        }
        
                
       
            
            
    
    
      

    return 0;
}