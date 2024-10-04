#include<stdio.h>

int main() {
    int sum=0;float avg;
    for(int i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    printf("%f",sum/10.0);
    return 0;
}