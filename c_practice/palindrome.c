#include <stdio.h>
int main() {
    int n,n2,reverse = 0, remainder;
    printf("Enter an integer :");
    scanf("%d",&n);
    n2=n;
    while (n != 0) {
         remainder = n % 10;
         reverse = reverse * 10 + remainder;
         n /= 10;
}
    if(reverse==n2){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}