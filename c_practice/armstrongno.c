#include<stdio.h>
#include<math.h>

int main() {
    int n,n2,n3,ld,np=1,sum=0,d=0;
    printf("enter the number : ");
    scanf("%d",&n);
    n2=n;
    n3=n;
    while(n!=0){
        d=d+1;
        n=n/10;
    }
    printf("%d\n",d);
    while(n2!=0){
        ld=n2%10;
        printf("%d\n",ld);
        np=pow(ld,d);
        printf("%d\n",np);
        n2=n2/10;
        sum=sum+np;
    }
    printf("%d",sum);
    if(n3==sum){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
    return 0;
}