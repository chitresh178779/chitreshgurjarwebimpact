/* Write a C program to accept the height of a person in centimeters and categorize the person according to their height.*/ 
#include<stdio.h>

int main() {
    int height;
    printf("enter height\n");
    scanf("%d",&height);
    if(height<145){
        printf("dwarf");
    }
    else{
        printf("noice");
    }

    return 0;
}