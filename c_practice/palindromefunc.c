#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void palindrome(int a){
    int n2,reverse = 0, remainder;
    n2=a;
    while (a != 0) {
         remainder = a % 10;
         reverse = reverse * 10 + remainder;
         a /= 10;
    }
    switch(reverse==n2){
        case 1:printf("true");break;
        case 0:printf("false");break;
    }
}


int main() {
    int a;
    scanf("%d",&a);
    palindrome(a);
    return 0;
}