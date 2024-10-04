#include<stdio.h>
void pyramid(char c,int row,int col){
    for(int i=0;i<=row;i++){
        for(int j=col;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }printf("\n");

    }
}
#include<stdio.h>

int main() {
    int n,c;
    char ch;
    printf("enter the charater : ");
    scanf("%c",&ch);
    printf("enter the number of row : ");
    scanf("%d",&n);
    printf("enter the number of col : ");
    scanf("%d",&c);
    pyramid(ch,n,c);

    return 0;
}