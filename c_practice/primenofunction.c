#include<stdio.h>
void prime(int n){
    int i=1;
    for(int j=2;j<n;j++){
        if(n%j==0){
            i=0;
            break;
        }
        else{
            continue;
        }
    }
    if(i==1){
        printf("prime");
    }
    else if(i==0){
        printf("non prime");
    }
       
}
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
}