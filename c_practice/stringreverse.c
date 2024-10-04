#include<stdio.h>
#include<string.h>

int main() {
    char a[]="xyz";
    int strlen= sizeof(a)/sizeof(a[0]);
    printf("%d",strlen);
    for(int i=strlen-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}