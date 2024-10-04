#include<stdio.h>

void kirana();

int main() {
    int a,b,c,d,e;
    printf("enter amount for item 1 :");
    scanf("%d",&a);
    printf("enter amount for item 2 :");
    scanf("%d",&b);
    printf("enter amount for item 3 :");
    scanf("%d",&c);
    printf("enter amount for item 4 :");
    scanf("%d",&d);
    printf("enter amount for item 5 :");
    scanf("%d",&e);
    kirana(a,b,c,d,e);
    return 0;
}
void kirana(int a,int b,int c, int d, int e){
    float sum;
    sum=a+b+c+d+e;
    if(sum>=500){
        sum=sum - sum*0.1;
        printf("bill after 10perc. discount : %f",sum);
    }
    else{

        printf("the bill is : %f",sum);
    }
}