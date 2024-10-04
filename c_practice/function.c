#include<stdio.h>
void sum(int a,int b){
    int add;
    add=a+b;
    printf("%d",add);
}
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    sum(x,y);
    return 0;
}