#include<stdio.h>

int main() {
    int n;
    printf("enter thr number of itreations : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(i%4==0){
            printf("hello\n");
        }
        else{
            printf("%d\n",i);
        }
        i++;
    }


    return 0;
}