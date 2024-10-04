#include<stdio.h>

int main() {
    int p;
    float r,t,si;
    scanf("%d",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    si=p*r*t/100;
    printf("simple interest is=%f",si);
    return 0;
}