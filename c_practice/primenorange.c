#include<stdio.h>
void primenorange(int n){
    for(int i=2;i<=n;i++){
        int c=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
               c=0;
               break;
            }
            else{
                continue;
            }
          
        }
     
          if(c!=0){
            printf("%d",i);
            printf("\n");
          
        }    
    }
}
        

int main(){
    int a;
    scanf("%d",&a);
    primenorange(a);
}