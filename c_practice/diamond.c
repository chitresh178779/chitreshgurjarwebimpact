#include<stdio.h>

int main() {
     for(int i=0;i<5;i++){
        for(int j=5;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<(2*i)+1;k++){
            printf("*");
        }printf("\n");
    }
    for(int i=5;i>=0;i--){
        for(int j=i;j<=5;j++){
            printf(" ");
        }

        for(int k=(2*i)+1;k>0;k--){
            printf("*");
        }printf("\n");
    }
    return 0;
}