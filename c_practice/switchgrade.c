#include<stdio.h>

int main() {
    char grade;
    printf("enter the grade of student in uppercase : ");
    scanf("%c",&grade);
    switch(grade){
        case 'E':
        printf("excellent");
        break;
        case 'V':
        printf("Very Good");
        break;
        case 'G':
        printf("Good");
        break;
        case 'A':
        printf("Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Please enter the grade in uppercase!!!!!!!!!!");
        break;


    }
    return 0;
}