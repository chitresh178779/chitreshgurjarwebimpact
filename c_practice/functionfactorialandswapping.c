#include<stdio.h>
// void factorial(int n){
//      int f=1;
//      for(int i=n;i>=1;i--){
//         f=f*i;
//      }
//      printf("%d",f);

// }
void swapp(int n,int m){
     printf("before swapping:\n");
     printf("n1 = %d and n2 = %d\n",n,m);
     n=n+m;
     m=n-m;
     n=n-m;
     printf("after swapping:\n");
     printf("n1 = %d and n2 = %d",n,m);

}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    swapp(a,b);
    //factorial(a);
}