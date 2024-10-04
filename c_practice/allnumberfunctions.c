#include<stdio.h>
#include<math.h>
void evenoradd(int n){
    if(n%2==0)
    printf("number %d is even",n);
}
void harshad(int n){
    int n2,s,ld,sum=0;
    n2=n;
    for(int i=1;i<=s;i++){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    if(n2%sum==0){
        printf("it is a harshad number");
    }
    else{
        printf("it is not a harshad number");
    }
}
void armstrong(int n){
    int n2,n3,ld,np=1,sum=0,d=0;
    n2=n;
    n3=n;
    while(n!=0){
        d=d+1;
        n=n/10;
    }
    while(n2!=0){
        ld=n2%10;
        np=pow(ld,d);
        n2=n2/10;
        sum=sum+np;
    }
    if(n3==sum){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }

}
void automorphic(int n){
    unsigned long long nsq,n3,b,d=0,n2;
    nsq=n*n;
    n3=n;
    while(n!=0){
        d=d+1;
        n=n/10;
    }
    b=pow(10,d);
    n2=(nsq%b);
    if(n2==n3){
      printf("IT IS AN AUTOMORPHIC NUMBER");
  }
    else{
      printf("IT IS NOT AUTOMORPHIC NUMBER");
  }
   
}

int main() {
    int a;
    printf("enter the number a: ");
    scanf("%d",&a);
    harshad(a);
    printf("\n");
    printf("\n");
    armstrong(a);
    printf("\n");
    automorphic(a);
    printf("\n");
    evenoradd(a);
    return 0;
}