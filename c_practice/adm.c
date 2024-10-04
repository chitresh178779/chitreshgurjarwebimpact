#include<stdio.h>

int main() {
    int math,chem,phy;
    printf("enter marks in maths");
    scanf("%d",&math);
    printf("enter marks in chem");
    scanf("%d",&chem);
    printf("enter marks in phy");
    scanf("%d",&phy);
    int pm= math+phy;
    int tot= chem+phy+math;
    if(((math>=65)&&(phy>=55)&&(chem>=50)&&(tot>190))||(pm>=140)){
        printf("the candidate is eligible");
    }
    else{
        printf("candidate is not eligible");
    }

    
    return 0;
}