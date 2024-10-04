#include<stdio.h>
#include<math.h>


int main() {
    unsigned long long n,nsq,n3,b,d=0,n2;
    printf("enter the number :");
    scanf("%llu",&n);
    nsq=n*n;
    n3=n;
    while(n!=0){
        d=d+1;
        n=n/10;
    }
    printf("%llu\n",d);
    b=pow(10,d);
    n2=(nsq%b);
    printf("%llu\n",n3);
    printf("%llu\n",n2);
    if(n2==n3){
      printf("IT IS AN AUTOMORPHIC NUMBER");
  }
    else{
      printf("IT IS NOT AUTOMORPHIC NUMBER");
  }
   

    return 0;
}