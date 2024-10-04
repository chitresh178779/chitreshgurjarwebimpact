#include<stdio.h>

int main() {
    char name[20];
    int rollno,math,phy,chem;
    printf("enter the name of the student\n");
    scanf("%s",&name);
    printf("enter the marks in maths\n");
    scanf("%d",&math);
    printf("enter the marks in physics\n");
    scanf("%d",&phy);
    printf("enter the marks in chem\n");
    scanf("%d",&chem);
    int total=math+phy+chem;
    float per=total/3.0;
    printf("The name of the student: %s \n",name);
    printf("marks in maths: %d \n",math);
    printf("marks in physics: %d \n",phy);
    printf("marks in chemistry: %d \n",chem);
    printf("total marks: %d \n",total);
    printf("percentage is: %f \n",per);

    if(per>75){
        printf("first division");
    }
    else if((per<75)&&(per>65)){
        printf("second division");
    }
    else{
        printf("third division");
    }


    return 0;
}