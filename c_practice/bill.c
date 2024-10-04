#include<stdio.h>


int main() {
    int customerID;
    char name[20];
    int unit;
    float bill;
    printf("enter customer id : ");
    scanf("%d",&customerID);
    printf("enter name : ");
    scanf("%s",&name);
    printf("enter unit : ");
    scanf("%d",&unit);
    if(unit<=199){
        bill=unit*1.20;
    }
    else if(unit>=200&&unit<400){
        bill=unit*1.50;

    }
    else if(unit>=400&&unit<600){
        bill=unit*1.80;

    }
    else {
        bill=unit*2.00;

    }
    if(bill<100){
        printf("the bill should be atleast RS.100\n");
    }
    
    if(bill>400){
        bill=bill+bill*0.15;
    }
    printf("the bill is : %f",bill);
    return 0;

}