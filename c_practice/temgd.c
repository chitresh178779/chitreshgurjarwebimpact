#include<stdio.h>

int main() {
    float tempC;
    printf("enter temperature in celcius : ");
    scanf("%f",&tempC);
    if(tempC<=0){
        printf("freezing weather");
    }
    else if((tempC>0)&&(tempC<=10)){
        printf("very cold weather");
    }
    else if((tempC>10)&&(tempC<=20)){
        printf("cold weather");
    }
    else if((tempC>20)&&(tempC<=30)){

        printf("normal temperature");
    }
    else if((tempC>30)&&(tempC<40)){
        printf("hot weather");
    }
    else {
        printf("very hot weather");
    }
    return 0;
}