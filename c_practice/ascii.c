#include<stdio.h>

int main() {
    char c;
    printf("give the character to check type : ");
    scanf("%c",&c);
    if(c>=65&&c<=90){
        printf("capital letter");
    }
    else if(c>=97&&c<=122){
        printf("small letter");
    }
    else if(c>=48&&c<=57){
        printf("numbers");
    }
    else{
        printf("special character");
    }
    return 0;
}